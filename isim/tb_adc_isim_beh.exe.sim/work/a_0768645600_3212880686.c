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
static const char *ng0 = "//psf/Home/Documents/PhD/Code/OptoHybrid/src/uart_rx.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0768645600_3212880686_p_0(char *t0)
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
    int t12;
    unsigned char t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2156);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1200U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 16666);
    if (t2 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1200U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t12 = (t11 + 1);
    t1 = (t0 + 1200U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t12;
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1268U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)2;

LAB9:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1132U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 0);
    if (t2 != 0)
        goto LAB11;

LAB13:    t1 = (t0 + 1132U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 1);
    if (t2 != 0)
        goto LAB20;

LAB21:    t1 = (t0 + 1132U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 2);
    if (t2 != 0)
        goto LAB28;

LAB29:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 2200);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 1132U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 1200U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;

LAB12:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 2200);
    t7 = (t3 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1132U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1200U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB6;

LAB8:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1200U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1268U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB9;

LAB11:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2200);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1268U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 776U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t13 = (t6 == (unsigned char)2);
    if (t13 != 0)
        goto LAB17;

LAB19:
LAB18:    goto LAB15;

LAB17:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1336U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1132U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1268U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB12;

LAB22:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 776U);
    t7 = *((char **)t1);
    t13 = *((unsigned char *)t7);
    t1 = (t0 + 1404U);
    t8 = *((char **)t1);
    t1 = (t0 + 1336U);
    t9 = *((char **)t1);
    t12 = *((int *)t9);
    t14 = (t12 - 7);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t12);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t8 + t17);
    *((unsigned char *)t1) = t13;
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1336U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 7);
    if (t2 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1336U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t12 = (t11 + 1);
    t1 = (t0 + 1336U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t12;

LAB26:    goto LAB23;

LAB25:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1132U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 2;
    goto LAB26;

LAB28:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 1404U);
    t4 = *((char **)t1);
    t1 = (t0 + 2236);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 1268U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB30;

LAB32:
LAB31:    goto LAB12;

LAB30:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 776U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t13 = (t6 == (unsigned char)3);
    if (t13 != 0)
        goto LAB33;

LAB35:
LAB34:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 1132U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB31;

LAB33:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 2200);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB34;

}


extern void work_a_0768645600_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0768645600_3212880686_p_0};
	xsi_register_didat("work_a_0768645600_3212880686", "isim/tb_adc_isim_beh.exe.sim/work/a_0768645600_3212880686.didat");
	xsi_register_executes(pe);
}
