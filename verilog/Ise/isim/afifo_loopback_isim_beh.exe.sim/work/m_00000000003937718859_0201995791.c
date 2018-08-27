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
static const char *ng0 = "D:/Documents/Electrical Engineering/Projects/Microphone Array/ISE/PosedgeOne_ftdi_afifo_loopback_950112/ise/ADC_read.v";
static unsigned int ng1[] = {8388608U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {23, 0};
static unsigned int ng4[] = {4194304U, 0U};
static int ng5[] = {22, 0};
static unsigned int ng6[] = {2097152U, 0U};
static int ng7[] = {21, 0};
static unsigned int ng8[] = {1048576U, 0U};
static int ng9[] = {20, 0};
static unsigned int ng10[] = {524288U, 0U};
static int ng11[] = {19, 0};
static unsigned int ng12[] = {262144U, 0U};
static int ng13[] = {18, 0};
static unsigned int ng14[] = {131072U, 0U};
static int ng15[] = {17, 0};
static unsigned int ng16[] = {65536U, 0U};
static int ng17[] = {16, 0};
static unsigned int ng18[] = {32768U, 0U};
static int ng19[] = {15, 0};
static unsigned int ng20[] = {16384U, 0U};
static int ng21[] = {14, 0};
static unsigned int ng22[] = {8192U, 0U};
static int ng23[] = {13, 0};
static unsigned int ng24[] = {4096U, 0U};
static int ng25[] = {12, 0};
static unsigned int ng26[] = {2048U, 0U};
static int ng27[] = {11, 0};
static unsigned int ng28[] = {1024U, 0U};
static int ng29[] = {10, 0};
static unsigned int ng30[] = {512U, 0U};
static int ng31[] = {9, 0};
static unsigned int ng32[] = {256U, 0U};
static int ng33[] = {8, 0};
static unsigned int ng34[] = {128U, 0U};
static int ng35[] = {7, 0};
static unsigned int ng36[] = {64U, 0U};
static int ng37[] = {6, 0};
static unsigned int ng38[] = {32U, 0U};
static int ng39[] = {5, 0};
static unsigned int ng40[] = {16U, 0U};
static int ng41[] = {4, 0};
static unsigned int ng42[] = {8U, 0U};
static int ng43[] = {3, 0};
static unsigned int ng44[] = {4U, 0U};
static int ng45[] = {2, 0};
static unsigned int ng46[] = {2U, 0U};
static unsigned int ng47[] = {1U, 0U};
static int ng48[] = {0, 0};
static unsigned int ng49[] = {0U, 0U};



static void Cont_7_0(char *t0)
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

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(7, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 6272);
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
    t16 = (t0 + 6096);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_12_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 6112);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_13_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 6128);
    *((int *)t2) = 1;
    t3 = (t0 + 4816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Cont_14_3(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    *((unsigned int *)t8) = t11;
    t12 = (t4 + 4);
    t13 = (t7 + 4);
    t14 = (t8 + 4);
    t15 = *((unsigned int *)t12);
    t16 = *((unsigned int *)t13);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB4;

LAB5:
LAB6:    t22 = (t0 + 6336);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t8 + 4);
    t30 = *((unsigned int *)t8);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 6144);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t20 | t21);
    goto LAB6;

}

static void Always_18_4(char *t0)
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

LAB0:    t1 = (t0 + 5280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 6160);
    *((int *)t2) = 1;
    t3 = (t0 + 5312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18, ng0);

LAB5:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_rshift(t13, 24, t4, 24, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 24, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(19, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 24, 0LL);
    goto LAB8;

}

static void Always_26_5(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;

LAB0:    t1 = (t0 + 5528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 6176);
    *((int *)t2) = 1;
    t3 = (t0 + 5560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t7, 24);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng22)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng24)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng26)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng28)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng30)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng32)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng34)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng36)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng38)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng40)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng42)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng44)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng46)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng47)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 24, t2, 24);
    if (t8 == 1)
        goto LAB53;

LAB54:
LAB56:
LAB55:    xsi_set_current_line(55, ng0);

LAB107:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 24, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng49)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB57:    goto LAB2;

LAB7:    xsi_set_current_line(28, ng0);
    t9 = (t0 + 1528U);
    t10 = *((char **)t9);
    t9 = (t0 + 3048);
    t12 = (t0 + 3048);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t11, t14, 2, t15, 32, 1);
    t16 = (t11 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB58;

LAB59:    goto LAB57;

LAB9:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB60;

LAB61:    goto LAB57;

LAB11:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB62;

LAB63:    goto LAB57;

LAB13:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB64;

LAB65:    goto LAB57;

LAB15:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB66;

LAB67:    goto LAB57;

LAB17:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB68;

LAB69:    goto LAB57;

LAB19:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB70;

LAB71:    goto LAB57;

LAB21:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng17)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB72;

LAB73:    goto LAB57;

LAB23:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng19)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB74;

LAB75:    goto LAB57;

LAB25:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng21)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB76;

LAB77:    goto LAB57;

LAB27:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng23)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB78;

LAB79:    goto LAB57;

LAB29:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng25)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB80;

LAB81:    goto LAB57;

LAB31:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng27)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB82;

LAB83:    goto LAB57;

LAB33:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng29)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB84;

LAB85:    goto LAB57;

LAB35:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng31)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB86;

LAB87:    goto LAB57;

LAB37:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng33)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB88;

LAB89:    goto LAB57;

LAB39:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng35)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB90;

LAB91:    goto LAB57;

LAB41:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng37)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB92;

LAB93:    goto LAB57;

LAB43:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng39)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB94;

LAB95:    goto LAB57;

LAB45:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng41)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB96;

LAB97:    goto LAB57;

LAB47:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng43)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB98;

LAB99:    goto LAB57;

LAB49:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng45)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB100;

LAB101:    goto LAB57;

LAB51:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB102;

LAB103:    goto LAB57;

LAB53:    xsi_set_current_line(51, ng0);

LAB104:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng48)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB105;

LAB106:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng47)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB57;

LAB58:    xsi_vlogvar_wait_assign_value(t9, t10, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB59;

LAB60:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB61;

LAB62:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB63;

LAB64:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB65;

LAB66:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB67;

LAB68:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB69;

LAB70:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB71;

LAB72:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB73;

LAB74:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB75;

LAB76:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB77;

LAB78:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB79;

LAB80:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB81;

LAB82:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB83;

LAB84:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB85;

LAB86:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB87;

LAB88:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB89;

LAB90:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB91;

LAB92:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB93;

LAB94:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB95;

LAB96:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB97;

LAB98:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB99;

LAB100:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB101;

LAB102:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB103;

LAB105:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB106;

}

static void Always_65_6(char *t0)
{
    char t20[8];
    char t26[8];
    char t27[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 5776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 6192);
    *((int *)t2) = 1;
    t3 = (t0 + 5808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(67, ng0);

LAB9:    xsi_set_current_line(68, ng0);
    t13 = (t0 + 1688U);
    t14 = *((char **)t13);
    t13 = (t14 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t20, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t2) == 0)
        goto LAB13;

LAB15:    t4 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t4) = 1;

LAB16:    t5 = (t20 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t20);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlogtype_concat(t27, 64, 64, 2U, t7, 32, t4, 32);
    t13 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t13, t27, 0, 0, 64, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(68, ng0);
    t21 = (t0 + 3048);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng47)));
    xsi_vlogtype_concat(t20, 32, 32, 2U, t24, 8, t23, 24);
    t25 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t25, t20, 0, 0, 32, 0LL);
    goto LAB12;

LAB13:    *((unsigned int *)t20) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(69, ng0);
    t6 = (t0 + 3048);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    t14 = ((char*)((ng49)));
    xsi_vlogtype_concat(t26, 32, 32, 2U, t14, 8, t13, 24);
    t21 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t21, t26, 0, 0, 32, 0LL);
    goto LAB19;

}


extern void work_m_00000000003937718859_0201995791_init()
{
	static char *pe[] = {(void *)Cont_7_0,(void *)Always_12_1,(void *)Always_13_2,(void *)Cont_14_3,(void *)Always_18_4,(void *)Always_26_5,(void *)Always_65_6};
	xsi_register_didat("work_m_00000000003937718859_0201995791", "isim/afifo_loopback_isim_beh.exe.sim/work/m_00000000003937718859_0201995791.didat");
	xsi_register_executes(pe);
}
