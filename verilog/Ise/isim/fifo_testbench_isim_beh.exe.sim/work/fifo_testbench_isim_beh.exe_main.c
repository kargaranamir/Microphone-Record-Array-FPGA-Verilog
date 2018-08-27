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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    xilinxcorelib_ver_m_00000000000200492576_0409231278_init();
    xilinxcorelib_ver_m_00000000000200492576_0860425325_init();
    xilinxcorelib_ver_m_00000000001701721312_1593711687_init();
    xilinxcorelib_ver_m_00000000003111224940_0720236176_init();
    xilinxcorelib_ver_m_00000000001291582275_3635858052_init();
    work_m_00000000000673889000_1732271763_init();
    work_m_00000000004010334257_1627018942_init();
    work_m_00000000001723124678_2721290789_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001723124678_2721290789");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
