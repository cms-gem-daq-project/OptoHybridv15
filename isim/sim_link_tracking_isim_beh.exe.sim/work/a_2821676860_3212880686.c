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
static const char *ng0 = "//psf/Home/Documents/PhD/Code/OptoHybrid/src/gtp_rx_mux.vhd";
extern char *IEEE_P_2592010699;
extern char *WORK_P_4173001329;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2821676860_3212880686_p_0(char *t0)
{
    char t16[16];
    char t19[16];
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
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    unsigned int t33;

LAB0:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2364);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1408U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 0);
    if (t2 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 1408U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 1);
    if (t2 != 0)
        goto LAB37;

LAB38:    t1 = (t0 + 1408U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 2);
    if (t2 != 0)
        goto LAB51;

LAB52:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 2408);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 2444);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 1408U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 2408);
    t7 = (t3 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2444);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1408U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB6;

LAB8:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2408);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2444);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t1 = (t0 + 4852);
    t2 = 1;
    if (2U == 2U)
        goto LAB14;

LAB15:    t2 = 0;

LAB16:    if (t2 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(67, ng0);
    t9 = (t0 + 1236U);
    t10 = *((char **)t9);
    t9 = ((WORK_P_4173001329) + 740U);
    t13 = *((char **)t9);
    t9 = (t0 + 4854);
    t17 = ((IEEE_P_2592010699) + 2332);
    t18 = ((WORK_P_4173001329) + 3112U);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 7;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t11 = (7 - 0);
    t22 = (t11 * 1);
    t22 = (t22 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t22;
    t15 = xsi_base_array_concat(t15, t16, t17, (char)97, t13, t18, (char)97, t9, t19, (char)101);
    t22 = (8U + 8U);
    t5 = 1;
    if (16U == t22)
        goto LAB23;

LAB24:    t5 = 0;

LAB25:    if (t5 != 0)
        goto LAB20;

LAB22:    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t1 = ((WORK_P_4173001329) + 876U);
    t4 = *((char **)t1);
    t1 = (t0 + 4862);
    t9 = ((IEEE_P_2592010699) + 2332);
    t10 = ((WORK_P_4173001329) + 3144U);
    t13 = (t19 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 7;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t11 = (7 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t12;
    t8 = xsi_base_array_concat(t8, t16, t9, (char)97, t4, t10, (char)97, t1, t19, (char)101);
    t12 = (8U + 8U);
    t2 = 1;
    if (16U == t12)
        goto LAB31;

LAB32:    t2 = 0;

LAB33:    if (t2 != 0)
        goto LAB29;

LAB30:
LAB21:    goto LAB12;

LAB14:    t12 = 0;

LAB17:    if (t12 < 2U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB15;

LAB19:    t12 = (t12 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(69, ng0);
    t25 = (t0 + 1612U);
    t26 = *((char **)t25);
    t25 = (t26 + 0);
    *((int *)t25) = 1;
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1544U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 2;
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1408U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 1;
    goto LAB21;

LAB23:    t23 = 0;

LAB26:    if (t23 < 16U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t21 = (t10 + t23);
    t24 = (t15 + t23);
    if (*((unsigned char *)t21) != *((unsigned char *)t24))
        goto LAB24;

LAB28:    t23 = (t23 + 1);
    goto LAB26;

LAB29:    xsi_set_current_line(78, ng0);
    t17 = (t0 + 1612U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    *((int *)t17) = 2;
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1544U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 3;
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1408U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 1;
    goto LAB21;

LAB31:    t22 = 0;

LAB34:    if (t22 < 16U)
        goto LAB35;
    else
        goto LAB33;

LAB35:    t14 = (t3 + t22);
    t15 = (t8 + t22);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB32;

LAB36:    t22 = (t22 + 1);
    goto LAB34;

LAB37:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1144U);
    t4 = *((char **)t1);
    t1 = (t0 + 4870);
    t5 = 1;
    if (2U == 2U)
        goto LAB42;

LAB43:    t5 = 0;

LAB44:    if (t5 != 0)
        goto LAB39;

LAB41:
LAB40:    goto LAB9;

LAB39:    xsi_set_current_line(95, ng0);
    t10 = (t0 + 1236U);
    t13 = *((char **)t10);
    t10 = (t0 + 1476U);
    t14 = *((char **)t10);
    t10 = (t0 + 1544U);
    t15 = *((char **)t10);
    t27 = *((int *)t15);
    t28 = (t27 * 16);
    t29 = (t28 - 1);
    t22 = (47 - t29);
    t10 = (t0 + 1544U);
    t17 = *((char **)t10);
    t30 = *((int *)t17);
    t31 = (t30 - 1);
    t32 = (t31 * 16);
    xsi_vhdl_check_range_of_slice(47, 0, -1, t29, t32, -1);
    t23 = (t22 * 1U);
    t33 = (0 + t23);
    t10 = (t14 + t33);
    memcpy(t10, t13, 16U);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 1544U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 1);
    if (t2 != 0)
        goto LAB48;

LAB50:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 1544U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t27 = (t11 - 1);
    t1 = (t0 + 1544U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t27;

LAB49:    goto LAB40;

LAB42:    t12 = 0;

LAB45:    if (t12 < 2U)
        goto LAB46;
    else
        goto LAB44;

LAB46:    t8 = (t4 + t12);
    t9 = (t1 + t12);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB43;

LAB47:    t12 = (t12 + 1);
    goto LAB45;

LAB48:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1408U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 2;
    goto LAB49;

LAB51:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 1612U);
    t4 = *((char **)t1);
    t27 = *((int *)t4);
    t5 = (t27 == 1);
    if (t5 != 0)
        goto LAB53;

LAB55:    t1 = (t0 + 1612U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 2);
    if (t2 != 0)
        goto LAB56;

LAB57:
LAB54:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 1408U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB9;

LAB53:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 1476U);
    t7 = *((char **)t1);
    t12 = (47 - 31);
    t22 = (t12 * 1U);
    t23 = (0 + t22);
    t1 = (t7 + t23);
    t8 = (t0 + 2480);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 32U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 2408);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB54;

LAB56:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 1476U);
    t4 = *((char **)t1);
    t12 = (47 - 47);
    t22 = (t12 * 1U);
    t23 = (0 + t22);
    t1 = (t4 + t23);
    t7 = (t0 + 2516);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 48U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 2444);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB54;

}


extern void work_a_2821676860_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2821676860_3212880686_p_0};
	xsi_register_didat("work_a_2821676860_3212880686", "isim/sim_link_tracking_isim_beh.exe.sim/work/a_2821676860_3212880686.didat");
	xsi_register_executes(pe);
}
