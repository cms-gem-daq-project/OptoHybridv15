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
static const char *ng0 = "//psf/Home/Documents/PhD/Code/OH/src/sim/sim_link_tracking.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3874375747_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4112);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2604U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3332);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4112);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2604U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3332);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3874375747_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 4148);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2672U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3476);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4148);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2672U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3476);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3874375747_2372691052_p_2(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned char t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4060);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 2740U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 == 0);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 2740U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t8 = (t5 - 1);
    t1 = (t0 + 2740U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t8;

LAB6:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 2740U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 < 192);
    if (t2 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 8630);
    t4 = (t0 + 4184);
    t7 = (t4 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 4220);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB9:    goto LAB3;

LAB5:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 2740U);
    t7 = *((char **)t3);
    t3 = (t7 + 0);
    *((int *)t3) = 400;
    goto LAB6;

LAB8:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 8628);
    t7 = (t0 + 4184);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 2808U);
    t3 = *((char **)t1);
    t1 = (t0 + 2740U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t8 = (t5 - 191);
    t13 = (t8 * -1);
    xsi_vhdl_check_range_of_index(191, 0, -1, t5);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t3 + t15);
    t2 = *((unsigned char *)t1);
    t7 = (t0 + 4220);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t2;
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

}

static void work_a_3874375747_2372691052_p_3(char *t0)
{
    char t13[16];
    char t14[16];
    char t17[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned char t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t15;
    unsigned int t16;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 660U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4068);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(111, ng0);
    t3 = (t0 + 2876U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 == 20000);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 2876U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t8 = (t5 + 1);
    t1 = (t0 + 2876U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t8;

LAB6:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 2876U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 1);
    if (t2 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 2876U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 2);
    if (t2 != 0)
        goto LAB11;

LAB12:    t1 = (t0 + 2876U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 3);
    if (t2 != 0)
        goto LAB15;

LAB16:    t1 = (t0 + 2876U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 1000);
    if (t2 != 0)
        goto LAB19;

LAB20:    t1 = (t0 + 2876U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 1001);
    if (t2 != 0)
        goto LAB21;

LAB22:    t1 = (t0 + 2876U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 1002);
    if (t2 != 0)
        goto LAB25;

LAB26:    t1 = (t0 + 2876U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 1003);
    if (t2 != 0)
        goto LAB29;

LAB30:    t1 = (t0 + 2876U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 1200);
    if (t2 != 0)
        goto LAB33;

LAB34:    t1 = (t0 + 2876U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 1201);
    if (t2 != 0)
        goto LAB35;

LAB36:    t1 = (t0 + 2876U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 1202);
    if (t2 != 0)
        goto LAB39;

LAB40:    t1 = (t0 + 2876U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 1203);
    if (t2 != 0)
        goto LAB43;

LAB44:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 8830);
    t4 = (t0 + 4256);
    t7 = (t4 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 8846);
    t4 = (t0 + 4292);
    t7 = (t4 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);

LAB9:    goto LAB3;

LAB5:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 2876U);
    t7 = *((char **)t3);
    t3 = (t7 + 0);
    *((int *)t3) = 0;
    goto LAB6;

LAB8:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 8632);
    t7 = (t0 + 4256);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 16U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 8648);
    t4 = (t0 + 4292);
    t7 = (t4 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 8650);
    t7 = (t0 + 8658);
    t11 = ((IEEE_P_2592010699) + 2332);
    t12 = (t14 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 0;
    t15 = (t12 + 4U);
    *((int *)t15) = 7;
    t15 = (t12 + 8U);
    *((int *)t15) = 1;
    t8 = (7 - 0);
    t16 = (t8 * 1);
    t16 = (t16 + 1);
    t15 = (t12 + 12U);
    *((unsigned int *)t15) = t16;
    t15 = (t17 + 0U);
    t18 = (t15 + 0U);
    *((int *)t18) = 0;
    t18 = (t15 + 4U);
    *((int *)t18) = 7;
    t18 = (t15 + 8U);
    *((int *)t18) = 1;
    t19 = (7 - 0);
    t16 = (t19 * 1);
    t16 = (t16 + 1);
    t18 = (t15 + 12U);
    *((unsigned int *)t18) = t16;
    t10 = xsi_base_array_concat(t10, t13, t11, (char)97, t1, t14, (char)97, t7, t17, (char)101);
    t16 = (8U + 8U);
    t6 = (16U != t16);
    if (t6 == 1)
        goto LAB13;

LAB14:    t18 = (t0 + 4256);
    t20 = (t18 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    memcpy(t23, t10, 16U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 8666);
    t4 = (t0 + 4292);
    t7 = (t4 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB13:    xsi_size_not_matching(16U, t16, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 8668);
    t7 = (t0 + 8676);
    t11 = ((IEEE_P_2592010699) + 2332);
    t12 = (t14 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 0;
    t15 = (t12 + 4U);
    *((int *)t15) = 7;
    t15 = (t12 + 8U);
    *((int *)t15) = 1;
    t8 = (7 - 0);
    t16 = (t8 * 1);
    t16 = (t16 + 1);
    t15 = (t12 + 12U);
    *((unsigned int *)t15) = t16;
    t15 = (t17 + 0U);
    t18 = (t15 + 0U);
    *((int *)t18) = 0;
    t18 = (t15 + 4U);
    *((int *)t18) = 7;
    t18 = (t15 + 8U);
    *((int *)t18) = 1;
    t19 = (7 - 0);
    t16 = (t19 * 1);
    t16 = (t16 + 1);
    t18 = (t15 + 12U);
    *((unsigned int *)t18) = t16;
    t10 = xsi_base_array_concat(t10, t13, t11, (char)97, t1, t14, (char)97, t7, t17, (char)101);
    t16 = (8U + 8U);
    t6 = (16U != t16);
    if (t6 == 1)
        goto LAB17;

LAB18:    t18 = (t0 + 4256);
    t20 = (t18 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    memcpy(t23, t10, 16U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 8684);
    t4 = (t0 + 4292);
    t7 = (t4 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB17:    xsi_size_not_matching(16U, t16, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 8686);
    t7 = (t0 + 4256);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 16U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 8702);
    t4 = (t0 + 4292);
    t7 = (t4 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB21:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 8704);
    t7 = (t0 + 8712);
    t11 = ((IEEE_P_2592010699) + 2332);
    t12 = (t14 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 0;
    t15 = (t12 + 4U);
    *((int *)t15) = 7;
    t15 = (t12 + 8U);
    *((int *)t15) = 1;
    t8 = (7 - 0);
    t16 = (t8 * 1);
    t16 = (t16 + 1);
    t15 = (t12 + 12U);
    *((unsigned int *)t15) = t16;
    t15 = (t17 + 0U);
    t18 = (t15 + 0U);
    *((int *)t18) = 0;
    t18 = (t15 + 4U);
    *((int *)t18) = 7;
    t18 = (t15 + 8U);
    *((int *)t18) = 1;
    t19 = (7 - 0);
    t16 = (t19 * 1);
    t16 = (t16 + 1);
    t18 = (t15 + 12U);
    *((unsigned int *)t18) = t16;
    t10 = xsi_base_array_concat(t10, t13, t11, (char)97, t1, t14, (char)97, t7, t17, (char)101);
    t16 = (8U + 8U);
    t6 = (16U != t16);
    if (t6 == 1)
        goto LAB23;

LAB24:    t18 = (t0 + 4256);
    t20 = (t18 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    memcpy(t23, t10, 16U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 8720);
    t4 = (t0 + 4292);
    t7 = (t4 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB23:    xsi_size_not_matching(16U, t16, 0);
    goto LAB24;

LAB25:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 8722);
    t7 = (t0 + 8730);
    t11 = ((IEEE_P_2592010699) + 2332);
    t12 = (t14 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 0;
    t15 = (t12 + 4U);
    *((int *)t15) = 7;
    t15 = (t12 + 8U);
    *((int *)t15) = 1;
    t8 = (7 - 0);
    t16 = (t8 * 1);
    t16 = (t16 + 1);
    t15 = (t12 + 12U);
    *((unsigned int *)t15) = t16;
    t15 = (t17 + 0U);
    t18 = (t15 + 0U);
    *((int *)t18) = 0;
    t18 = (t15 + 4U);
    *((int *)t18) = 7;
    t18 = (t15 + 8U);
    *((int *)t18) = 1;
    t19 = (7 - 0);
    t16 = (t19 * 1);
    t16 = (t16 + 1);
    t18 = (t15 + 12U);
    *((unsigned int *)t18) = t16;
    t10 = xsi_base_array_concat(t10, t13, t11, (char)97, t1, t14, (char)97, t7, t17, (char)101);
    t16 = (8U + 8U);
    t6 = (16U != t16);
    if (t6 == 1)
        goto LAB27;

LAB28:    t18 = (t0 + 4256);
    t20 = (t18 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    memcpy(t23, t10, 16U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 8738);
    t4 = (t0 + 4292);
    t7 = (t4 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB27:    xsi_size_not_matching(16U, t16, 0);
    goto LAB28;

LAB29:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 8740);
    t7 = (t0 + 8748);
    t11 = ((IEEE_P_2592010699) + 2332);
    t12 = (t14 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 0;
    t15 = (t12 + 4U);
    *((int *)t15) = 7;
    t15 = (t12 + 8U);
    *((int *)t15) = 1;
    t8 = (7 - 0);
    t16 = (t8 * 1);
    t16 = (t16 + 1);
    t15 = (t12 + 12U);
    *((unsigned int *)t15) = t16;
    t15 = (t17 + 0U);
    t18 = (t15 + 0U);
    *((int *)t18) = 0;
    t18 = (t15 + 4U);
    *((int *)t18) = 7;
    t18 = (t15 + 8U);
    *((int *)t18) = 1;
    t19 = (7 - 0);
    t16 = (t19 * 1);
    t16 = (t16 + 1);
    t18 = (t15 + 12U);
    *((unsigned int *)t18) = t16;
    t10 = xsi_base_array_concat(t10, t13, t11, (char)97, t1, t14, (char)97, t7, t17, (char)101);
    t16 = (8U + 8U);
    t6 = (16U != t16);
    if (t6 == 1)
        goto LAB31;

LAB32:    t18 = (t0 + 4256);
    t20 = (t18 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    memcpy(t23, t10, 16U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 8756);
    t4 = (t0 + 4292);
    t7 = (t4 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB31:    xsi_size_not_matching(16U, t16, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 8758);
    t7 = (t0 + 4256);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 16U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(143, ng0);
    t1 = (t0 + 8774);
    t4 = (t0 + 4292);
    t7 = (t4 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB35:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 8776);
    t7 = (t0 + 8784);
    t11 = ((IEEE_P_2592010699) + 2332);
    t12 = (t14 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 0;
    t15 = (t12 + 4U);
    *((int *)t15) = 7;
    t15 = (t12 + 8U);
    *((int *)t15) = 1;
    t8 = (7 - 0);
    t16 = (t8 * 1);
    t16 = (t16 + 1);
    t15 = (t12 + 12U);
    *((unsigned int *)t15) = t16;
    t15 = (t17 + 0U);
    t18 = (t15 + 0U);
    *((int *)t18) = 0;
    t18 = (t15 + 4U);
    *((int *)t18) = 7;
    t18 = (t15 + 8U);
    *((int *)t18) = 1;
    t19 = (7 - 0);
    t16 = (t19 * 1);
    t16 = (t16 + 1);
    t18 = (t15 + 12U);
    *((unsigned int *)t18) = t16;
    t10 = xsi_base_array_concat(t10, t13, t11, (char)97, t1, t14, (char)97, t7, t17, (char)101);
    t16 = (8U + 8U);
    t6 = (16U != t16);
    if (t6 == 1)
        goto LAB37;

LAB38:    t18 = (t0 + 4256);
    t20 = (t18 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    memcpy(t23, t10, 16U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(146, ng0);
    t1 = (t0 + 8792);
    t4 = (t0 + 4292);
    t7 = (t4 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB37:    xsi_size_not_matching(16U, t16, 0);
    goto LAB38;

LAB39:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 8794);
    t7 = (t0 + 8802);
    t11 = ((IEEE_P_2592010699) + 2332);
    t12 = (t14 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 0;
    t15 = (t12 + 4U);
    *((int *)t15) = 7;
    t15 = (t12 + 8U);
    *((int *)t15) = 1;
    t8 = (7 - 0);
    t16 = (t8 * 1);
    t16 = (t16 + 1);
    t15 = (t12 + 12U);
    *((unsigned int *)t15) = t16;
    t15 = (t17 + 0U);
    t18 = (t15 + 0U);
    *((int *)t18) = 0;
    t18 = (t15 + 4U);
    *((int *)t18) = 7;
    t18 = (t15 + 8U);
    *((int *)t18) = 1;
    t19 = (7 - 0);
    t16 = (t19 * 1);
    t16 = (t16 + 1);
    t18 = (t15 + 12U);
    *((unsigned int *)t18) = t16;
    t10 = xsi_base_array_concat(t10, t13, t11, (char)97, t1, t14, (char)97, t7, t17, (char)101);
    t16 = (8U + 8U);
    t6 = (16U != t16);
    if (t6 == 1)
        goto LAB41;

LAB42:    t18 = (t0 + 4256);
    t20 = (t18 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    memcpy(t23, t10, 16U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 8810);
    t4 = (t0 + 4292);
    t7 = (t4 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB41:    xsi_size_not_matching(16U, t16, 0);
    goto LAB42;

LAB43:    xsi_set_current_line(151, ng0);
    t1 = (t0 + 8812);
    t7 = (t0 + 8820);
    t11 = ((IEEE_P_2592010699) + 2332);
    t12 = (t14 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 0;
    t15 = (t12 + 4U);
    *((int *)t15) = 7;
    t15 = (t12 + 8U);
    *((int *)t15) = 1;
    t8 = (7 - 0);
    t16 = (t8 * 1);
    t16 = (t16 + 1);
    t15 = (t12 + 12U);
    *((unsigned int *)t15) = t16;
    t15 = (t17 + 0U);
    t18 = (t15 + 0U);
    *((int *)t18) = 0;
    t18 = (t15 + 4U);
    *((int *)t18) = 7;
    t18 = (t15 + 8U);
    *((int *)t18) = 1;
    t19 = (7 - 0);
    t16 = (t19 * 1);
    t16 = (t16 + 1);
    t18 = (t15 + 12U);
    *((unsigned int *)t18) = t16;
    t10 = xsi_base_array_concat(t10, t13, t11, (char)97, t1, t14, (char)97, t7, t17, (char)101);
    t16 = (8U + 8U);
    t6 = (16U != t16);
    if (t6 == 1)
        goto LAB45;

LAB46:    t18 = (t0 + 4256);
    t20 = (t18 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    memcpy(t23, t10, 16U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 8828);
    t4 = (t0 + 4292);
    t7 = (t4 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB45:    xsi_size_not_matching(16U, t16, 0);
    goto LAB46;

}


extern void work_a_3874375747_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3874375747_2372691052_p_0,(void *)work_a_3874375747_2372691052_p_1,(void *)work_a_3874375747_2372691052_p_2,(void *)work_a_3874375747_2372691052_p_3};
	xsi_register_didat("work_a_3874375747_2372691052", "isim/sim_link_tracking_isim_beh.exe.sim/work/a_3874375747_2372691052.didat");
	xsi_register_executes(pe);
}
