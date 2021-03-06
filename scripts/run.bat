@echo off

setlocal EnableDelayedExpansion

SET run_mode=

if "%1"=="gui" SET run_mode=gui
if "%2"=="gui" SET run_mode=gui

SET build_mode=call build.bat

if "%1"=="nobuild" SET build_mode=
if "%2"=="nobuild" SET build_mode=

%build_mode%

del ..\scripts\..\results.txt > NUL 2> NUL
del ..\scripts\..\results.log > NUL 2> NUL

if not exist ..\build\synth\tester.ngc (
    echo -10.00: failed to synthesize, check synthesis log for errors>> ..\results.txt
    touch ..\results.log

    goto result
)

for /D %%d in (..\tests\*) do (
    set test=%%~nd
    set test_suffix=!test:~-2!
    
    call run_test.bat !test! %run_mode% nobuild
    
    if not exist ..\run\!test!\tester.result (
	if "!test_suffix!"=="ot" (
            echo  -6.00: failed to run test !test!, check compilation and execution logs>> ..\results.txt
        ) else if "!test_suffix!"=="op" (
            echo  -1.50: failed to run test !test!, check compilation and execution logs>> ..\results.txt
	) else if "!test_suffix!"=="ut" (
            echo  -1.50: failed to run test !test!, check compilation and execution logs>> ..\results.txt
        ) else if "!test_suffix!"=="em" (
            echo  -1.00: failed to run test !test!, check compilation and execution logs>> ..\results.txt
	) else (
            echo   0.00: failed to run unknown test !test!>> ..\results.txt
        )
    ) else (
        type ..\run\!test!\tester.result >> ..\results.txt
    )
    type ..\run\!test!\tester.log >> ..\results.log
)

:result
type ..\results.log
echo --------------------------------------------------------------------------------
type ..\results.txt
