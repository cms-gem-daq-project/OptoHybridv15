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
static const char *ng0 = "//psf/Home/Documents/PhD/Code/OptoHybrid/src/adc_switch.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1816993439_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;

LAB0:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2044);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(37, ng0);
    t3 = xsi_get_transient_memory(32U);
    memset(t3, 0, 32U);
    t7 = t3;
    memset(t7, (unsigned char)2, 32U);
    t8 = (t0 + 1224U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    memcpy(t8, t3, 32U);
    xsi_set_current_line(39, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t3 = t1;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 1292U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 32U);
    goto LAB6;

LAB8:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 868U);
    t4 = *((char **)t1);
    t10 = (7 - 7);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t4 + t12);
    t7 = (t0 + 3883);
    t6 = 1;
    if (2U == 2U)
        goto LAB14;

LAB15:    t6 = 0;

LAB16:    if (t6 != 0)
        goto LAB11;

LAB13:    t1 = (t0 + 868U);
    t3 = *((char **)t1);
    t10 = (7 - 7);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t3 + t12);
    t4 = (t0 + 3885);
    t2 = 1;
    if (2U == 2U)
        goto LAB22;

LAB23:    t2 = 0;

LAB24:    if (t2 != 0)
        goto LAB20;

LAB21:    t1 = (t0 + 868U);
    t3 = *((char **)t1);
    t10 = (7 - 7);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t3 + t12);
    t4 = (t0 + 3887);
    t2 = 1;
    if (2U == 2U)
        goto LAB30;

LAB31:    t2 = 0;

LAB32:    if (t2 != 0)
        goto LAB28;

LAB29:    t1 = (t0 + 868U);
    t3 = *((char **)t1);
    t10 = (7 - 7);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t3 + t12);
    t4 = (t0 + 3889);
    t2 = 1;
    if (2U == 2U)
        goto LAB38;

LAB39:    t2 = 0;

LAB40:    if (t2 != 0)
        goto LAB36;

LAB37:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(47, ng0);
    t15 = (t0 + 868U);
    t16 = *((char **)t15);
    t17 = (7 - 5);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t15 = (t16 + t19);
    t20 = (t0 + 1224U);
    t21 = *((char **)t20);
    t22 = (31 - 5);
    t23 = (t22 * 1U);
    t24 = (0 + t23);
    t20 = (t21 + t24);
    memcpy(t20, t15, 6U);
    goto LAB12;

LAB14:    t13 = 0;

LAB17:    if (t13 < 2U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t9 = (t1 + t13);
    t14 = (t7 + t13);
    if (*((unsigned char *)t9) != *((unsigned char *)t14))
        goto LAB15;

LAB19:    t13 = (t13 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(51, ng0);
    t14 = (t0 + 868U);
    t15 = *((char **)t14);
    t17 = (7 - 5);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t14 = (t15 + t19);
    t16 = (t0 + 1224U);
    t20 = *((char **)t16);
    t22 = (31 - 11);
    t23 = (t22 * 1U);
    t24 = (0 + t23);
    t16 = (t20 + t24);
    memcpy(t16, t14, 6U);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1224U);
    t3 = *((char **)t1);
    t1 = (t0 + 2088);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 32U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB12;

LAB22:    t13 = 0;

LAB25:    if (t13 < 2U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t8 = (t1 + t13);
    t9 = (t4 + t13);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB23;

LAB27:    t13 = (t13 + 1);
    goto LAB25;

LAB28:    xsi_set_current_line(57, ng0);
    t14 = (t0 + 868U);
    t15 = *((char **)t14);
    t17 = (7 - 5);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t14 = (t15 + t19);
    t16 = (t0 + 1292U);
    t20 = *((char **)t16);
    t22 = (31 - 5);
    t23 = (t22 * 1U);
    t24 = (0 + t23);
    t16 = (t20 + t24);
    memcpy(t16, t14, 6U);
    goto LAB12;

LAB30:    t13 = 0;

LAB33:    if (t13 < 2U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t8 = (t1 + t13);
    t9 = (t4 + t13);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB31;

LAB35:    t13 = (t13 + 1);
    goto LAB33;

LAB36:    xsi_set_current_line(61, ng0);
    t14 = (t0 + 868U);
    t15 = *((char **)t14);
    t17 = (7 - 5);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t14 = (t15 + t19);
    t16 = (t0 + 1292U);
    t20 = *((char **)t16);
    t22 = (31 - 11);
    t23 = (t22 * 1U);
    t24 = (0 + t23);
    t16 = (t20 + t24);
    memcpy(t16, t14, 6U);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1292U);
    t3 = *((char **)t1);
    t1 = (t0 + 2124);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 32U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB12;

LAB38:    t13 = 0;

LAB41:    if (t13 < 2U)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t8 = (t1 + t13);
    t9 = (t4 + t13);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB39;

LAB43:    t13 = (t13 + 1);
    goto LAB41;

}


extern void work_a_1816993439_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1816993439_3212880686_p_0};
	xsi_register_didat("work_a_1816993439_3212880686", "isim/tb_adc_isim_beh.exe.sim/work/a_1816993439_3212880686.didat");
	xsi_register_executes(pe);
}
