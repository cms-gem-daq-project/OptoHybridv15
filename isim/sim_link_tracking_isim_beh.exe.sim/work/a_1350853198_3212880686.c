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
static const char *ng0 = "//psf/Home/Documents/PhD/Code/OH/src/registers.vhd";
extern char *IEEE_P_2592010699;
extern char *WORK_P_4173001329;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1350853198_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned int t8;
    char *t9;
    unsigned char t10;
    unsigned int t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 1792);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(36, ng0);
    t1 = ((WORK_P_4173001329) + 944U);
    t3 = *((char **)t1);
    t14 = *((int *)t3);
    t15 = (t14 - 1);
    t1 = (t0 + 11460);
    *((int *)t1) = 0;
    t4 = (t0 + 11464);
    *((int *)t4) = t15;
    t16 = 0;
    t17 = t15;

LAB10:    if (t16 <= t17)
        goto LAB11;

LAB13:
LAB6:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1040U);
    t3 = *((char **)t1);
    t1 = (t0 + 1836);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t9 = (t7 + 40U);
    t12 = *((char **)t9);
    memcpy(t12, t3, 4096U);
    xsi_driver_first_trans_delta(t1, 0U, 4096U, 0LL);
    goto LAB3;

LAB5:    xsi_set_current_line(32, ng0);
    t3 = xsi_get_transient_memory(4096U);
    memset(t3, 0, 4096U);
    t7 = t3;
    t8 = (32U * 1U);
    t9 = t7;
    memset(t9, (unsigned char)2, t8);
    t10 = (t8 != 0);
    if (t10 == 1)
        goto LAB8;

LAB9:    t12 = (t0 + 1040U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    memcpy(t12, t3, 4096U);
    goto LAB6;

LAB8:    t11 = (4096U / t8);
    xsi_mem_set_data(t7, t7, t8, t11);
    goto LAB9;

LAB11:    xsi_set_current_line(39, ng0);
    t7 = (t0 + 776U);
    t9 = *((char **)t7);
    t7 = (t0 + 11460);
    t18 = *((int *)t7);
    t19 = (t18 - 127);
    t8 = (t19 * -1);
    xsi_vhdl_check_range_of_index(127, 0, -1, *((int *)t7));
    t11 = (1U * t8);
    t20 = (0 + 0U);
    t21 = (t20 + t11);
    t12 = (t9 + t21);
    t2 = *((unsigned char *)t12);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB14;

LAB16:
LAB15:
LAB12:    t1 = (t0 + 11460);
    t16 = *((int *)t1);
    t3 = (t0 + 11464);
    t17 = *((int *)t3);
    if (t16 == t17)
        goto LAB13;

LAB17:    t14 = (t16 + 1);
    t16 = t14;
    t4 = (t0 + 11460);
    *((int *)t4) = t16;
    goto LAB10;

LAB14:    xsi_set_current_line(41, ng0);
    t13 = (t0 + 776U);
    t22 = *((char **)t13);
    t13 = (t0 + 11460);
    t23 = *((int *)t13);
    t24 = (t23 - 127);
    t25 = (t24 * -1);
    xsi_vhdl_check_range_of_index(127, 0, -1, *((int *)t13));
    t26 = (32U * t25);
    t27 = (0 + 128U);
    t28 = (t27 + t26);
    t29 = (t22 + t28);
    t30 = (t0 + 1040U);
    t31 = *((char **)t30);
    t30 = (t0 + 11460);
    t32 = *((int *)t30);
    t33 = (t32 - 127);
    t34 = (t33 * -1);
    xsi_vhdl_check_range_of_index(127, 0, -1, *((int *)t30));
    t35 = (32U * t34);
    t36 = (0 + t35);
    t37 = (t31 + t36);
    memcpy(t37, t29, 32U);
    goto LAB15;

}


extern void work_a_1350853198_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1350853198_3212880686_p_0};
	xsi_register_didat("work_a_1350853198_3212880686", "isim/sim_link_tracking_isim_beh.exe.sim/work/a_1350853198_3212880686.didat");
	xsi_register_executes(pe);
}
