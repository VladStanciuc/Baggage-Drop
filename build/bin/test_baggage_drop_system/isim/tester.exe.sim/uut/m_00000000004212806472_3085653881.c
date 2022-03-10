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
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {94U, 0U};
static unsigned int ng4[] = {80U, 0U};
static unsigned int ng5[] = {92U, 0U};
static unsigned int ng6[] = {115U, 0U};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {118U, 0U};
static unsigned int ng9[] = {120U, 0U};
static unsigned int ng10[] = {57U, 0U};
static unsigned int ng11[] = {56U, 0U};



static void Always_143_0(char *t0)
{
    char t6[8];
    char t29[8];
    char t40[8];
    char t41[8];
    char t46[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3968);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(143, ng0);

LAB5:    xsi_set_current_line(145, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB33;

LAB32:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB34;

LAB35:    memset(t29, 0, 8);
    t20 = (t6 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t20) != 0)
        goto LAB39;

LAB40:    t27 = (t29 + 4);
    t12 = *((unsigned int *)t29);
    t13 = *((unsigned int *)t27);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB41;

LAB42:    memcpy(t46, t29, 8);

LAB43:    t78 = (t46 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t46);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB55;

LAB56:
LAB57:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t20);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB62;

LAB59:    if (t16 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t6) = 1;

LAB62:    memset(t29, 0, 8);
    t27 = (t6 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t27) != 0)
        goto LAB65;

LAB66:    t30 = (t29 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t30);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB67;

LAB68:    memcpy(t46, t29, 8);

LAB69:    t94 = (t46 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t46);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB83:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(147, ng0);

LAB13:    xsi_set_current_line(148, ng0);
    t26 = (t0 + 1048U);
    t27 = *((char **)t26);
    t26 = (t0 + 1208U);
    t28 = *((char **)t26);
    memset(t29, 0, 8);
    t26 = (t27 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB15;

LAB14:    t30 = (t28 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t27) < *((unsigned int *)t28))
        goto LAB16;

LAB17:    t32 = (t29 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t29);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB24;

LAB23:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB24;

LAB27:    if (*((unsigned int *)t3) > *((unsigned int *)t4))
        goto LAB25;

LAB26:    t20 = (t6 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB28;

LAB29:
LAB30:
LAB21:    goto LAB12;

LAB15:    t31 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB17;

LAB16:    *((unsigned int *)t29) = 1;
    goto LAB17;

LAB19:    xsi_set_current_line(148, ng0);

LAB22:    xsi_set_current_line(150, ng0);
    t38 = ((char*)((ng3)));
    t39 = (t0 + 1768);
    xsi_vlogvar_assign_value(t39, t38, 0, 0, 7);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB24:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB26;

LAB25:    *((unsigned int *)t6) = 1;
    goto LAB26;

LAB28:    xsi_set_current_line(157, ng0);

LAB31:    xsi_set_current_line(159, ng0);
    t26 = ((char*)((ng7)));
    t27 = (t0 + 1768);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 7);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB30;

LAB33:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB35;

LAB34:    *((unsigned int *)t6) = 1;
    goto LAB35;

LAB37:    *((unsigned int *)t29) = 1;
    goto LAB40;

LAB39:    t26 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB40;

LAB41:    t28 = (t0 + 1368U);
    t30 = *((char **)t28);
    t28 = ((char*)((ng1)));
    memset(t40, 0, 8);
    t31 = (t30 + 4);
    t32 = (t28 + 4);
    t15 = *((unsigned int *)t30);
    t16 = *((unsigned int *)t28);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t31);
    t21 = *((unsigned int *)t32);
    t22 = (t18 ^ t21);
    t23 = (t17 | t22);
    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t32);
    t33 = (t24 | t25);
    t34 = (~(t33));
    t35 = (t23 & t34);
    if (t35 != 0)
        goto LAB47;

LAB44:    if (t33 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t40) = 1;

LAB47:    memset(t41, 0, 8);
    t39 = (t40 + 4);
    t36 = *((unsigned int *)t39);
    t37 = (~(t36));
    t42 = *((unsigned int *)t40);
    t43 = (t42 & t37);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t39) != 0)
        goto LAB50;

LAB51:    t47 = *((unsigned int *)t29);
    t48 = *((unsigned int *)t41);
    t49 = (t47 & t48);
    *((unsigned int *)t46) = t49;
    t50 = (t29 + 4);
    t51 = (t41 + 4);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB43;

LAB46:    t38 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t41) = 1;
    goto LAB51;

LAB50:    t45 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB51;

LAB52:    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t46) = (t58 | t59);
    t60 = (t29 + 4);
    t61 = (t41 + 4);
    t62 = *((unsigned int *)t29);
    t63 = (~(t62));
    t64 = *((unsigned int *)t60);
    t65 = (~(t64));
    t66 = *((unsigned int *)t41);
    t67 = (~(t66));
    t68 = *((unsigned int *)t61);
    t69 = (~(t68));
    t70 = (t63 & t65);
    t71 = (t67 & t69);
    t72 = (~(t70));
    t73 = (~(t71));
    t74 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t74 & t72);
    t75 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t75 & t73);
    t76 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t76 & t72);
    t77 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t77 & t73);
    goto LAB54;

LAB55:    xsi_set_current_line(168, ng0);

LAB58:    xsi_set_current_line(170, ng0);
    t84 = ((char*)((ng10)));
    t85 = (t0 + 1768);
    xsi_vlogvar_assign_value(t85, t84, 0, 0, 7);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB57;

LAB61:    t26 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t29) = 1;
    goto LAB66;

LAB65:    t28 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB66;

LAB67:    t31 = (t0 + 2568);
    t32 = (t31 + 56U);
    t38 = *((char **)t32);
    t39 = ((char*)((ng2)));
    memset(t40, 0, 8);
    t45 = (t38 + 4);
    t50 = (t39 + 4);
    t36 = *((unsigned int *)t38);
    t37 = *((unsigned int *)t39);
    t42 = (t36 ^ t37);
    t43 = *((unsigned int *)t45);
    t44 = *((unsigned int *)t50);
    t47 = (t43 ^ t44);
    t48 = (t42 | t47);
    t49 = *((unsigned int *)t45);
    t53 = *((unsigned int *)t50);
    t54 = (t49 | t53);
    t55 = (~(t54));
    t56 = (t48 & t55);
    if (t56 != 0)
        goto LAB73;

LAB70:    if (t54 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t40) = 1;

LAB73:    memset(t41, 0, 8);
    t52 = (t40 + 4);
    t57 = *((unsigned int *)t52);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t62 = (t59 & t58);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t52) != 0)
        goto LAB76;

LAB77:    t64 = *((unsigned int *)t29);
    t65 = *((unsigned int *)t41);
    t66 = (t64 & t65);
    *((unsigned int *)t46) = t66;
    t61 = (t29 + 4);
    t78 = (t41 + 4);
    t84 = (t46 + 4);
    t67 = *((unsigned int *)t61);
    t68 = *((unsigned int *)t78);
    t69 = (t67 | t68);
    *((unsigned int *)t84) = t69;
    t72 = *((unsigned int *)t84);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB78;

LAB79:
LAB80:    goto LAB69;

LAB72:    t51 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB73;

LAB74:    *((unsigned int *)t41) = 1;
    goto LAB77;

LAB76:    t60 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB77;

LAB78:    t74 = *((unsigned int *)t46);
    t75 = *((unsigned int *)t84);
    *((unsigned int *)t46) = (t74 | t75);
    t85 = (t29 + 4);
    t86 = (t41 + 4);
    t76 = *((unsigned int *)t29);
    t77 = (~(t76));
    t79 = *((unsigned int *)t85);
    t80 = (~(t79));
    t81 = *((unsigned int *)t41);
    t82 = (~(t81));
    t83 = *((unsigned int *)t86);
    t87 = (~(t83));
    t70 = (t77 & t80);
    t71 = (t82 & t87);
    t88 = (~(t70));
    t89 = (~(t71));
    t90 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t90 & t88);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t91 & t89);
    t92 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t92 & t88);
    t93 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t93 & t89);
    goto LAB80;

LAB81:    xsi_set_current_line(178, ng0);
    t100 = ((char*)((ng2)));
    t101 = (t0 + 2408);
    xsi_vlogvar_assign_value(t101, t100, 0, 0, 1);
    goto LAB83;

}


extern void uut_m_00000000004212806472_3085653881_init()
{
	static char *pe[] = {(void *)Always_143_0};
	xsi_register_didat("uut_m_00000000004212806472_3085653881", "isim/tester.exe.sim/uut/m_00000000004212806472_3085653881.didat");
	xsi_register_executes(pe);
}
