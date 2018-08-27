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
static int ng0[] = {0, 0};
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {48U, 0U};
static unsigned int ng4[] = {49U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {50U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {51U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {52U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {53U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {54U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {55U, 0U};
static unsigned int ng17[] = {7U, 0U};
static unsigned int ng18[] = {56U, 0U};
static unsigned int ng19[] = {8U, 0U};
static unsigned int ng20[] = {57U, 0U};
static unsigned int ng21[] = {9U, 0U};
static unsigned int ng22[] = {65U, 0U};
static unsigned int ng23[] = {10U, 0U};
static unsigned int ng24[] = {66U, 0U};
static unsigned int ng25[] = {11U, 0U};
static unsigned int ng26[] = {67U, 0U};
static unsigned int ng27[] = {12U, 0U};
static unsigned int ng28[] = {68U, 0U};
static unsigned int ng29[] = {13U, 0U};
static unsigned int ng30[] = {69U, 0U};
static unsigned int ng31[] = {14U, 0U};
static unsigned int ng32[] = {70U, 0U};
static unsigned int ng33[] = {15U, 0U};
static unsigned int ng34[] = {97U, 0U};
static unsigned int ng35[] = {98U, 0U};
static unsigned int ng36[] = {99U, 0U};
static unsigned int ng37[] = {100U, 0U};
static unsigned int ng38[] = {101U, 0U};
static unsigned int ng39[] = {102U, 0U};
static unsigned int ng40[] = {15U, 15U};
static int ng41[] = {4, 0};
static int ng42[] = {8, 0};
static int ng43[] = {48, 0, 0, 0};
static int ng44[] = {2, 0};



static int sp_hexstr_conv(char *t1, char *t2)
{
    char t5[8];
    char t14[8];
    char t30[8];
    char t31[8];
    char t33[8];
    char t37[8];
    char t45[8];
    char t53[8];
    char t57[8];
    char t59[16];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t58;

LAB0:    t0 = 1;

LAB2:    t3 = ((char*)((ng0)));
    t4 = (t1 + 10480);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 10160);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    t3 = (t1 + 608);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_minus(t5, 32, t4, 32, t3, 32);
    t6 = (t1 + 10640);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB3:    t3 = (t1 + 10640);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_greatereq(t5, 32, t6, 32, t7, 32);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:
LAB6:    t15 = (t1 + 10320);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t14, 0, 8);
    t18 = (t14 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t14) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t24 & 255U);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 255U);

LAB7:    t26 = ((char*)((ng1)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t26, 8);
    if (t27 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng3)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng4)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng6)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB14;

LAB15:    t3 = ((char*)((ng8)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB16;

LAB17:    t3 = ((char*)((ng10)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB18;

LAB19:    t3 = ((char*)((ng12)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB20;

LAB21:    t3 = ((char*)((ng14)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB22;

LAB23:    t3 = ((char*)((ng16)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB24;

LAB25:    t3 = ((char*)((ng18)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB26;

LAB27:    t3 = ((char*)((ng20)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB28;

LAB29:    t3 = ((char*)((ng22)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB30;

LAB31:    t3 = ((char*)((ng24)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB32;

LAB33:    t3 = ((char*)((ng26)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB34;

LAB35:    t3 = ((char*)((ng28)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB36;

LAB37:    t3 = ((char*)((ng30)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB38;

LAB39:    t3 = ((char*)((ng32)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB40;

LAB41:    t3 = ((char*)((ng34)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB42;

LAB43:    t3 = ((char*)((ng35)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB44;

LAB45:    t3 = ((char*)((ng36)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB46;

LAB47:    t3 = ((char*)((ng37)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB48;

LAB49:    t3 = ((char*)((ng38)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB50;

LAB51:    t3 = ((char*)((ng39)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB52;

LAB53:
LAB55:
LAB54:
LAB58:    t3 = ((char*)((ng40)));
    t4 = (t1 + 10960);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);

LAB56:    t3 = ((char*)((ng0)));
    t4 = (t1 + 10800);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB59:    t3 = (t1 + 10800);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng41)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t6, 32, t7, 32);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB60;

LAB61:    t3 = (t1 + 10480);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t6, 32, t7, 32);
    t8 = (t1 + 10480);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);
    t3 = (t1 + 10320);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng42)));
    xsi_vlog_unsigned_rshift(t59, 64, t6, 64, t7, 32);
    t8 = (t1 + 10320);
    xsi_vlogvar_assign_value(t8, t59, 0, 0, 64);
    t3 = (t1 + 10640);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_minus(t5, 32, t6, 32, t7, 32);
    t8 = (t1 + 10640);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);
    goto LAB3;

LAB8:
LAB57:    t28 = ((char*)((ng1)));
    t29 = (t1 + 10960);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    t3 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_unary_minus(t5, 32, t3, 32);
    t4 = (t1 + 10640);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB56;

LAB10:    t4 = ((char*)((ng1)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB12:    t4 = ((char*)((ng5)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB14:    t4 = ((char*)((ng7)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB16:    t4 = ((char*)((ng9)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB18:    t4 = ((char*)((ng11)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB20:    t4 = ((char*)((ng13)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB22:    t4 = ((char*)((ng15)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB24:    t4 = ((char*)((ng17)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB26:    t4 = ((char*)((ng19)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB28:    t4 = ((char*)((ng21)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB30:    t4 = ((char*)((ng23)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB32:    t4 = ((char*)((ng25)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB34:    t4 = ((char*)((ng27)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB36:    t4 = ((char*)((ng29)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB38:    t4 = ((char*)((ng31)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB40:    t4 = ((char*)((ng33)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB42:    t4 = ((char*)((ng23)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB44:    t4 = ((char*)((ng25)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB46:    t4 = ((char*)((ng27)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB48:    t4 = ((char*)((ng29)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB50:    t4 = ((char*)((ng31)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB52:    t4 = ((char*)((ng33)));
    t6 = (t1 + 10960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB60:
LAB62:    t15 = (t1 + 10480);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng41)));
    memset(t30, 0, 8);
    xsi_vlog_signed_multiply(t30, 32, t17, 32, t18, 32);
    t19 = (t1 + 10800);
    t26 = (t19 + 56U);
    t28 = *((char **)t26);
    memset(t31, 0, 8);
    xsi_vlog_signed_add(t31, 32, t30, 32, t28, 32);
    t29 = (t1 + 608);
    t32 = *((char **)t29);
    memset(t33, 0, 8);
    xsi_vlog_signed_less(t33, 32, t31, 32, t32, 32);
    t29 = (t33 + 4);
    t20 = *((unsigned int *)t29);
    t21 = (~(t20));
    t22 = *((unsigned int *)t33);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB63;

LAB64:
LAB65:    t3 = (t1 + 10800);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t6, 32, t7, 32);
    t8 = (t1 + 10800);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);
    goto LAB59;

LAB63:
LAB66:    t34 = (t1 + 10960);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t38 = (t1 + 10960);
    t39 = (t38 + 72U);
    t40 = *((char **)t39);
    t41 = (t1 + 10800);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_generic_get_index_select_value(t37, 1, t36, t40, 2, t43, 32, 1);
    t44 = (t1 + 10160);
    t46 = (t1 + 10160);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = (t1 + 10480);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng41)));
    memset(t53, 0, 8);
    xsi_vlog_signed_multiply(t53, 32, t51, 32, t52, 32);
    t54 = (t1 + 10800);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memset(t57, 0, 8);
    xsi_vlog_signed_add(t57, 32, t53, 32, t56, 32);
    xsi_vlog_generic_convert_bit_index(t45, t48, 2, t57, 32, 1);
    t58 = (t45 + 4);
    t25 = *((unsigned int *)t58);
    t27 = (!(t25));
    if (t27 == 1)
        goto LAB67;

LAB68:    goto LAB65;

LAB67:    xsi_vlogvar_assign_value(t44, t37, 0, *((unsigned int *)t45), 1);
    goto LAB68;

}

static void Initial_6576_0(char *t0)
{
    char t3[16];
    char t20[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:
LAB2:    t1 = ((char*)((ng1)));
    t2 = (t0 + 7760);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 7920);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    t1 = ((char*)((ng43)));
    memcpy(t3, t1, 8);
    t2 = (t3 + 8);
    memset(t2, 0, 8);
    t4 = (t0 + 11688);
    t5 = (t0 + 2888);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    t7 = (t0 + 10320);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 64);

LAB3:    t8 = (t0 + 11784);
    t9 = *((char **)t8);
    t10 = (t9 + 80U);
    t11 = *((char **)t10);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t16 = ((int  (*)(char *, char *))t15)(t0, t9);
    if (t16 != 0)
        goto LAB5;

LAB4:    t9 = (t0 + 11784);
    t17 = *((char **)t9);
    t9 = (t0 + 10160);
    t18 = (t9 + 56U);
    t19 = *((char **)t18);
    memcpy(t20, t19, 8);
    t21 = (t0 + 2888);
    t22 = (t0 + 11688);
    t23 = 0;
    xsi_delete_subprogram_invocation(t21, t17, t0, t22, t23);
    t24 = (t0 + 7120);
    xsi_vlogvar_assign_value(t24, t20, 0, 0, 8);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 7280);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 7440);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
LAB5:    t8 = (t0 + 11880U);
    *((char **)t8) = &&LAB3;
    goto LAB1;

}

static void Cont_6587_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t7[8];
    char t22[8];
    char t23[8];
    char t31[8];
    char t72[8];
    char *t1;
    char *t2;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;

LAB0:    t1 = (t0 + 12128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 744);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    memcpy(t31, t7, 8);

LAB10:    memset(t4, 0, 8);
    t59 = (t31 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t31);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t59) != 0)
        goto LAB20;

LAB21:    t66 = (t4 + 4);
    t67 = *((unsigned int *)t4);
    t68 = *((unsigned int *)t66);
    t69 = (t67 || t68);
    if (t69 > 0)
        goto LAB22;

LAB23:    t73 = *((unsigned int *)t4);
    t74 = (~(t73));
    t75 = *((unsigned int *)t66);
    t76 = (t74 || t75);
    if (t76 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t66) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t4) > 0)
        goto LAB28;

LAB29:    memcpy(t3, t70, 8);

LAB30:    t77 = (t0 + 18336);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memset(t81, 0, 8);
    t82 = 1U;
    t83 = t82;
    t84 = (t3 + 4);
    t85 = *((unsigned int *)t3);
    t82 = (t82 & t85);
    t86 = *((unsigned int *)t84);
    t83 = (t83 & t86);
    t87 = (t81 + 4);
    t88 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t88 | t82);
    t89 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t89 | t83);
    xsi_driver_vfirst_trans(t77, 0, 0);
    t90 = (t0 + 17904);
    *((int *)t90) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 880);
    t21 = *((char **)t20);
    t20 = ((char*)((ng0)));
    memset(t22, 0, 8);
    xsi_vlog_signed_equal(t22, 32, t21, 32, t20, 32);
    memset(t23, 0, 8);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t24) != 0)
        goto LAB13;

LAB14:    t32 = *((unsigned int *)t7);
    t33 = *((unsigned int *)t23);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = (t7 + 4);
    t36 = (t23 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t23) = 1;
    goto LAB14;

LAB13:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB14;

LAB15:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    t45 = (t7 + 4);
    t46 = (t23 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (~(t47));
    t49 = *((unsigned int *)t7);
    t50 = (t49 & t48);
    t51 = *((unsigned int *)t46);
    t52 = (~(t51));
    t53 = *((unsigned int *)t23);
    t54 = (t53 & t52);
    t55 = (~(t50));
    t56 = (~(t54));
    t57 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t57 & t55);
    t58 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t58 & t56);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t65 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB21;

LAB22:    t70 = (t0 + 3680U);
    t71 = *((char **)t70);
    memcpy(t72, t71, 8);
    goto LAB23;

LAB24:    t70 = ((char*)((ng0)));
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t3, 32, t72, 32, t70, 32);
    goto LAB30;

LAB28:    memcpy(t3, t72, 8);
    goto LAB30;

}

static void Cont_6588_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 12376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1016);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 4294967295U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t16, 8);

LAB16:    t23 = (t0 + 18400);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 1U;
    t29 = t28;
    t30 = (t3 + 4);
    t31 = *((unsigned int *)t3);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t36 = (t0 + 17920);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 3840U);
    t17 = *((char **)t16);
    memcpy(t18, t17, 8);
    goto LAB9;

LAB10:    t16 = ((char*)((ng0)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t16, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Always_6600_3(char *t0)
{
    char t10[8];
    char t36[8];
    char t37[8];
    char t67[8];
    char t84[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t85;
    unsigned int t86;
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

LAB0:    t1 = (t0 + 12624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 17936);
    *((int *)t2) = 1;
    t3 = (t0 + 12656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 8880);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 1968);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t2 = (t0 + 9040);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);

LAB17:    goto LAB2;

LAB7:
LAB18:    t7 = (t0 + 4160U);
    t11 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t11 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t7) == 0)
        goto LAB19;

LAB21:    t17 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t17) = 1;

LAB22:    t18 = (t10 + 4);
    t19 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = (~(t20));
    *((unsigned int *)t10) = t21;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB24;

LAB23:    t26 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t26 & 1U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 1U);
    t28 = (t10 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t10);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB25;

LAB26:    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t2 = (t0 + 9040);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);

LAB27:    goto LAB17;

LAB9:
LAB28:    t2 = (t0 + 4160U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB29;

LAB30:    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t2 = (t0 + 9040);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);

LAB31:    goto LAB17;

LAB11:
LAB32:    t2 = (t0 + 4160U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t4 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t2) != 0)
        goto LAB35;

LAB36:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB37;

LAB38:    memcpy(t37, t10, 8);

LAB39:    t59 = (t37 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t37);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB47;

LAB48:    t2 = (t0 + 4160U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB53;

LAB51:    if (*((unsigned int *)t2) == 0)
        goto LAB50;

LAB52:    t4 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t4) = 1;

LAB53:    t5 = (t10 + 4);
    t7 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    *((unsigned int *)t10) = t21;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB55;

LAB54:    t26 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t26 & 1U);
    t27 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t27 & 1U);
    memset(t36, 0, 8);
    t8 = (t10 + 4);
    t29 = *((unsigned int *)t8);
    t30 = (~(t29));
    t31 = *((unsigned int *)t10);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t8) != 0)
        goto LAB58;

LAB59:    t17 = (t36 + 4);
    t38 = *((unsigned int *)t36);
    t39 = *((unsigned int *)t17);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB60;

LAB61:    memcpy(t67, t36, 8);

LAB62:    t76 = (t67 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t67);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB70;

LAB71:    t2 = (t0 + 4160U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB76;

LAB74:    if (*((unsigned int *)t2) == 0)
        goto LAB73;

LAB75:    t4 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t4) = 1;

LAB76:    t5 = (t10 + 4);
    t7 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    *((unsigned int *)t10) = t21;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB78;

LAB77:    t26 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t26 & 1U);
    t27 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t27 & 1U);
    memset(t36, 0, 8);
    t8 = (t10 + 4);
    t29 = *((unsigned int *)t8);
    t30 = (~(t29));
    t31 = *((unsigned int *)t10);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t8) != 0)
        goto LAB81;

LAB82:    t17 = (t36 + 4);
    t38 = *((unsigned int *)t36);
    t39 = *((unsigned int *)t17);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB83;

LAB84:    memcpy(t84, t36, 8);

LAB85:    t94 = (t84 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t84);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB99;

LAB100:    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t2 = (t0 + 9040);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);

LAB101:
LAB72:
LAB49:    goto LAB17;

LAB13:
LAB102:    t2 = (t0 + 4160U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t4 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t2) != 0)
        goto LAB105;

LAB106:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB107;

LAB108:    memcpy(t37, t10, 8);

LAB109:    t59 = (t37 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t37);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB117;

LAB118:    t2 = (t0 + 4160U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB123;

LAB121:    if (*((unsigned int *)t2) == 0)
        goto LAB120;

LAB122:    t4 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t4) = 1;

LAB123:    t5 = (t10 + 4);
    t7 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    *((unsigned int *)t10) = t21;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB125;

LAB124:    t26 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t26 & 1U);
    t27 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t27 & 1U);
    memset(t36, 0, 8);
    t8 = (t10 + 4);
    t29 = *((unsigned int *)t8);
    t30 = (~(t29));
    t31 = *((unsigned int *)t10);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t8) != 0)
        goto LAB128;

LAB129:    t17 = (t36 + 4);
    t38 = *((unsigned int *)t36);
    t39 = *((unsigned int *)t17);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB130;

LAB131:    memcpy(t67, t36, 8);

LAB132:    t76 = (t67 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t67);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB140;

LAB141:    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t2 = (t0 + 9040);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);

LAB142:
LAB119:    goto LAB17;

LAB19:    *((unsigned int *)t10) = 1;
    goto LAB22;

LAB24:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t19);
    *((unsigned int *)t10) = (t22 | t23);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t18) = (t24 | t25);
    goto LAB23;

LAB25:    t34 = (t0 + 2104);
    t35 = *((char **)t34);
    t34 = (t0 + 9040);
    xsi_vlogvar_wait_assign_value(t34, t35, 0, 0, 2, 0LL);
    goto LAB27;

LAB29:    t5 = (t0 + 2240);
    t7 = *((char **)t5);
    t5 = (t0 + 9040);
    xsi_vlogvar_wait_assign_value(t5, t7, 0, 0, 2, 0LL);
    goto LAB31;

LAB33:    *((unsigned int *)t10) = 1;
    goto LAB36;

LAB35:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB36;

LAB37:    t8 = (t0 + 4000U);
    t11 = *((char **)t8);
    memset(t36, 0, 8);
    t8 = (t11 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t11);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t8) != 0)
        goto LAB42;

LAB43:    t29 = *((unsigned int *)t10);
    t30 = *((unsigned int *)t36);
    t31 = (t29 & t30);
    *((unsigned int *)t37) = t31;
    t18 = (t10 + 4);
    t19 = (t36 + 4);
    t28 = (t37 + 4);
    t32 = *((unsigned int *)t18);
    t33 = *((unsigned int *)t19);
    t38 = (t32 | t33);
    *((unsigned int *)t28) = t38;
    t39 = *((unsigned int *)t28);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB39;

LAB40:    *((unsigned int *)t36) = 1;
    goto LAB43;

LAB42:    t17 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB43;

LAB44:    t41 = *((unsigned int *)t37);
    t42 = *((unsigned int *)t28);
    *((unsigned int *)t37) = (t41 | t42);
    t34 = (t10 + 4);
    t35 = (t36 + 4);
    t43 = *((unsigned int *)t10);
    t44 = (~(t43));
    t45 = *((unsigned int *)t34);
    t46 = (~(t45));
    t47 = *((unsigned int *)t36);
    t48 = (~(t47));
    t49 = *((unsigned int *)t35);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t55 & t53);
    t56 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t56 & t54);
    t57 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t57 & t53);
    t58 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t58 & t54);
    goto LAB46;

LAB47:    t65 = (t0 + 1968);
    t66 = *((char **)t65);
    t65 = (t0 + 9040);
    xsi_vlogvar_wait_assign_value(t65, t66, 0, 0, 2, 0LL);
    goto LAB49;

LAB50:    *((unsigned int *)t10) = 1;
    goto LAB53;

LAB55:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t7);
    *((unsigned int *)t10) = (t22 | t23);
    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t24 | t25);
    goto LAB54;

LAB56:    *((unsigned int *)t36) = 1;
    goto LAB59;

LAB58:    t11 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB59;

LAB60:    t18 = (t0 + 4000U);
    t19 = *((char **)t18);
    memset(t37, 0, 8);
    t18 = (t19 + 4);
    t41 = *((unsigned int *)t18);
    t42 = (~(t41));
    t43 = *((unsigned int *)t19);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t18) != 0)
        goto LAB65;

LAB66:    t46 = *((unsigned int *)t36);
    t47 = *((unsigned int *)t37);
    t48 = (t46 & t47);
    *((unsigned int *)t67) = t48;
    t34 = (t36 + 4);
    t35 = (t37 + 4);
    t59 = (t67 + 4);
    t49 = *((unsigned int *)t34);
    t50 = *((unsigned int *)t35);
    t53 = (t49 | t50);
    *((unsigned int *)t59) = t53;
    t54 = *((unsigned int *)t59);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB67;

LAB68:
LAB69:    goto LAB62;

LAB63:    *((unsigned int *)t37) = 1;
    goto LAB66;

LAB65:    t28 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB66;

LAB67:    t56 = *((unsigned int *)t67);
    t57 = *((unsigned int *)t59);
    *((unsigned int *)t67) = (t56 | t57);
    t65 = (t36 + 4);
    t66 = (t37 + 4);
    t58 = *((unsigned int *)t36);
    t60 = (~(t58));
    t61 = *((unsigned int *)t65);
    t62 = (~(t61));
    t63 = *((unsigned int *)t37);
    t64 = (~(t63));
    t68 = *((unsigned int *)t66);
    t69 = (~(t68));
    t9 = (t60 & t62);
    t51 = (t64 & t69);
    t70 = (~(t9));
    t71 = (~(t51));
    t72 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t72 & t70);
    t73 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t73 & t71);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t74 & t70);
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t75 & t71);
    goto LAB69;

LAB70:    t82 = (t0 + 2104);
    t83 = *((char **)t82);
    t82 = (t0 + 9040);
    xsi_vlogvar_wait_assign_value(t82, t83, 0, 0, 2, 0LL);
    goto LAB72;

LAB73:    *((unsigned int *)t10) = 1;
    goto LAB76;

LAB78:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t7);
    *((unsigned int *)t10) = (t22 | t23);
    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t24 | t25);
    goto LAB77;

LAB79:    *((unsigned int *)t36) = 1;
    goto LAB82;

LAB81:    t11 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB82;

LAB83:    t18 = (t0 + 4000U);
    t19 = *((char **)t18);
    memset(t37, 0, 8);
    t18 = (t19 + 4);
    t41 = *((unsigned int *)t18);
    t42 = (~(t41));
    t43 = *((unsigned int *)t19);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB89;

LAB87:    if (*((unsigned int *)t18) == 0)
        goto LAB86;

LAB88:    t28 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t28) = 1;

LAB89:    t34 = (t37 + 4);
    t35 = (t19 + 4);
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    *((unsigned int *)t37) = t47;
    *((unsigned int *)t34) = 0;
    if (*((unsigned int *)t35) != 0)
        goto LAB91;

LAB90:    t54 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t54 & 1U);
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & 1U);
    memset(t67, 0, 8);
    t59 = (t37 + 4);
    t56 = *((unsigned int *)t59);
    t57 = (~(t56));
    t58 = *((unsigned int *)t37);
    t60 = (t58 & t57);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t59) != 0)
        goto LAB94;

LAB95:    t62 = *((unsigned int *)t36);
    t63 = *((unsigned int *)t67);
    t64 = (t62 & t63);
    *((unsigned int *)t84) = t64;
    t66 = (t36 + 4);
    t76 = (t67 + 4);
    t82 = (t84 + 4);
    t68 = *((unsigned int *)t66);
    t69 = *((unsigned int *)t76);
    t70 = (t68 | t69);
    *((unsigned int *)t82) = t70;
    t71 = *((unsigned int *)t82);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB96;

LAB97:
LAB98:    goto LAB85;

LAB86:    *((unsigned int *)t37) = 1;
    goto LAB89;

LAB91:    t48 = *((unsigned int *)t37);
    t49 = *((unsigned int *)t35);
    *((unsigned int *)t37) = (t48 | t49);
    t50 = *((unsigned int *)t34);
    t53 = *((unsigned int *)t35);
    *((unsigned int *)t34) = (t50 | t53);
    goto LAB90;

LAB92:    *((unsigned int *)t67) = 1;
    goto LAB95;

LAB94:    t65 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB95;

LAB96:    t73 = *((unsigned int *)t84);
    t74 = *((unsigned int *)t82);
    *((unsigned int *)t84) = (t73 | t74);
    t83 = (t36 + 4);
    t85 = (t67 + 4);
    t75 = *((unsigned int *)t36);
    t77 = (~(t75));
    t78 = *((unsigned int *)t83);
    t79 = (~(t78));
    t80 = *((unsigned int *)t67);
    t81 = (~(t80));
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t9 = (t77 & t79);
    t51 = (t81 & t87);
    t88 = (~(t9));
    t89 = (~(t51));
    t90 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t90 & t88);
    t91 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t91 & t89);
    t92 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t92 & t88);
    t93 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t93 & t89);
    goto LAB98;

LAB99:    t100 = (t0 + 2376);
    t101 = *((char **)t100);
    t100 = (t0 + 9040);
    xsi_vlogvar_wait_assign_value(t100, t101, 0, 0, 2, 0LL);
    goto LAB101;

LAB103:    *((unsigned int *)t10) = 1;
    goto LAB106;

LAB105:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB106;

LAB107:    t8 = (t0 + 4000U);
    t11 = *((char **)t8);
    memset(t36, 0, 8);
    t8 = (t11 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t11);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t8) != 0)
        goto LAB112;

LAB113:    t29 = *((unsigned int *)t10);
    t30 = *((unsigned int *)t36);
    t31 = (t29 & t30);
    *((unsigned int *)t37) = t31;
    t18 = (t10 + 4);
    t19 = (t36 + 4);
    t28 = (t37 + 4);
    t32 = *((unsigned int *)t18);
    t33 = *((unsigned int *)t19);
    t38 = (t32 | t33);
    *((unsigned int *)t28) = t38;
    t39 = *((unsigned int *)t28);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB114;

LAB115:
LAB116:    goto LAB109;

LAB110:    *((unsigned int *)t36) = 1;
    goto LAB113;

LAB112:    t17 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB113;

LAB114:    t41 = *((unsigned int *)t37);
    t42 = *((unsigned int *)t28);
    *((unsigned int *)t37) = (t41 | t42);
    t34 = (t10 + 4);
    t35 = (t36 + 4);
    t43 = *((unsigned int *)t10);
    t44 = (~(t43));
    t45 = *((unsigned int *)t34);
    t46 = (~(t45));
    t47 = *((unsigned int *)t36);
    t48 = (~(t47));
    t49 = *((unsigned int *)t35);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t55 & t53);
    t56 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t56 & t54);
    t57 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t57 & t53);
    t58 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t58 & t54);
    goto LAB116;

LAB117:    t65 = (t0 + 2240);
    t66 = *((char **)t65);
    t65 = (t0 + 9040);
    xsi_vlogvar_wait_assign_value(t65, t66, 0, 0, 2, 0LL);
    goto LAB119;

LAB120:    *((unsigned int *)t10) = 1;
    goto LAB123;

LAB125:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t7);
    *((unsigned int *)t10) = (t22 | t23);
    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t24 | t25);
    goto LAB124;

LAB126:    *((unsigned int *)t36) = 1;
    goto LAB129;

LAB128:    t11 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB129;

LAB130:    t18 = (t0 + 4000U);
    t19 = *((char **)t18);
    memset(t37, 0, 8);
    t18 = (t19 + 4);
    t41 = *((unsigned int *)t18);
    t42 = (~(t41));
    t43 = *((unsigned int *)t19);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB133;

LAB134:    if (*((unsigned int *)t18) != 0)
        goto LAB135;

LAB136:    t46 = *((unsigned int *)t36);
    t47 = *((unsigned int *)t37);
    t48 = (t46 & t47);
    *((unsigned int *)t67) = t48;
    t34 = (t36 + 4);
    t35 = (t37 + 4);
    t59 = (t67 + 4);
    t49 = *((unsigned int *)t34);
    t50 = *((unsigned int *)t35);
    t53 = (t49 | t50);
    *((unsigned int *)t59) = t53;
    t54 = *((unsigned int *)t59);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB137;

LAB138:
LAB139:    goto LAB132;

LAB133:    *((unsigned int *)t37) = 1;
    goto LAB136;

LAB135:    t28 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB136;

LAB137:    t56 = *((unsigned int *)t67);
    t57 = *((unsigned int *)t59);
    *((unsigned int *)t67) = (t56 | t57);
    t65 = (t36 + 4);
    t66 = (t37 + 4);
    t58 = *((unsigned int *)t36);
    t60 = (~(t58));
    t61 = *((unsigned int *)t65);
    t62 = (~(t61));
    t63 = *((unsigned int *)t37);
    t64 = (~(t63));
    t68 = *((unsigned int *)t66);
    t69 = (~(t68));
    t9 = (t60 & t62);
    t51 = (t64 & t69);
    t70 = (~(t9));
    t71 = (~(t51));
    t72 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t72 & t70);
    t73 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t73 & t71);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t74 & t70);
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t75 & t71);
    goto LAB139;

LAB140:    t82 = (t0 + 2376);
    t83 = *((char **)t82);
    t82 = (t0 + 9040);
    xsi_vlogvar_wait_assign_value(t82, t83, 0, 0, 2, 0LL);
    goto LAB142;

}

static void Always_6636_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 12872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 17952);
    *((int *)t2) = 1;
    t3 = (t0 + 12904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 6560U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    t2 = (t0 + 6720U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    t2 = (t0 + 9040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 100LL);

LAB11:
LAB8:    goto LAB2;

LAB6:    t11 = (t0 + 1968);
    t12 = *((char **)t11);
    t11 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 2, 0LL);
    goto LAB8;

LAB9:    t4 = (t0 + 1968);
    t5 = *((char **)t4);
    t4 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 2, 100LL);
    goto LAB11;

}

static void Always_6645_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;

LAB0:    t1 = (t0 + 13120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 17968);
    *((int *)t2) = 1;
    t3 = (t0 + 13152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 8880);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 1968);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    t2 = ((char*)((ng1)));
    t3 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB17:    goto LAB2;

LAB7:    t7 = ((char*)((ng1)));
    t10 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t10, t7, 0, 0, 1, 0LL);
    goto LAB17;

LAB9:    t2 = ((char*)((ng5)));
    t4 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB17;

LAB11:    t2 = ((char*)((ng1)));
    t4 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB17;

LAB13:    t2 = (t0 + 4000U);
    t4 = *((char **)t2);
    t2 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 1, 0LL);
    goto LAB17;

}

static void Cont_6655_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 13368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18464);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 3U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 1);
    t18 = (t0 + 17984);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_6661_7(char *t0)
{
    char t5[8];
    char t28[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;

LAB0:    t1 = (t0 + 13616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 7920);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t9) == 0)
        goto LAB4;

LAB6:    t15 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t15) = 1;

LAB7:    t16 = (t5 + 4);
    t17 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (~(t18));
    *((unsigned int *)t5) = t19;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB9;

LAB8:    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 & 1U);
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 1U);
    t26 = (t0 + 4000U);
    t27 = *((char **)t26);
    t29 = *((unsigned int *)t5);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t26 = (t5 + 4);
    t32 = (t27 + 4);
    t33 = (t28 + 4);
    t34 = *((unsigned int *)t26);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB10;

LAB11:
LAB12:    t56 = *((unsigned int *)t4);
    t57 = *((unsigned int *)t28);
    t58 = (t56 & t57);
    *((unsigned int *)t55) = t58;
    t59 = (t4 + 4);
    t60 = (t28 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB13;

LAB14:
LAB15:    t87 = (t0 + 18528);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    memset(t91, 0, 8);
    t92 = 1U;
    t93 = t92;
    t94 = (t55 + 4);
    t95 = *((unsigned int *)t55);
    t92 = (t92 & t95);
    t96 = *((unsigned int *)t94);
    t93 = (t93 & t96);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t98 | t92);
    t99 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t99 | t93);
    xsi_driver_vfirst_trans(t87, 0, 0);
    t100 = (t0 + 18000);
    *((int *)t100) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t17);
    *((unsigned int *)t5) = (t20 | t21);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t22 | t23);
    goto LAB8;

LAB10:    t39 = *((unsigned int *)t28);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t28) = (t39 | t40);
    t41 = (t5 + 4);
    t42 = (t27 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t5);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t27);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB12;

LAB13:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t4 + 4);
    t70 = (t28 + 4);
    t71 = *((unsigned int *)t4);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (~(t73));
    t75 = *((unsigned int *)t28);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (~(t77));
    t79 = (t72 & t74);
    t80 = (t76 & t78);
    t81 = (~(t79));
    t82 = (~(t80));
    t83 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t83 & t81);
    t84 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t84 & t82);
    t85 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t85 & t81);
    t86 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t86 & t82);
    goto LAB15;

}

static void Cont_6670_8(char *t0)
{
    char t3[8];
    char t25[8];
    char t52[8];
    char t71[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;

LAB0:    t1 = (t0 + 13864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7760);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t3 + 4);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t3) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 6080U);
    t24 = *((char **)t23);
    t26 = *((unsigned int *)t3);
    t27 = *((unsigned int *)t24);
    t28 = (t26 | t27);
    *((unsigned int *)t25) = t28;
    t23 = (t3 + 4);
    t29 = (t24 + 4);
    t30 = (t25 + 4);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB10;

LAB11:
LAB12:    t53 = (t0 + 4160U);
    t54 = *((char **)t53);
    memset(t52, 0, 8);
    t53 = (t54 + 4);
    t55 = *((unsigned int *)t53);
    t56 = (~(t55));
    t57 = *((unsigned int *)t54);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t53) == 0)
        goto LAB13;

LAB15:    t60 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t60) = 1;

LAB16:    t61 = (t52 + 4);
    t62 = (t54 + 4);
    t63 = *((unsigned int *)t54);
    t64 = (~(t63));
    *((unsigned int *)t52) = t64;
    *((unsigned int *)t61) = 0;
    if (*((unsigned int *)t62) != 0)
        goto LAB18;

LAB17:    t69 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t69 & 1U);
    t70 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t70 & 1U);
    t72 = *((unsigned int *)t25);
    t73 = *((unsigned int *)t52);
    t74 = (t72 & t73);
    *((unsigned int *)t71) = t74;
    t75 = (t25 + 4);
    t76 = (t52 + 4);
    t77 = (t71 + 4);
    t78 = *((unsigned int *)t75);
    t79 = *((unsigned int *)t76);
    t80 = (t78 | t79);
    *((unsigned int *)t77) = t80;
    t81 = *((unsigned int *)t77);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB19;

LAB20:
LAB21:    t103 = (t0 + 18592);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    memset(t107, 0, 8);
    t108 = 1U;
    t109 = t108;
    t110 = (t71 + 4);
    t111 = *((unsigned int *)t71);
    t108 = (t108 & t111);
    t112 = *((unsigned int *)t110);
    t109 = (t109 & t112);
    t113 = (t107 + 4);
    t114 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t114 | t108);
    t115 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t115 | t109);
    xsi_driver_vfirst_trans(t103, 0, 0);
    t116 = (t0 + 18016);
    *((int *)t116) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t3) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

LAB10:    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t25) = (t36 | t37);
    t38 = (t3 + 4);
    t39 = (t24 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (~(t40));
    t42 = *((unsigned int *)t3);
    t43 = (t42 & t41);
    t44 = *((unsigned int *)t39);
    t45 = (~(t44));
    t46 = *((unsigned int *)t24);
    t47 = (t46 & t45);
    t48 = (~(t43));
    t49 = (~(t47));
    t50 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t50 & t48);
    t51 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t51 & t49);
    goto LAB12;

LAB13:    *((unsigned int *)t52) = 1;
    goto LAB16;

LAB18:    t65 = *((unsigned int *)t52);
    t66 = *((unsigned int *)t62);
    *((unsigned int *)t52) = (t65 | t66);
    t67 = *((unsigned int *)t61);
    t68 = *((unsigned int *)t62);
    *((unsigned int *)t61) = (t67 | t68);
    goto LAB17;

LAB19:    t83 = *((unsigned int *)t71);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t71) = (t83 | t84);
    t85 = (t25 + 4);
    t86 = (t52 + 4);
    t87 = *((unsigned int *)t25);
    t88 = (~(t87));
    t89 = *((unsigned int *)t85);
    t90 = (~(t89));
    t91 = *((unsigned int *)t52);
    t92 = (~(t91));
    t93 = *((unsigned int *)t86);
    t94 = (~(t93));
    t95 = (t88 & t90);
    t96 = (t92 & t94);
    t97 = (~(t95));
    t98 = (~(t96));
    t99 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t99 & t97);
    t100 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t100 & t98);
    t101 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t101 & t97);
    t102 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t102 & t98);
    goto LAB21;

}

static void Cont_6679_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 14112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6080U);
    t3 = *((char **)t2);
    t2 = (t0 + 18656);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 18032);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_6693_10(char *t0)
{
    char t4[8];
    char t22[8];
    char t56[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
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
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;

LAB0:    t1 = (t0 + 14360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4000U);
    t3 = *((char **)t2);
    t2 = (t0 + 4160U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;

LAB7:    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB9;

LAB8:    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 1U);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t21 & 1U);
    t23 = *((unsigned int *)t3);
    t24 = *((unsigned int *)t4);
    t25 = (t23 & t24);
    *((unsigned int *)t22) = t25;
    t26 = (t3 + 4);
    t27 = (t4 + 4);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t26);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB10;

LAB11:
LAB12:    t54 = (t0 + 5920U);
    t55 = *((char **)t54);
    t57 = *((unsigned int *)t22);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t54 = (t22 + 4);
    t60 = (t55 + 4);
    t61 = (t56 + 4);
    t62 = *((unsigned int *)t54);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB13;

LAB14:
LAB15:    t83 = (t0 + 18720);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memset(t87, 0, 8);
    t88 = 1U;
    t89 = t88;
    t90 = (t56 + 4);
    t91 = *((unsigned int *)t56);
    t88 = (t88 & t91);
    t92 = *((unsigned int *)t90);
    t89 = (t89 & t92);
    t93 = (t87 + 4);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t94 | t88);
    t95 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t95 | t89);
    xsi_driver_vfirst_trans(t83, 0, 0);
    t96 = (t0 + 18048);
    *((int *)t96) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB9:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t13);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t18 | t19);
    goto LAB8;

LAB10:    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t34 | t35);
    t36 = (t3 + 4);
    t37 = (t4 + 4);
    t38 = *((unsigned int *)t3);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (~(t40));
    t42 = *((unsigned int *)t4);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = (t39 & t41);
    t47 = (t43 & t45);
    t48 = (~(t46));
    t49 = (~(t47));
    t50 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t50 & t48);
    t51 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t51 & t49);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t48);
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & t49);
    goto LAB12;

LAB13:    t67 = *((unsigned int *)t56);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t56) = (t67 | t68);
    t69 = (t22 + 4);
    t70 = (t55 + 4);
    t71 = *((unsigned int *)t69);
    t72 = (~(t71));
    t73 = *((unsigned int *)t22);
    t74 = (t73 & t72);
    t75 = *((unsigned int *)t70);
    t76 = (~(t75));
    t77 = *((unsigned int *)t55);
    t78 = (t77 & t76);
    t79 = (~(t74));
    t80 = (~(t78));
    t81 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t81 & t79);
    t82 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t82 & t80);
    goto LAB15;

}

static void Always_6782_11(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 14608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 18064);
    *((int *)t2) = 1;
    t3 = (t0 + 14640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 6560U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB10:    t2 = (t0 + 6720U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB15:    t2 = (t0 + 6400U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB19;

LAB16:    if (t18 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t13) = 1;

LAB19:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB20;

LAB21:
LAB24:    t2 = (t0 + 6240U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB28;

LAB25:    if (t18 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t13) = 1;

LAB28:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB29;

LAB30:    t2 = (t0 + 7760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB31:
LAB22:
LAB13:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = ((char*)((ng1)));
    t12 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 100LL);
    goto LAB8;

LAB11:
LAB14:    t4 = ((char*)((ng1)));
    t5 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);
    goto LAB13;

LAB18:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB19;

LAB20:
LAB23:    t26 = ((char*)((ng5)));
    t27 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 1, 100LL);
    goto LAB22;

LAB27:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB28;

LAB29:    t26 = ((char*)((ng1)));
    t27 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 1, 100LL);
    goto LAB31;

}

static void Always_6811_12(char *t0)
{
    char t13[8];
    char t27[8];
    char t59[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;

LAB0:    t1 = (t0 + 14856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 18080);
    *((int *)t2) = 1;
    t3 = (t0 + 14888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 6560U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    t2 = (t0 + 6720U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    t2 = (t0 + 7760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7920);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t14 = (t0 + 4000U);
    t15 = *((char **)t14);
    memset(t13, 0, 8);
    t14 = (t15 + 4);
    t6 = *((unsigned int *)t14);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t14) == 0)
        goto LAB12;

LAB14:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;

LAB15:    t17 = (t13 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (~(t19));
    *((unsigned int *)t13) = t20;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB17;

LAB16:    t25 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t25 & 1U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 1U);
    t28 = *((unsigned int *)t12);
    t29 = *((unsigned int *)t13);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t31 = (t12 + 4);
    t32 = (t13 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB18;

LAB19:
LAB20:    t60 = *((unsigned int *)t4);
    t61 = *((unsigned int *)t27);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t4 + 4);
    t64 = (t27 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB21;

LAB22:
LAB23:    t87 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t87, t59, 0, 0, 1, 100LL);

LAB11:
LAB8:    goto LAB2;

LAB6:    t11 = ((char*)((ng1)));
    t12 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 100LL);
    goto LAB8;

LAB9:    t4 = ((char*)((ng1)));
    t5 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);
    goto LAB11;

LAB12:    *((unsigned int *)t13) = 1;
    goto LAB15;

LAB17:    t21 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t13) = (t21 | t22);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t17) = (t23 | t24);
    goto LAB16;

LAB18:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t12 + 4);
    t42 = (t13 + 4);
    t43 = *((unsigned int *)t12);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t13);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    t56 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t56 & t54);
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t53);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t58 & t54);
    goto LAB20;

LAB21:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t4 + 4);
    t74 = (t27 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t4);
    t78 = (t77 & t76);
    t79 = *((unsigned int *)t74);
    t80 = (~(t79));
    t81 = *((unsigned int *)t27);
    t82 = (t81 & t80);
    t83 = (~(t78));
    t84 = (~(t82));
    t85 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t85 & t83);
    t86 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t86 & t84);
    goto LAB23;

}

static void Always_6836_13(char *t0)
{
    char t13[8];
    char t23[8];
    char t44[8];
    char t76[8];
    char t99[8];
    char t130[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    int t122;
    int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;

LAB0:    t1 = (t0 + 15104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 18096);
    *((int *)t2) = 1;
    t3 = (t0 + 15136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 6560U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB10:    t2 = (t0 + 6720U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB15:    t2 = (t0 + 7760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t5) == 0)
        goto LAB16;

LAB18:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB19:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t13) = t16;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB21;

LAB20:    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1U);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 1U);
    t24 = (t0 + 7920);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t23, 0, 8);
    t27 = (t26 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t27) == 0)
        goto LAB22;

LAB24:    t33 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t33) = 1;

LAB25:    t34 = (t23 + 4);
    t35 = (t26 + 4);
    t36 = *((unsigned int *)t26);
    t37 = (~(t36));
    *((unsigned int *)t23) = t37;
    *((unsigned int *)t34) = 0;
    if (*((unsigned int *)t35) != 0)
        goto LAB27;

LAB26:    t42 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t42 & 1U);
    t43 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t43 & 1U);
    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t23);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t13 + 4);
    t49 = (t23 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB28;

LAB29:
LAB30:    t77 = (t0 + 7760);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    memset(t76, 0, 8);
    t80 = (t79 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t80) == 0)
        goto LAB31;

LAB33:    t86 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t86) = 1;

LAB34:    t87 = (t76 + 4);
    t88 = (t79 + 4);
    t89 = *((unsigned int *)t79);
    t90 = (~(t89));
    *((unsigned int *)t76) = t90;
    *((unsigned int *)t87) = 0;
    if (*((unsigned int *)t88) != 0)
        goto LAB36;

LAB35:    t95 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t95 & 1U);
    t96 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t96 & 1U);
    t97 = (t0 + 4000U);
    t98 = *((char **)t97);
    t100 = *((unsigned int *)t76);
    t101 = *((unsigned int *)t98);
    t102 = (t100 & t101);
    *((unsigned int *)t99) = t102;
    t97 = (t76 + 4);
    t103 = (t98 + 4);
    t104 = (t99 + 4);
    t105 = *((unsigned int *)t97);
    t106 = *((unsigned int *)t103);
    t107 = (t105 | t106);
    *((unsigned int *)t104) = t107;
    t108 = *((unsigned int *)t104);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB37;

LAB38:
LAB39:    t131 = *((unsigned int *)t44);
    t132 = *((unsigned int *)t99);
    t133 = (t131 | t132);
    *((unsigned int *)t130) = t133;
    t134 = (t44 + 4);
    t135 = (t99 + 4);
    t136 = (t130 + 4);
    t137 = *((unsigned int *)t134);
    t138 = *((unsigned int *)t135);
    t139 = (t137 | t138);
    *((unsigned int *)t136) = t139;
    t140 = *((unsigned int *)t136);
    t141 = (t140 != 0);
    if (t141 == 1)
        goto LAB40;

LAB41:
LAB42:    t158 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t158, t130, 0, 0, 1, 100LL);

LAB13:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = ((char*)((ng5)));
    t12 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 100LL);
    goto LAB8;

LAB11:
LAB14:    t4 = ((char*)((ng5)));
    t5 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);
    goto LAB13;

LAB16:    *((unsigned int *)t13) = 1;
    goto LAB19;

LAB21:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t17 | t18);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t19 | t20);
    goto LAB20;

LAB22:    *((unsigned int *)t23) = 1;
    goto LAB25;

LAB27:    t38 = *((unsigned int *)t23);
    t39 = *((unsigned int *)t35);
    *((unsigned int *)t23) = (t38 | t39);
    t40 = *((unsigned int *)t34);
    t41 = *((unsigned int *)t35);
    *((unsigned int *)t34) = (t40 | t41);
    goto LAB26;

LAB28:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t13 + 4);
    t59 = (t23 + 4);
    t60 = *((unsigned int *)t13);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t23);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB30;

LAB31:    *((unsigned int *)t76) = 1;
    goto LAB34;

LAB36:    t91 = *((unsigned int *)t76);
    t92 = *((unsigned int *)t88);
    *((unsigned int *)t76) = (t91 | t92);
    t93 = *((unsigned int *)t87);
    t94 = *((unsigned int *)t88);
    *((unsigned int *)t87) = (t93 | t94);
    goto LAB35;

LAB37:    t110 = *((unsigned int *)t99);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t99) = (t110 | t111);
    t112 = (t76 + 4);
    t113 = (t98 + 4);
    t114 = *((unsigned int *)t76);
    t115 = (~(t114));
    t116 = *((unsigned int *)t112);
    t117 = (~(t116));
    t118 = *((unsigned int *)t98);
    t119 = (~(t118));
    t120 = *((unsigned int *)t113);
    t121 = (~(t120));
    t122 = (t115 & t117);
    t123 = (t119 & t121);
    t124 = (~(t122));
    t125 = (~(t123));
    t126 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t126 & t124);
    t127 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t127 & t125);
    t128 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t128 & t124);
    t129 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t129 & t125);
    goto LAB39;

LAB40:    t142 = *((unsigned int *)t130);
    t143 = *((unsigned int *)t136);
    *((unsigned int *)t130) = (t142 | t143);
    t144 = (t44 + 4);
    t145 = (t99 + 4);
    t146 = *((unsigned int *)t144);
    t147 = (~(t146));
    t148 = *((unsigned int *)t44);
    t149 = (t148 & t147);
    t150 = *((unsigned int *)t145);
    t151 = (~(t150));
    t152 = *((unsigned int *)t99);
    t153 = (t152 & t151);
    t154 = (~(t149));
    t155 = (~(t153));
    t156 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t156 & t154);
    t157 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t157 & t155);
    goto LAB42;

}

static void Always_6854_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 15352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 18112);
    *((int *)t2) = 1;
    t3 = (t0 + 15384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 4000U);
    t5 = *((char **)t4);
    t4 = (t0 + 8400);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 100LL);
    t2 = (t0 + 8080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);
    goto LAB2;

}

static void Always_6874_15(char *t0)
{
    char t13[8];
    char t25[8];
    char t57[8];
    char t76[8];
    char t108[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
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
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;

LAB0:    t1 = (t0 + 15600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 18128);
    *((int *)t2) = 1;
    t3 = (t0 + 15632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 6560U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB10:    t2 = (t0 + 6720U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB15:    t2 = (t0 + 6240U);
    t3 = *((char **)t2);
    t2 = (t0 + 4160U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t4 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t2) == 0)
        goto LAB16;

LAB18:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB19:    t11 = (t13 + 4);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB21;

LAB20:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 1U);
    t22 = (t0 + 7920);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t26 = *((unsigned int *)t13);
    t27 = *((unsigned int *)t24);
    t28 = (t26 & t27);
    *((unsigned int *)t25) = t28;
    t29 = (t13 + 4);
    t30 = (t24 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB22;

LAB23:
LAB24:    t58 = (t0 + 4000U);
    t59 = *((char **)t58);
    memset(t57, 0, 8);
    t58 = (t59 + 4);
    t60 = *((unsigned int *)t58);
    t61 = (~(t60));
    t62 = *((unsigned int *)t59);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t58) == 0)
        goto LAB25;

LAB27:    t65 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t65) = 1;

LAB28:    t66 = (t57 + 4);
    t67 = (t59 + 4);
    t68 = *((unsigned int *)t59);
    t69 = (~(t68));
    *((unsigned int *)t57) = t69;
    *((unsigned int *)t66) = 0;
    if (*((unsigned int *)t67) != 0)
        goto LAB30;

LAB29:    t74 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t74 & 1U);
    t75 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t75 & 1U);
    t77 = *((unsigned int *)t25);
    t78 = *((unsigned int *)t57);
    t79 = (t77 & t78);
    *((unsigned int *)t76) = t79;
    t80 = (t25 + 4);
    t81 = (t57 + 4);
    t82 = (t76 + 4);
    t83 = *((unsigned int *)t80);
    t84 = *((unsigned int *)t81);
    t85 = (t83 | t84);
    *((unsigned int *)t82) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB31;

LAB32:
LAB33:    t109 = *((unsigned int *)t3);
    t110 = *((unsigned int *)t76);
    t111 = (t109 | t110);
    *((unsigned int *)t108) = t111;
    t112 = (t3 + 4);
    t113 = (t76 + 4);
    t114 = (t108 + 4);
    t115 = *((unsigned int *)t112);
    t116 = *((unsigned int *)t113);
    t117 = (t115 | t116);
    *((unsigned int *)t114) = t117;
    t118 = *((unsigned int *)t114);
    t119 = (t118 != 0);
    if (t119 == 1)
        goto LAB34;

LAB35:
LAB36:    t136 = (t108 + 4);
    t137 = *((unsigned int *)t136);
    t138 = (~(t137));
    t139 = *((unsigned int *)t108);
    t140 = (t139 & t138);
    t141 = (t140 != 0);
    if (t141 > 0)
        goto LAB37;

LAB38:
LAB39:    t2 = (t0 + 8080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB13:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = ((char*)((ng5)));
    t12 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 100LL);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    goto LAB8;

LAB11:
LAB14:    t4 = ((char*)((ng5)));
    t5 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    goto LAB13;

LAB16:    *((unsigned int *)t13) = 1;
    goto LAB19;

LAB21:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t18 | t19);
    goto LAB20;

LAB22:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    t39 = (t13 + 4);
    t40 = (t24 + 4);
    t41 = *((unsigned int *)t13);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (~(t43));
    t45 = *((unsigned int *)t24);
    t46 = (~(t45));
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t49 = (t42 & t44);
    t50 = (t46 & t48);
    t51 = (~(t49));
    t52 = (~(t50));
    t53 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t53 & t51);
    t54 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t54 & t52);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);
    t56 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t56 & t52);
    goto LAB24;

LAB25:    *((unsigned int *)t57) = 1;
    goto LAB28;

LAB30:    t70 = *((unsigned int *)t57);
    t71 = *((unsigned int *)t67);
    *((unsigned int *)t57) = (t70 | t71);
    t72 = *((unsigned int *)t66);
    t73 = *((unsigned int *)t67);
    *((unsigned int *)t66) = (t72 | t73);
    goto LAB29;

LAB31:    t88 = *((unsigned int *)t76);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t76) = (t88 | t89);
    t90 = (t25 + 4);
    t91 = (t57 + 4);
    t92 = *((unsigned int *)t25);
    t93 = (~(t92));
    t94 = *((unsigned int *)t90);
    t95 = (~(t94));
    t96 = *((unsigned int *)t57);
    t97 = (~(t96));
    t98 = *((unsigned int *)t91);
    t99 = (~(t98));
    t100 = (t93 & t95);
    t101 = (t97 & t99);
    t102 = (~(t100));
    t103 = (~(t101));
    t104 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t104 & t102);
    t105 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t105 & t103);
    t106 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t106 & t102);
    t107 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t107 & t103);
    goto LAB33;

LAB34:    t120 = *((unsigned int *)t108);
    t121 = *((unsigned int *)t114);
    *((unsigned int *)t108) = (t120 | t121);
    t122 = (t3 + 4);
    t123 = (t76 + 4);
    t124 = *((unsigned int *)t122);
    t125 = (~(t124));
    t126 = *((unsigned int *)t3);
    t127 = (t126 & t125);
    t128 = *((unsigned int *)t123);
    t129 = (~(t128));
    t130 = *((unsigned int *)t76);
    t131 = (t130 & t129);
    t132 = (~(t127));
    t133 = (~(t131));
    t134 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t134 & t132);
    t135 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t135 & t133);
    goto LAB36;

LAB37:
LAB40:    t142 = (t0 + 4160U);
    t143 = *((char **)t142);
    t142 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t142, t143, 0, 0, 1, 100LL);
    goto LAB39;

}

static void Cont_6893_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 15848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18784);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 18144);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_6894_17(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 16096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8560);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18848);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 18160);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_6895_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6400U);
    t3 = *((char **)t2);
    t2 = (t0 + 18912);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 18176);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_6896_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 16592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18976);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 18192);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_6897_20(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
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
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;

LAB0:    t1 = (t0 + 16840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1424);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 4294967295U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t37 = *((unsigned int *)t4);
    t38 = (~(t37));
    t39 = *((unsigned int *)t12);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t43, 8);

LAB16:    t44 = (t0 + 19040);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 1U;
    t50 = t49;
    t51 = (t3 + 4);
    t52 = *((unsigned int *)t3);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans(t44, 0, 0);
    t57 = (t0 + 18208);
    *((int *)t57) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 7920);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t20) == 0)
        goto LAB17;

LAB19:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;

LAB20:    t27 = (t16 + 4);
    t28 = (t19 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    *((unsigned int *)t16) = t30;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB22;

LAB21:    t35 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t35 & 1U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 1U);
    goto LAB9;

LAB10:    t41 = (t0 + 7920);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t43, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t16) = 1;
    goto LAB20;

LAB22:    t31 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t16) = (t31 | t32);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t33 | t34);
    goto LAB21;

}

static void Cont_6898_21(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t23[8];
    char t82[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;

LAB0:    t1 = (t0 + 17088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1560);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 4294967295U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t72 = *((unsigned int *)t4);
    t73 = (~(t72));
    t74 = *((unsigned int *)t12);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t82, 8);

LAB16:    t114 = (t0 + 19104);
    t115 = (t114 + 56U);
    t116 = *((char **)t115);
    t117 = (t116 + 56U);
    t118 = *((char **)t117);
    memset(t118, 0, 8);
    t119 = 1U;
    t120 = t119;
    t121 = (t3 + 4);
    t122 = *((unsigned int *)t3);
    t119 = (t119 & t122);
    t123 = *((unsigned int *)t121);
    t120 = (t120 & t123);
    t124 = (t118 + 4);
    t125 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t125 | t119);
    t126 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t126 | t120);
    xsi_driver_vfirst_trans(t114, 0, 0);
    t127 = (t0 + 18224);
    *((int *)t127) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 8240);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 8400);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t22);
    t26 = (t24 & t25);
    *((unsigned int *)t23) = t26;
    t27 = (t19 + 4);
    t28 = (t22 + 4);
    t29 = (t23 + 4);
    t30 = *((unsigned int *)t27);
    t31 = *((unsigned int *)t28);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB17;

LAB18:
LAB19:    memset(t16, 0, 8);
    t55 = (t23 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t23);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t55) == 0)
        goto LAB20;

LAB22:    t61 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t61) = 1;

LAB23:    t62 = (t16 + 4);
    t63 = (t23 + 4);
    t64 = *((unsigned int *)t23);
    t65 = (~(t64));
    *((unsigned int *)t16) = t65;
    *((unsigned int *)t62) = 0;
    if (*((unsigned int *)t63) != 0)
        goto LAB25;

LAB24:    t70 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t70 & 1U);
    t71 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t71 & 1U);
    goto LAB9;

LAB10:    t76 = (t0 + 8240);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = (t0 + 8400);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t83 = *((unsigned int *)t78);
    t84 = *((unsigned int *)t81);
    t85 = (t83 & t84);
    *((unsigned int *)t82) = t85;
    t86 = (t78 + 4);
    t87 = (t81 + 4);
    t88 = (t82 + 4);
    t89 = *((unsigned int *)t86);
    t90 = *((unsigned int *)t87);
    t91 = (t89 | t90);
    *((unsigned int *)t88) = t91;
    t92 = *((unsigned int *)t88);
    t93 = (t92 != 0);
    if (t93 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t82, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    t35 = *((unsigned int *)t23);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t23) = (t35 | t36);
    t37 = (t19 + 4);
    t38 = (t22 + 4);
    t39 = *((unsigned int *)t19);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (~(t41));
    t43 = *((unsigned int *)t22);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (~(t45));
    t47 = (t40 & t42);
    t48 = (t44 & t46);
    t49 = (~(t47));
    t50 = (~(t48));
    t51 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t51 & t49);
    t52 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t52 & t50);
    t53 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t53 & t49);
    t54 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t54 & t50);
    goto LAB19;

LAB20:    *((unsigned int *)t16) = 1;
    goto LAB23;

LAB25:    t66 = *((unsigned int *)t16);
    t67 = *((unsigned int *)t63);
    *((unsigned int *)t16) = (t66 | t67);
    t68 = *((unsigned int *)t62);
    t69 = *((unsigned int *)t63);
    *((unsigned int *)t62) = (t68 | t69);
    goto LAB24;

LAB26:    t94 = *((unsigned int *)t82);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t82) = (t94 | t95);
    t96 = (t78 + 4);
    t97 = (t81 + 4);
    t98 = *((unsigned int *)t78);
    t99 = (~(t98));
    t100 = *((unsigned int *)t96);
    t101 = (~(t100));
    t102 = *((unsigned int *)t81);
    t103 = (~(t102));
    t104 = *((unsigned int *)t97);
    t105 = (~(t104));
    t106 = (t99 & t101);
    t107 = (t103 & t105);
    t108 = (~(t106));
    t109 = (~(t107));
    t110 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t110 & t108);
    t111 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t111 & t109);
    t112 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t112 & t108);
    t113 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t113 & t109);
    goto LAB28;

}

static void Always_6901_22(char *t0)
{
    char t6[8];
    char t20[8];
    char t27[8];
    char t63[8];
    char t64[8];
    char t78[8];
    char t79[8];
    char t87[8];
    char t126[16];
    char t144[8];
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    int t111;
    int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    int t140;
    char *t141;
    char *t142;
    char *t143;
    char *t145;
    char *t146;
    char *t147;
    char *t148;

LAB0:    t1 = (t0 + 17336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 18240);
    *((int *)t2) = 1;
    t3 = (t0 + 17368);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 6560U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t27, t6, 8);

LAB12:    t55 = (t27 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t27);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 6720U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t18) != 0)
        goto LAB15;

LAB16:    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t6 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t20) = 1;
    goto LAB16;

LAB15:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB16;

LAB17:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t6 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t6);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB19;

LAB20:
LAB23:    t61 = (t0 + 1152);
    t62 = *((char **)t61);
    t61 = ((char*)((ng2)));
    memset(t63, 0, 8);
    xsi_vlog_signed_equal(t63, 32, t62, 32, t61, 32);
    memset(t64, 0, 8);
    t65 = (t63 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t63);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t65) != 0)
        goto LAB26;

LAB27:    t72 = (t64 + 4);
    t73 = *((unsigned int *)t64);
    t74 = *((unsigned int *)t72);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB28;

LAB29:    memcpy(t87, t64, 8);

LAB30:    t119 = (t87 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t87);
    t123 = (t122 & t121);
    t124 = (t123 != 0);
    if (t124 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB22;

LAB24:    *((unsigned int *)t64) = 1;
    goto LAB27;

LAB26:    t71 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB27;

LAB28:    t76 = (t0 + 1696);
    t77 = *((char **)t76);
    t76 = ((char*)((ng44)));
    memset(t78, 0, 8);
    xsi_vlog_signed_less(t78, 32, t77, 32, t76, 32);
    memset(t79, 0, 8);
    t80 = (t78 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t78);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t80) != 0)
        goto LAB33;

LAB34:    t88 = *((unsigned int *)t64);
    t89 = *((unsigned int *)t79);
    t90 = (t88 & t89);
    *((unsigned int *)t87) = t90;
    t91 = (t64 + 4);
    t92 = (t79 + 4);
    t93 = (t87 + 4);
    t94 = *((unsigned int *)t91);
    t95 = *((unsigned int *)t92);
    t96 = (t94 | t95);
    *((unsigned int *)t93) = t96;
    t97 = *((unsigned int *)t93);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB30;

LAB31:    *((unsigned int *)t79) = 1;
    goto LAB34;

LAB33:    t86 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB34;

LAB35:    t99 = *((unsigned int *)t87);
    t100 = *((unsigned int *)t93);
    *((unsigned int *)t87) = (t99 | t100);
    t101 = (t64 + 4);
    t102 = (t79 + 4);
    t103 = *((unsigned int *)t64);
    t104 = (~(t103));
    t105 = *((unsigned int *)t101);
    t106 = (~(t105));
    t107 = *((unsigned int *)t79);
    t108 = (~(t107));
    t109 = *((unsigned int *)t102);
    t110 = (~(t109));
    t111 = (t104 & t106);
    t112 = (t108 & t110);
    t113 = (~(t111));
    t114 = (~(t112));
    t115 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t115 & t113);
    t116 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t116 & t114);
    t117 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t117 & t113);
    t118 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t118 & t114);
    goto LAB37;

LAB38:    t125 = ((char*)((ng43)));
    memcpy(t126, t125, 8);
    t127 = (t126 + 8);
    memset(t127, 0, 8);
    t128 = (t0 + 17144);
    t129 = (t0 + 2888);
    t130 = xsi_create_subprogram_invocation(t128, 0, t0, t129, 0, 0);
    t131 = (t0 + 10320);
    xsi_vlogvar_assign_value(t131, t126, 0, 0, 64);

LAB41:    t132 = (t0 + 17240);
    t133 = *((char **)t132);
    t134 = (t133 + 80U);
    t135 = *((char **)t134);
    t136 = (t135 + 272U);
    t137 = *((char **)t136);
    t138 = (t137 + 0U);
    t139 = *((char **)t138);
    t140 = ((int  (*)(char *, char *))t139)(t0, t133);
    if (t140 != 0)
        goto LAB43;

LAB42:    t133 = (t0 + 17240);
    t141 = *((char **)t133);
    t133 = (t0 + 10160);
    t142 = (t133 + 56U);
    t143 = *((char **)t142);
    memcpy(t144, t143, 8);
    t145 = (t0 + 2888);
    t146 = (t0 + 17144);
    t147 = 0;
    xsi_delete_subprogram_invocation(t145, t141, t0, t146, t147);
    t148 = (t0 + 7120);
    xsi_vlogvar_wait_assign_value(t148, t144, 0, 0, 8, 100LL);
    goto LAB40;

LAB43:    t132 = (t0 + 17336U);
    *((char **)t132) = &&LAB41;
    goto LAB1;

}

static void Always_6910_23(char *t0)
{
    char t13[8];
    char t22[8];
    char t23[8];
    char t24[8];
    char t28[8];
    char t67[16];
    char t85[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    char *t88;
    char *t89;

LAB0:    t1 = (t0 + 17584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 18256);
    *((int *)t2) = 1;
    t3 = (t0 + 17616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 6560U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB34:    t2 = (t0 + 6720U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB35;

LAB36:
LAB63:    t2 = (t0 + 6240U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB64;

LAB65:
LAB66:
LAB37:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = (t0 + 1288);
    t12 = *((char **)t11);
    t11 = ((char*)((ng0)));
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t12, 32, t11, 32);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB10;

LAB11:
LAB12:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t3, 32, t2, 32);
    memset(t22, 0, 8);
    t4 = (t13 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t4) != 0)
        goto LAB16;

LAB17:    t11 = (t22 + 4);
    t15 = *((unsigned int *)t22);
    t16 = *((unsigned int *)t11);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB18;

LAB19:    memcpy(t28, t22, 8);

LAB20:    t60 = (t28 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t28);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB8;

LAB10:
LAB13:    t20 = ((char*)((ng0)));
    t21 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 1, 100LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    goto LAB12;

LAB14:    *((unsigned int *)t22) = 1;
    goto LAB17;

LAB16:    t5 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB17;

LAB18:    t12 = (t0 + 1696);
    t14 = *((char **)t12);
    t12 = ((char*)((ng44)));
    memset(t23, 0, 8);
    xsi_vlog_signed_equal(t23, 32, t14, 32, t12, 32);
    memset(t24, 0, 8);
    t20 = (t23 + 4);
    t18 = *((unsigned int *)t20);
    t19 = (~(t18));
    t25 = *((unsigned int *)t23);
    t26 = (t25 & t19);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t20) != 0)
        goto LAB23;

LAB24:    t29 = *((unsigned int *)t22);
    t30 = *((unsigned int *)t24);
    t31 = (t29 & t30);
    *((unsigned int *)t28) = t31;
    t32 = (t22 + 4);
    t33 = (t24 + 4);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB20;

LAB21:    *((unsigned int *)t24) = 1;
    goto LAB24;

LAB23:    t21 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB24;

LAB25:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t40 | t41);
    t42 = (t22 + 4);
    t43 = (t24 + 4);
    t44 = *((unsigned int *)t22);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t24);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t55);
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t54);
    t59 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t59 & t55);
    goto LAB27;

LAB28:    t66 = ((char*)((ng43)));
    memcpy(t67, t66, 8);
    t68 = (t67 + 8);
    memset(t68, 0, 8);
    t69 = (t0 + 17392);
    t70 = (t0 + 2888);
    t71 = xsi_create_subprogram_invocation(t69, 0, t0, t70, 0, 0);
    t72 = (t0 + 10320);
    xsi_vlogvar_assign_value(t72, t67, 0, 0, 64);

LAB31:    t73 = (t0 + 17488);
    t74 = *((char **)t73);
    t75 = (t74 + 80U);
    t76 = *((char **)t75);
    t77 = (t76 + 272U);
    t78 = *((char **)t77);
    t79 = (t78 + 0U);
    t80 = *((char **)t79);
    t81 = ((int  (*)(char *, char *))t80)(t0, t74);
    if (t81 != 0)
        goto LAB33;

LAB32:    t74 = (t0 + 17488);
    t82 = *((char **)t74);
    t74 = (t0 + 10160);
    t83 = (t74 + 56U);
    t84 = *((char **)t83);
    memcpy(t85, t84, 8);
    t86 = (t0 + 2888);
    t87 = (t0 + 17392);
    t88 = 0;
    xsi_delete_subprogram_invocation(t86, t82, t0, t87, t88);
    t89 = (t0 + 7120);
    xsi_vlogvar_wait_assign_value(t89, t85, 0, 0, 8, 100LL);
    goto LAB30;

LAB33:    t73 = (t0 + 17584U);
    *((char **)t73) = &&LAB31;
    goto LAB1;

LAB35:
LAB38:    t4 = (t0 + 1288);
    t5 = *((char **)t4);
    t4 = ((char*)((ng0)));
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t5, 32, t4, 32);
    t11 = (t13 + 4);
    t15 = *((unsigned int *)t11);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB39;

LAB40:
LAB41:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t3, 32, t2, 32);
    memset(t22, 0, 8);
    t4 = (t13 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t4) != 0)
        goto LAB45;

LAB46:    t11 = (t22 + 4);
    t15 = *((unsigned int *)t22);
    t16 = *((unsigned int *)t11);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB47;

LAB48:    memcpy(t28, t22, 8);

LAB49:    t60 = (t28 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t28);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB57;

LAB58:
LAB59:    goto LAB37;

LAB39:
LAB42:    t12 = ((char*)((ng0)));
    t14 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, 0, 1, 100LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    goto LAB41;

LAB43:    *((unsigned int *)t22) = 1;
    goto LAB46;

LAB45:    t5 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB46;

LAB47:    t12 = (t0 + 1696);
    t14 = *((char **)t12);
    t12 = ((char*)((ng44)));
    memset(t23, 0, 8);
    xsi_vlog_signed_equal(t23, 32, t14, 32, t12, 32);
    memset(t24, 0, 8);
    t20 = (t23 + 4);
    t18 = *((unsigned int *)t20);
    t19 = (~(t18));
    t25 = *((unsigned int *)t23);
    t26 = (t25 & t19);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t20) != 0)
        goto LAB52;

LAB53:    t29 = *((unsigned int *)t22);
    t30 = *((unsigned int *)t24);
    t31 = (t29 & t30);
    *((unsigned int *)t28) = t31;
    t32 = (t22 + 4);
    t33 = (t24 + 4);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB49;

LAB50:    *((unsigned int *)t24) = 1;
    goto LAB53;

LAB52:    t21 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB53;

LAB54:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t40 | t41);
    t42 = (t22 + 4);
    t43 = (t24 + 4);
    t44 = *((unsigned int *)t22);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t24);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t55);
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t54);
    t59 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t59 & t55);
    goto LAB56;

LAB57:    t66 = ((char*)((ng43)));
    memcpy(t67, t66, 8);
    t68 = (t67 + 8);
    memset(t68, 0, 8);
    t69 = (t0 + 17392);
    t70 = (t0 + 2888);
    t71 = xsi_create_subprogram_invocation(t69, 0, t0, t70, 0, 0);
    t72 = (t0 + 10320);
    xsi_vlogvar_assign_value(t72, t67, 0, 0, 64);

LAB60:    t73 = (t0 + 17488);
    t74 = *((char **)t73);
    t75 = (t74 + 80U);
    t76 = *((char **)t75);
    t77 = (t76 + 272U);
    t78 = *((char **)t77);
    t79 = (t78 + 0U);
    t80 = *((char **)t79);
    t81 = ((int  (*)(char *, char *))t80)(t0, t74);
    if (t81 != 0)
        goto LAB62;

LAB61:    t74 = (t0 + 17488);
    t82 = *((char **)t74);
    t74 = (t0 + 10160);
    t83 = (t74 + 56U);
    t84 = *((char **)t83);
    memcpy(t85, t84, 8);
    t86 = (t0 + 2888);
    t87 = (t0 + 17392);
    t88 = 0;
    xsi_delete_subprogram_invocation(t86, t82, t0, t87, t88);
    t89 = (t0 + 7120);
    xsi_vlogvar_wait_assign_value(t89, t85, 0, 0, 8, 100LL);
    goto LAB59;

LAB62:    t73 = (t0 + 17584U);
    *((char **)t73) = &&LAB60;
    goto LAB1;

LAB64:
LAB67:    t4 = (t0 + 4320U);
    t5 = *((char **)t4);
    t4 = (t0 + 7120);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 8, 100LL);
    t2 = (t0 + 4480U);
    t3 = *((char **)t2);
    t2 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 100LL);
    t2 = (t0 + 4640U);
    t3 = *((char **)t2);
    t2 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 100LL);
    goto LAB66;

}


extern void xilinxcorelib_ver_m_00000000001746895110_3749024002_init()
{
	static char *pe[] = {(void *)Initial_6576_0,(void *)Cont_6587_1,(void *)Cont_6588_2,(void *)Always_6600_3,(void *)Always_6636_4,(void *)Always_6645_5,(void *)Cont_6655_6,(void *)Cont_6661_7,(void *)Cont_6670_8,(void *)Cont_6679_9,(void *)Cont_6693_10,(void *)Always_6782_11,(void *)Always_6811_12,(void *)Always_6836_13,(void *)Always_6854_14,(void *)Always_6874_15,(void *)Cont_6893_16,(void *)Cont_6894_17,(void *)Cont_6895_18,(void *)Cont_6896_19,(void *)Cont_6897_20,(void *)Cont_6898_21,(void *)Always_6901_22,(void *)Always_6910_23};
	static char *se[] = {(void *)sp_hexstr_conv};
	xsi_register_didat("xilinxcorelib_ver_m_00000000001746895110_3749024002", "isim/afifo_loopback_isim_beh.exe.sim/xilinxcorelib_ver/m_00000000001746895110_3749024002.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
