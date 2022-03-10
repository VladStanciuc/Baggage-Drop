/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Vlad/Desktop/tester_tema_1/build/bin/baggage_drop.v";
static int ng1[] = {8, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {17, 0};
static int ng6[] = {1, 0};



static void Always_104_0(char *t0)
{
    char t6[8];
    char t8[16];
    char t20[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;

LAB0:    t1 = (t0 + 4080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 4400);
    *((int *)t2) = 1;
    t3 = (t0 + 4112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(104, ng0);

LAB5:    xsi_set_current_line(105, ng0);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);
    memcpy(t6, t5, 8);
    t4 = (t0 + 3000);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 16);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 16, t4, 16, t5, 32);
    t7 = (t0 + 3000);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3000);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    xsi_vlogtype_concat(t8, 34, 34, 3U, t7, 16, t5, 16, t2, 2);
    t9 = (t0 + 1880);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 16);
    t10 = (t0 + 2520);
    xsi_vlogvar_assign_value(t10, t8, 16, 0, 18);
    xsi_set_current_line(110, ng0);

LAB6:    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB8;

LAB7:    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB8;

LAB11:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB9;

LAB10:    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB12;

LAB13:    goto LAB2;

LAB8:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB10;

LAB9:    *((unsigned int *)t6) = 1;
    goto LAB10;

LAB12:    xsi_set_current_line(110, ng0);

LAB14:    xsi_set_current_line(111, ng0);
    t17 = (t0 + 2520);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t21 = ((char*)((ng4)));
    t22 = (t0 + 2200);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlogtype_concat(t20, 18, 18, 2U, t24, 16, t21, 2);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_minus(t25, 18, t19, 18, t20, 18);
    t26 = (t0 + 2840);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 18);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2840);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t9, 2, t10, 32, 1);
    t11 = ((char*)((ng2)));
    memset(t20, 0, 8);
    t17 = (t6 + 4);
    t18 = (t11 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t11);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t17);
    t16 = *((unsigned int *)t18);
    t27 = (t15 ^ t16);
    t28 = (t14 | t27);
    t29 = *((unsigned int *)t17);
    t30 = *((unsigned int *)t18);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB18;

LAB15:    if (t31 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t20) = 1;

LAB18:    t21 = (t20 + 4);
    t34 = *((unsigned int *)t21);
    t35 = (~(t34));
    t36 = *((unsigned int *)t20);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(115, ng0);

LAB23:    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1880);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2520);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t6, 0, 8);
    t11 = (t6 + 4);
    t17 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t17);
    t15 = (t14 >> 0);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 65535U);
    t27 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t27 & 65535U);
    xsi_vlogtype_concat(t8, 34, 34, 3U, t6, 16, t5, 16, t2, 2);
    t18 = (t0 + 2040);
    xsi_vlogvar_assign_value(t18, t8, 0, 0, 16);
    t19 = (t0 + 2680);
    xsi_vlogvar_assign_value(t19, t8, 16, 0, 18);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 16, t4, 16, t5, 32);
    t7 = (t0 + 2360);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);

LAB21:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t7 = (t0 + 3160);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1880);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2520);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 18);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2200);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1720);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    goto LAB6;

LAB17:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(112, ng0);

LAB22:    xsi_set_current_line(113, ng0);
    t22 = ((char*)((ng3)));
    t23 = (t0 + 1880);
    t24 = (t23 + 56U);
    t26 = *((char **)t24);
    t39 = (t0 + 2840);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memset(t25, 0, 8);
    t42 = (t25 + 4);
    t43 = (t41 + 4);
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 0);
    *((unsigned int *)t25) = t45;
    t46 = *((unsigned int *)t43);
    t47 = (t46 >> 0);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t48 & 65535U);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t49 & 65535U);
    xsi_vlogtype_concat(t8, 34, 34, 3U, t25, 16, t26, 16, t22, 2);
    t50 = (t0 + 2040);
    xsi_vlogvar_assign_value(t50, t8, 0, 0, 16);
    t51 = (t0 + 2680);
    xsi_vlogvar_assign_value(t51, t8, 16, 0, 18);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2200);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t20, 0, 8);
    t7 = (t20 + 4);
    t9 = (t5 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 0);
    *((unsigned int *)t20) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 0);
    *((unsigned int *)t7) = t15;
    t16 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t16 & 32767U);
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t27 & 32767U);
    xsi_vlogtype_concat(t6, 16, 16, 2U, t20, 15, t2, 1);
    t10 = (t0 + 2360);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 16);
    goto LAB21;

}


extern void uut_m_00000000001674668843_1428314649_init()
{
	static char *pe[] = {(void *)Always_104_0};
	xsi_register_didat("uut_m_00000000001674668843_1428314649", "isim/tester.exe.sim/uut/m_00000000001674668843_1428314649.didat");
	xsi_register_executes(pe);
}
