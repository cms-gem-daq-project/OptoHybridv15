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
static const char *ng0 = "//psf/Home/Documents/PhD/Code/OH/src/gtp_tx_mux.vhd";
extern char *IEEE_P_2592010699;
extern char *WORK_P_4173001329;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1357714570_3212880686_p_0(char *t0)
{
    char t13[16];
    char t14[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2892);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1868U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t2 = (t15 == 0);
    if (t2 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1868U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t2 = (t15 == 1);
    if (t2 != 0)
        goto LAB25;

LAB26:    t1 = (t0 + 1868U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t2 = (t15 == 2);
    if (t2 != 0)
        goto LAB29;

LAB30:    xsi_set_current_line(171, ng0);
    t1 = (t0 + 6242);
    t4 = (t0 + 2936);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(173, ng0);
    t1 = ((WORK_P_4173001329) + 672U);
    t3 = *((char **)t1);
    t1 = (t0 + 6244);
    t8 = ((IEEE_P_2592010699) + 2332);
    t9 = ((WORK_P_4173001329) + 3628U);
    t10 = (t14 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 7;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t15 = (7 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t16;
    t7 = xsi_base_array_concat(t7, t13, t8, (char)97, t3, t9, (char)97, t1, t14, (char)101);
    t16 = (8U + 8U);
    t2 = (16U != t16);
    if (t2 == 1)
        goto LAB36;

LAB37:    t11 = (t0 + 2972);
    t12 = (t11 + 32U);
    t17 = *((char **)t12);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 16U);
    xsi_driver_first_trans_fast_port(t11);
    xsi_set_current_line(175, ng0);
    t1 = (t0 + 3008);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(177, ng0);
    t1 = (t0 + 3044);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(179, ng0);
    t1 = (t0 + 3080);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(181, ng0);
    t1 = (t0 + 1868U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(183, ng0);
    t1 = (t0 + 2140U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;

LAB11:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 6208);
    t8 = (t0 + 2936);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 2U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(56, ng0);
    t1 = ((WORK_P_4173001329) + 672U);
    t3 = *((char **)t1);
    t1 = (t0 + 6210);
    t8 = ((IEEE_P_2592010699) + 2332);
    t9 = ((WORK_P_4173001329) + 3628U);
    t10 = (t14 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 7;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t15 = (7 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t16;
    t7 = xsi_base_array_concat(t7, t13, t8, (char)97, t3, t9, (char)97, t1, t14, (char)101);
    t16 = (8U + 8U);
    t2 = (16U != t16);
    if (t2 == 1)
        goto LAB8;

LAB9:    t11 = (t0 + 2972);
    t12 = (t11 + 32U);
    t17 = *((char **)t12);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 16U);
    xsi_driver_first_trans_fast_port(t11);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 3008);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 3044);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 3080);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1868U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2140U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB6;

LAB8:    xsi_size_not_matching(16U, t16, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(73, ng0);
    t1 = ((WORK_P_4173001329) + 672U);
    t4 = *((char **)t1);
    t1 = (t0 + 6218);
    t9 = ((IEEE_P_2592010699) + 2332);
    t10 = ((WORK_P_4173001329) + 3628U);
    t11 = (t14 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 7;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t20 = (7 - 0);
    t16 = (t20 * 1);
    t16 = (t16 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t16;
    t8 = xsi_base_array_concat(t8, t13, t9, (char)97, t4, t10, (char)97, t1, t14, (char)101);
    t16 = (8U + 8U);
    t5 = (16U != t16);
    if (t5 == 1)
        goto LAB13;

LAB14:    t12 = (t0 + 2972);
    t17 = (t12 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t21 = *((char **)t19);
    memcpy(t21, t8, 16U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2140U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t2 = (t15 == 1023);
    if (t2 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 6228);
    t4 = (t0 + 2936);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 2140U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t20 = (t15 + 1);
    t1 = (t0 + 2140U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t20;

LAB16:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB18;

LAB20:    t1 = (t0 + 1052U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB21;

LAB22:    t1 = (t0 + 1328U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB23;

LAB24:
LAB19:    goto LAB11;

LAB13:    xsi_size_not_matching(16U, t16, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 6226);
    t7 = (t0 + 2936);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2140U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB16;

LAB18:    xsi_set_current_line(94, ng0);
    t1 = ((WORK_P_4173001329) + 740U);
    t4 = *((char **)t1);
    t1 = (t0 + 1936U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    memcpy(t1, t4, 8U);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 960U);
    t3 = *((char **)t1);
    t1 = (t0 + 2004U);
    t4 = *((char **)t1);
    t16 = (191 - 31);
    t22 = (t16 * 1U);
    t23 = (0 + t22);
    t1 = (t4 + t23);
    memcpy(t1, t3, 32U);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 2072U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 2;
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 3008);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 1868U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 1;
    goto LAB19;

LAB21:    xsi_set_current_line(107, ng0);
    t1 = ((WORK_P_4173001329) + 876U);
    t4 = *((char **)t1);
    t1 = (t0 + 1936U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    memcpy(t1, t4, 8U);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t1 = (t0 + 2004U);
    t4 = *((char **)t1);
    t16 = (191 - 47);
    t22 = (t16 * 1U);
    t23 = (0 + t22);
    t1 = (t4 + t23);
    memcpy(t1, t3, 48U);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 2072U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 3;
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 3044);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 1868U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 1;
    goto LAB19;

LAB23:    xsi_set_current_line(120, ng0);
    t1 = ((WORK_P_4173001329) + 808U);
    t4 = *((char **)t1);
    t1 = (t0 + 1936U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    memcpy(t1, t4, 8U);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 2004U);
    t4 = *((char **)t1);
    t16 = (191 - 191);
    t22 = (t16 * 1U);
    t23 = (0 + t22);
    t1 = (t4 + t23);
    memcpy(t1, t3, 192U);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 2072U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 12;
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 3080);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 1868U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 1;
    goto LAB19;

LAB25:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 3008);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 3044);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 3080);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 1936U);
    t3 = *((char **)t1);
    t1 = (t0 + 6230);
    t8 = ((IEEE_P_2592010699) + 2332);
    t9 = (t0 + 5644U);
    t10 = (t14 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 7;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t15 = (7 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t16;
    t7 = xsi_base_array_concat(t7, t13, t8, (char)97, t3, t9, (char)97, t1, t14, (char)101);
    t16 = (8U + 8U);
    t2 = (16U != t16);
    if (t2 == 1)
        goto LAB27;

LAB28:    t11 = (t0 + 2972);
    t12 = (t11 + 32U);
    t17 = *((char **)t12);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 16U);
    xsi_driver_first_trans_fast_port(t11);
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 6238);
    t4 = (t0 + 2936);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(147, ng0);
    t1 = (t0 + 1868U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 2;
    goto LAB11;

LAB27:    xsi_size_not_matching(16U, t16, 0);
    goto LAB28;

LAB29:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 6240);
    t7 = (t0 + 2936);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 2004U);
    t3 = *((char **)t1);
    t1 = (t0 + 2072U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t20 = (t15 * 16);
    t24 = (t20 - 1);
    t16 = (191 - t24);
    t1 = (t0 + 2072U);
    t7 = *((char **)t1);
    t25 = *((int *)t7);
    t26 = (t25 - 1);
    t27 = (t26 * 16);
    xsi_vhdl_check_range_of_slice(191, 0, -1, t24, t27, -1);
    t22 = (t16 * 1U);
    t23 = (0 + t22);
    t1 = (t3 + t23);
    t8 = (t0 + 2072U);
    t9 = *((char **)t8);
    t28 = *((int *)t9);
    t29 = (t28 * 16);
    t30 = (t29 - 1);
    t8 = (t0 + 2072U);
    t10 = *((char **)t8);
    t31 = *((int *)t10);
    t32 = (t31 - 1);
    t33 = (t32 * 16);
    t34 = (t33 - t30);
    t35 = (t34 * -1);
    t35 = (t35 + 1);
    t36 = (1U * t35);
    t2 = (16U != t36);
    if (t2 == 1)
        goto LAB31;

LAB32:    t8 = (t0 + 2972);
    t11 = (t8 + 32U);
    t12 = *((char **)t11);
    t17 = (t12 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t1, 16U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(158, ng0);
    t1 = (t0 + 2072U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t2 = (t15 == 1);
    if (t2 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 2072U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t20 = (t15 - 1);
    t1 = (t0 + 2072U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t20;

LAB34:    goto LAB11;

LAB31:    xsi_size_not_matching(16U, t36, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 1868U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    goto LAB34;

LAB36:    xsi_size_not_matching(16U, t16, 0);
    goto LAB37;

}


extern void work_a_1357714570_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1357714570_3212880686_p_0};
	xsi_register_didat("work_a_1357714570_3212880686", "isim/sim_link_tracking_isim_beh.exe.sim/work/a_1357714570_3212880686.didat");
	xsi_register_executes(pe);
}
