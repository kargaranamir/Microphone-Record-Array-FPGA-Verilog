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
    unisims_ver_m_00000000002399568039_2282143210_init();
    unisims_ver_m_00000000000740258969_3897995058_init();
    unisims_ver_m_00000000000740258969_1625843133_init();
    unisims_ver_m_00000000003131622635_0225263307_init();
    unisims_ver_m_00000000002922998384_2127277471_init();
    unisims_ver_m_00000000003266096158_2593380106_init();
    work_m_00000000004060336252_3690717137_init();
    work_m_00000000003235003774_4281339436_init();
    xilinxcorelib_ver_m_00000000001382328732_1168568762_init();
    xilinxcorelib_ver_m_00000000001746895110_3749024002_init();
    xilinxcorelib_ver_m_00000000002806180517_2920860699_init();
    xilinxcorelib_ver_m_00000000001291582275_3171856392_init();
    work_m_00000000003630952586_0948142031_init();
    work_m_00000000003967707877_3679664405_init();
    unisims_ver_m_00000000004091665089_3794224165_init();
    unisims_ver_m_00000000003084551676_1498336500_init();
    work_m_00000000001574440699_3294885972_init();
    work_m_00000000002551424265_2263673153_init();
    xilinxcorelib_ver_m_00000000000200492576_0409231278_init();
    xilinxcorelib_ver_m_00000000000200492576_0860425325_init();
    xilinxcorelib_ver_m_00000000001701721312_1593711687_init();
    xilinxcorelib_ver_m_00000000003111224940_0720236176_init();
    xilinxcorelib_ver_m_00000000001291582275_3635858052_init();
    work_m_00000000000673889000_1732271763_init();
    work_m_00000000004010334257_1627018942_init();
    work_m_00000000002349152520_1115828087_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002349152520_1115828087");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
