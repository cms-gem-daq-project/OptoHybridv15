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
static const char *ng0 = "//psf/Home/Documents/PhD/Code/OH/src/tracking_decoder.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1425969232_3212880686_p_0(char *t0)
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
    unsigned int t14;
    unsigned char t15;
    int t16;
    int t17;

LAB0:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2112);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(33, ng0);
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
        goto LAB14;

LAB15:    t1 = (t0 + 1224U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 2);
    if (t2 != 0)
        goto LAB22;

LAB23:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 2156);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1224U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 2156);
    t7 = (t3 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1224U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB6;

LAB8:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2156);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 868U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 1292U);
    t7 = *((char **)t1);
    t11 = (191 - 191);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t7 + t14);
    *((unsigned char *)t1) = t6;
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1360U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 190;
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1224U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 1;
    goto LAB12;

LAB14:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 776U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1224U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;

LAB17:    goto LAB9;

LAB16:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 868U);
    t7 = *((char **)t1);
    t15 = *((unsigned char *)t7);
    t1 = (t0 + 1292U);
    t8 = *((char **)t1);
    t1 = (t0 + 1360U);
    t9 = *((char **)t1);
    t16 = *((int *)t9);
    t17 = (t16 - 191);
    t12 = (t17 * -1);
    xsi_vhdl_check_range_of_index(191, 0, -1, t16);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t8 + t14);
    *((unsigned char *)t1) = t15;
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1360U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 0);
    if (t2 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1360U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t16 = (t11 - 1);
    t1 = (t0 + 1360U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t16;

LAB20:    goto LAB17;

LAB19:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1224U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 2;
    goto LAB20;

LAB22:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1292U);
    t4 = *((char **)t1);
    t1 = (t0 + 2192);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 192U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2156);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1224U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB9;

}


extern void work_a_1425969232_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1425969232_3212880686_p_0};
	xsi_register_didat("work_a_1425969232_3212880686", "isim/sim_tracking_decoder_isim_beh.exe.sim/work/a_1425969232_3212880686.didat");
	xsi_register_executes(pe);
}
