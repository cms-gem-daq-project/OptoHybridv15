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
    unsigned int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 1884);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 11622);
    *((int *)t1) = 0;
    t3 = (t0 + 11626);
    *((int *)t3) = 127;
    t14 = 0;
    t15 = 127;

LAB10:    if (t14 <= t15)
        goto LAB11;

LAB13:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(33, ng0);
    t3 = xsi_get_transient_memory(4096U);
    memset(t3, 0, 4096U);
    t7 = t3;
    t8 = (32U * 1U);
    t9 = t7;
    memset(t9, (unsigned char)2, t8);
    t10 = (t8 != 0);
    if (t10 == 1)
        goto LAB8;

LAB9:    t12 = (t0 + 1132U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    memcpy(t12, t3, 4096U);
    goto LAB6;

LAB8:    t11 = (4096U / t8);
    xsi_mem_set_data(t7, t7, t8, t11);
    goto LAB9;

LAB11:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 868U);
    t7 = *((char **)t4);
    t4 = (t0 + 11622);
    t16 = *((int *)t4);
    t17 = (t16 - 127);
    t8 = (t17 * -1);
    xsi_vhdl_check_range_of_index(127, 0, -1, *((int *)t4));
    t11 = (1U * t8);
    t18 = (0 + t11);
    t9 = (t7 + t18);
    t2 = *((unsigned char *)t9);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1132U);
    t3 = *((char **)t1);
    t1 = (t0 + 11622);
    t16 = *((int *)t1);
    t17 = (t16 - 127);
    t8 = (t17 * -1);
    xsi_vhdl_check_range_of_index(127, 0, -1, *((int *)t1));
    t11 = (32U * t8);
    t18 = (0 + t11);
    t4 = (t3 + t18);
    t7 = (t0 + 11622);
    t19 = *((int *)t7);
    t20 = (t19 - 127);
    t21 = (t20 * -1);
    t22 = (32U * t21);
    t23 = (0U + t22);
    t9 = (t0 + 1928);
    t12 = (t9 + 32U);
    t13 = *((char **)t12);
    t24 = (t13 + 40U);
    t25 = *((char **)t24);
    memcpy(t25, t4, 32U);
    xsi_driver_first_trans_delta(t9, t23, 32U, 0LL);

LAB12:    t1 = (t0 + 11622);
    t14 = *((int *)t1);
    t3 = (t0 + 11626);
    t15 = *((int *)t3);
    if (t14 == t15)
        goto LAB13;

LAB17:    t16 = (t14 + 1);
    t14 = t16;
    t4 = (t0 + 11622);
    *((int *)t4) = t14;
    goto LAB10;

LAB14:    xsi_set_current_line(42, ng0);
    t12 = (t0 + 776U);
    t13 = *((char **)t12);
    t12 = (t0 + 11622);
    t19 = *((int *)t12);
    t20 = (t19 - 127);
    t21 = (t20 * -1);
    xsi_vhdl_check_range_of_index(127, 0, -1, *((int *)t12));
    t22 = (32U * t21);
    t23 = (0 + t22);
    t24 = (t13 + t23);
    t25 = (t0 + 1132U);
    t26 = *((char **)t25);
    t25 = (t0 + 11622);
    t27 = *((int *)t25);
    t28 = (t27 - 127);
    t29 = (t28 * -1);
    xsi_vhdl_check_range_of_index(127, 0, -1, *((int *)t25));
    t30 = (32U * t29);
    t31 = (0 + t30);
    t32 = (t26 + t31);
    memcpy(t32, t24, 32U);
    goto LAB15;

}


extern void work_a_1350853198_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1350853198_3212880686_p_0};
	xsi_register_didat("work_a_1350853198_3212880686", "isim/sim_link_tracking_isim_beh.exe.sim/work/a_1350853198_3212880686.didat");
	xsi_register_executes(pe);
}
