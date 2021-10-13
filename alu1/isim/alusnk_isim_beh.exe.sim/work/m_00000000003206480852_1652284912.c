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
static const char *ng0 = "C:/Users/DELL/Documents/Verilog Lab/alu1/alusnk.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};



static void Always_26_0(char *t0)
{
    char t10[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(29, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 4, t8, 4, t9, 4);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 1);
    goto LAB23;

LAB9:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 4, t4, 4, t7, 4);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 1);
    goto LAB23;

LAB11:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    *((unsigned int *)t11) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t11 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t9);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB24;

LAB25:
LAB26:    memset(t10, 0, 8);
    t22 = (t10 + 4);
    t23 = (t11 + 4);
    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    *((unsigned int *)t10) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB28;

LAB27:    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & 15U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 15U);
    t32 = (t0 + 1768);
    xsi_vlogvar_assign_value(t32, t10, 0, 0, 1);
    goto LAB23;

LAB13:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 & t13);
    *((unsigned int *)t11) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t11 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t9);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB29;

LAB30:
LAB31:    memset(t10, 0, 8);
    t32 = (t10 + 4);
    t41 = (t11 + 4);
    t42 = *((unsigned int *)t11);
    t43 = (~(t42));
    *((unsigned int *)t10) = t43;
    *((unsigned int *)t32) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB33;

LAB32:    t48 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t48 & 15U);
    t49 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t49 & 15U);
    t50 = (t0 + 1768);
    xsi_vlogvar_assign_value(t50, t10, 0, 0, 1);
    goto LAB23;

LAB15:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 & t13);
    *((unsigned int *)t10) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t9);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB34;

LAB35:
LAB36:    t32 = (t0 + 1768);
    xsi_vlogvar_assign_value(t32, t10, 0, 0, 1);
    goto LAB23;

LAB17:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t10) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t9);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB37;

LAB38:
LAB39:    t32 = (t0 + 1768);
    xsi_vlogvar_assign_value(t32, t10, 0, 0, 1);
    goto LAB23;

LAB19:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    *((unsigned int *)t10) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t9);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB40;

LAB41:
LAB42:    t22 = (t0 + 1768);
    xsi_vlogvar_assign_value(t22, t10, 0, 0, 1);
    goto LAB23;

LAB21:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t11 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t9);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB43;

LAB44:
LAB45:    memset(t10, 0, 8);
    t32 = (t10 + 4);
    t41 = (t11 + 4);
    t37 = *((unsigned int *)t11);
    t38 = (~(t37));
    *((unsigned int *)t10) = t38;
    *((unsigned int *)t32) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB47;

LAB46:    t44 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t44 & 15U);
    t45 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t45 & 15U);
    t50 = (t0 + 1768);
    xsi_vlogvar_assign_value(t50, t10, 0, 0, 1);
    goto LAB23;

LAB24:    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t11) = (t20 | t21);
    goto LAB26;

LAB28:    t26 = *((unsigned int *)t10);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t10) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB27;

LAB29:    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t11) = (t20 | t21);
    t22 = (t4 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (~(t30));
    t33 = (t25 & t27);
    t34 = (t29 & t31);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t35);
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t36);
    t39 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t39 & t35);
    t40 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t40 & t36);
    goto LAB31;

LAB33:    t44 = *((unsigned int *)t10);
    t45 = *((unsigned int *)t41);
    *((unsigned int *)t10) = (t44 | t45);
    t46 = *((unsigned int *)t32);
    t47 = *((unsigned int *)t41);
    *((unsigned int *)t32) = (t46 | t47);
    goto LAB32;

LAB34:    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t20 | t21);
    t22 = (t4 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (~(t30));
    t33 = (t25 & t27);
    t34 = (t29 & t31);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t35);
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB36;

LAB37:    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t20 | t21);
    t22 = (t4 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t33 = (t26 & t25);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t34 = (t29 & t28);
    t30 = (~(t33));
    t31 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t30);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t31);
    goto LAB39;

LAB40:    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB42;

LAB43:    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t11) = (t20 | t21);
    t22 = (t4 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t33 = (t26 & t25);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t34 = (t29 & t28);
    t30 = (~(t33));
    t31 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t30);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t31);
    goto LAB45;

LAB47:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t41);
    *((unsigned int *)t10) = (t39 | t40);
    t42 = *((unsigned int *)t32);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t32) = (t42 | t43);
    goto LAB46;

}


extern void work_m_00000000003206480852_1652284912_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000003206480852_1652284912", "isim/alusnk_isim_beh.exe.sim/work/m_00000000003206480852_1652284912.didat");
	xsi_register_executes(pe);
}
