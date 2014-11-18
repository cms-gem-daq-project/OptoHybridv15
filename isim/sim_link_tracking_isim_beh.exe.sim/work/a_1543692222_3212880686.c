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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//psf/Home/Documents/PhD/Code/OH/src/link_tracking.vhd";
extern char *WORK_P_4173001329;
extern char *IEEE_P_2592010699;



static void work_a_1543692222_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(153, ng0);

LAB3:    t1 = (t0 + 5652U);
    t2 = *((char **)t1);
    t1 = (t0 + 9688);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 9508);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1543692222_3212880686_p_1(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(217, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4640U);
    t3 = *((char **)t1);
    t5 = ((WORK_P_4173001329) + 1888);
    t6 = (t0 + 19116U);
    t7 = (t0 + 19388U);
    t1 = xsi_base_array_concat(t1, t4, t5, (char)97, t2, t6, (char)97, t3, t7, (char)101);
    t8 = (2048U + 2048U);
    t9 = (4096U != t8);
    if (t9 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 9724);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 4096U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t15 = (t0 + 9516);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(4096U, t8, 0);
    goto LAB6;

}

static void work_a_1543692222_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(219, ng0);

LAB3:    t1 = (t0 + 4180U);
    t2 = *((char **)t1);
    t3 = (127 - 127);
    t4 = (t3 * 32U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 9760);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2048U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 9524);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1543692222_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(220, ng0);

LAB3:    t1 = (t0 + 4272U);
    t2 = *((char **)t1);
    t3 = (127 - 127);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 9796);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 64U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 9532);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1543692222_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(222, ng0);

LAB3:    t1 = (t0 + 4180U);
    t2 = *((char **)t1);
    t3 = (127 - 63);
    t4 = (t3 * 32U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 9832);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2048U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 9540);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1543692222_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(223, ng0);

LAB3:    t1 = (t0 + 4272U);
    t2 = *((char **)t1);
    t3 = (127 - 63);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 9868);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 64U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 9548);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1543692222_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(241, ng0);

LAB3:    t1 = (t0 + 4732U);
    t2 = *((char **)t1);
    t1 = (t0 + 9904);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_delta(t1, 2016U, 32U, 0LL);

LAB2:    t7 = (t0 + 9556);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1543692222_3212880686_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(243, ng0);

LAB3:    t1 = (t0 + 4824U);
    t2 = *((char **)t1);
    t1 = (t0 + 9940);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_delta(t1, 1984U, 32U, 0LL);

LAB2:    t7 = (t0 + 9564);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1543692222_3212880686_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(245, ng0);

LAB3:    t1 = (t0 + 4916U);
    t2 = *((char **)t1);
    t1 = (t0 + 9976);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_delta(t1, 1952U, 32U, 0LL);

LAB2:    t7 = (t0 + 9572);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1543692222_3212880686_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(247, ng0);

LAB3:    t1 = (t0 + 5008U);
    t2 = *((char **)t1);
    t1 = (t0 + 10012);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_delta(t1, 1920U, 32U, 0LL);

LAB2:    t7 = (t0 + 9580);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1543692222_3212880686_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(249, ng0);

LAB3:    t1 = (t0 + 5100U);
    t2 = *((char **)t1);
    t1 = (t0 + 10048);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_delta(t1, 1888U, 32U, 0LL);

LAB2:    t7 = (t0 + 9588);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1543692222_3212880686_p_11(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(253, ng0);

LAB3:    t1 = (t0 + 4548U);
    t2 = *((char **)t1);
    t3 = (5 - 63);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 10084);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 9596);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1543692222_3212880686_p_12(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(255, ng0);

LAB3:    t1 = (t0 + 4548U);
    t2 = *((char **)t1);
    t3 = (6 - 63);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 10120);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 9604);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1543692222_3212880686_p_13(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(257, ng0);

LAB3:    t1 = (t0 + 4548U);
    t2 = *((char **)t1);
    t3 = (7 - 63);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 10156);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 9612);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1543692222_3212880686_p_14(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(259, ng0);

LAB3:    t1 = (t0 + 4548U);
    t2 = *((char **)t1);
    t3 = (8 - 63);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 10192);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 9620);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1543692222_3212880686_p_15(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(261, ng0);

LAB3:    t1 = (t0 + 4548U);
    t2 = *((char **)t1);
    t3 = (9 - 63);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 10228);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 9628);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1543692222_3212880686_p_16(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(275, ng0);

LAB3:    t1 = (t0 + 5652U);
    t2 = *((char **)t1);
    t1 = (t0 + 1052U);
    t3 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 2332);
    t6 = (t0 + 19484U);
    t7 = (t0 + 19036U);
    t1 = xsi_base_array_concat(t1, t4, t5, (char)97, t2, t6, (char)97, t3, t7, (char)101);
    t8 = (16U + 16U);
    t9 = (32U != t8);
    if (t9 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 10264);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 32U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t15 = (t0 + 9636);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t8, 0);
    goto LAB6;

}

static void work_a_1543692222_3212880686_p_17(char *t0)
{
    char t6[16];
    char t8[16];
    char t15[16];
    char t20[16];
    char t25[16];
    char t30[16];
    char t35[16];
    char t44[16];
    char t54[16];
    char *t1;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    unsigned char t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t31;
    char *t32;
    char *t33;
    unsigned char t34;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned char t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned char t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned char t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;

LAB0:    xsi_set_current_line(276, ng0);

LAB3:    t1 = (t0 + 34972);
    t3 = (t0 + 3536U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t7 = ((IEEE_P_2592010699) + 2332);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 23;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (23 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t3 = xsi_base_array_concat(t3, t6, t7, (char)97, t1, t8, (char)99, t5, (char)101);
    t10 = (t0 + 3444U);
    t13 = *((char **)t10);
    t14 = *((unsigned char *)t13);
    t16 = ((IEEE_P_2592010699) + 2332);
    t10 = xsi_base_array_concat(t10, t15, t16, (char)97, t3, t6, (char)99, t14, (char)101);
    t17 = (t0 + 2616U);
    t18 = *((char **)t17);
    t19 = *((unsigned char *)t18);
    t21 = ((IEEE_P_2592010699) + 2332);
    t17 = xsi_base_array_concat(t17, t20, t21, (char)97, t10, t15, (char)99, t19, (char)101);
    t22 = (t0 + 2524U);
    t23 = *((char **)t22);
    t24 = *((unsigned char *)t23);
    t26 = ((IEEE_P_2592010699) + 2332);
    t22 = xsi_base_array_concat(t22, t25, t26, (char)97, t17, t20, (char)99, t24, (char)101);
    t27 = (t0 + 2340U);
    t28 = *((char **)t27);
    t29 = *((unsigned char *)t28);
    t31 = ((IEEE_P_2592010699) + 2332);
    t27 = xsi_base_array_concat(t27, t30, t31, (char)97, t22, t25, (char)99, t29, (char)101);
    t32 = (t0 + 2248U);
    t33 = *((char **)t32);
    t34 = *((unsigned char *)t33);
    t36 = ((IEEE_P_2592010699) + 2332);
    t32 = xsi_base_array_concat(t32, t35, t36, (char)97, t27, t30, (char)99, t34, (char)101);
    t37 = (t0 + 2156U);
    t38 = *((char **)t37);
    t39 = (1 - 1);
    t12 = (t39 * -1);
    t40 = (1U * t12);
    t41 = (0 + t40);
    t37 = (t38 + t41);
    t42 = *((unsigned char *)t37);
    t45 = ((IEEE_P_2592010699) + 2332);
    t43 = xsi_base_array_concat(t43, t44, t45, (char)97, t32, t35, (char)99, t42, (char)101);
    t46 = (t0 + 2156U);
    t47 = *((char **)t46);
    t48 = (0 - 1);
    t49 = (t48 * -1);
    t50 = (1U * t49);
    t51 = (0 + t50);
    t46 = (t47 + t51);
    t52 = *((unsigned char *)t46);
    t55 = ((IEEE_P_2592010699) + 2332);
    t53 = xsi_base_array_concat(t53, t54, t55, (char)97, t43, t44, (char)99, t52, (char)101);
    t56 = (24U + 1U);
    t57 = (t56 + 1U);
    t58 = (t57 + 1U);
    t59 = (t58 + 1U);
    t60 = (t59 + 1U);
    t61 = (t60 + 1U);
    t62 = (t61 + 1U);
    t63 = (t62 + 1U);
    t64 = (32U != t63);
    if (t64 == 1)
        goto LAB5;

LAB6:    t65 = (t0 + 10300);
    t66 = (t65 + 32U);
    t67 = *((char **)t66);
    t68 = (t67 + 40U);
    t69 = *((char **)t68);
    memcpy(t69, t53, 32U);
    xsi_driver_first_trans_fast(t65);

LAB2:    t70 = (t0 + 9644);
    *((int *)t70) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t63, 0);
    goto LAB6;

}


extern void work_a_1543692222_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1543692222_3212880686_p_0,(void *)work_a_1543692222_3212880686_p_1,(void *)work_a_1543692222_3212880686_p_2,(void *)work_a_1543692222_3212880686_p_3,(void *)work_a_1543692222_3212880686_p_4,(void *)work_a_1543692222_3212880686_p_5,(void *)work_a_1543692222_3212880686_p_6,(void *)work_a_1543692222_3212880686_p_7,(void *)work_a_1543692222_3212880686_p_8,(void *)work_a_1543692222_3212880686_p_9,(void *)work_a_1543692222_3212880686_p_10,(void *)work_a_1543692222_3212880686_p_11,(void *)work_a_1543692222_3212880686_p_12,(void *)work_a_1543692222_3212880686_p_13,(void *)work_a_1543692222_3212880686_p_14,(void *)work_a_1543692222_3212880686_p_15,(void *)work_a_1543692222_3212880686_p_16,(void *)work_a_1543692222_3212880686_p_17};
	xsi_register_didat("work_a_1543692222_3212880686", "isim/sim_link_tracking_isim_beh.exe.sim/work/a_1543692222_3212880686.didat");
	xsi_register_executes(pe);
}
