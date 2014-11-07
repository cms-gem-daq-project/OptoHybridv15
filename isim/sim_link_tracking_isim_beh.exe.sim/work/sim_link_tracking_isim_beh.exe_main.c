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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;
char *IEEE_P_1242562249;
char *WORK_P_4173001329;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    work_p_4173001329_init();
    ieee_p_1242562249_init();
    work_a_2821676860_3212880686_init();
    work_a_1357714570_3212880686_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_a_2949507682_0831356973_init();
    work_a_0328360806_0831356973_init();
    work_a_3041533641_2966456923_init();
    work_a_0645111738_3212880686_init();
    work_a_0137612834_3212880686_init();
    work_a_1611464708_1516540902_init();
    work_a_1350853198_3212880686_init();
    work_a_4000226436_3212880686_init();
    work_a_1425969232_3212880686_init();
    work_a_0050065155_3212880686_init();
    xilinxcorelib_a_0921653923_3212880686_init();
    xilinxcorelib_a_1360472642_3212880686_init();
    xilinxcorelib_a_2693255460_3212880686_init();
    work_a_1137702655_2328506233_init();
    work_a_1413330318_3212880686_init();
    work_a_2293424288_3212880686_init();
    work_a_3881056788_0867092691_init();
    work_a_3696113720_0923701488_init();
    work_a_3484096739_3908980123_init();
    work_a_1543692222_3212880686_init();
    work_a_3874375747_2372691052_init();


    xsi_register_tops("work_a_3874375747_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    WORK_P_4173001329 = xsi_get_engine_memory("work_p_4173001329");

    return xsi_run_simulation(argc, argv);

}
