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
static const char *ng0 = "//psf/Home/Documents/PhD/Code/OH/src/tracking_concentrator.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0050065155_3212880686_p_0(char *t0)
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
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2044);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1224U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 0);
    if (t2 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 1224U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 1);
    if (t2 != 0)
        goto LAB20;

LAB21:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2088);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1224U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 2088);
    t7 = (t3 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1224U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB6;

LAB8:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2088);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t1 = (t0 + 5508);
    t2 = 1;
    if (8U == 8U)
        goto LAB14;

LAB15:    t2 = 0;

LAB16:    if ((!(t2)) != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(48, ng0);
    t9 = (t0 + 1292U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    *((int *)t9) = 0;
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1224U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 1;
    goto LAB12;

LAB14:    t12 = 0;

LAB17:    if (t12 < 8U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB15;

LAB19:    t12 = (t12 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 868U);
    t4 = *((char **)t1);
    t12 = (191 - 191);
    t13 = (t12 * 1U);
    t1 = (t0 + 1292U);
    t7 = *((char **)t1);
    t14 = *((int *)t7);
    t15 = (t14 - 7);
    t16 = (t15 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t14);
    t17 = (192U * t16);
    t18 = (0 + t17);
    t19 = (t18 + t13);
    t1 = (t4 + t19);
    t8 = (t0 + 5516);
    t5 = 1;
    if (4U == 4U)
        goto LAB25;

LAB26:    t5 = 0;

LAB27:    if (t5 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2088);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB23:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1292U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 7);
    if (t2 != 0)
        goto LAB31;

LAB33:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1292U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t14 = (t11 + 1);
    t1 = (t0 + 1292U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t14;

LAB32:    goto LAB9;

LAB22:    xsi_set_current_line(59, ng0);
    t22 = (t0 + 868U);
    t23 = *((char **)t22);
    t22 = (t0 + 1292U);
    t24 = *((char **)t22);
    t25 = *((int *)t24);
    t26 = (t25 - 7);
    t27 = (t26 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t25);
    t28 = (192U * t27);
    t29 = (0 + t28);
    t22 = (t23 + t29);
    t30 = (t0 + 2124);
    t31 = (t30 + 32U);
    t32 = *((char **)t31);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    memcpy(t34, t22, 192U);
    xsi_driver_first_trans_fast_port(t30);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2088);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB23;

LAB25:    t20 = 0;

LAB28:    if (t20 < 4U)
        goto LAB29;
    else
        goto LAB27;

LAB29:    t10 = (t1 + t20);
    t21 = (t8 + t20);
    if (*((unsigned char *)t10) != *((unsigned char *)t21))
        goto LAB26;

LAB30:    t20 = (t20 + 1);
    goto LAB28;

LAB31:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1224U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    goto LAB32;

}


extern void work_a_0050065155_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0050065155_3212880686_p_0};
	xsi_register_didat("work_a_0050065155_3212880686", "isim/sim_link_tracking_isim_beh.exe.sim/work/a_0050065155_3212880686.didat");
	xsi_register_executes(pe);
}
