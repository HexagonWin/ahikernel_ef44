/* Copyright (c) 2011, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include "msm_fb.h"
#include "mipi_dsi.h"
#include "mipi_samsung_octa.h"

static struct msm_panel_info pinfo;

static struct mipi_dsi_phy_ctrl dsi_cmd_mode_phy_db = {
#if 0
/* regulator */
{0x03, 0x0a, 0x04, 0x00, 0x20},
/* timing */
{0xab, 0x8a, 0x18, 0x00, 0x92, 0x97, 0x1b, 0x8c,
 0x0c, 0x03, 0x04, 0xa0},
/* phy ctrl */
{0x5f, 0x00, 0x00, 0x10},
/* strength */
{0xff, 0x00, 0x06, 0x00},
/* pll control */
{0x0, 0x71, 0x31, 0xda, 0x00, 0x50, 0x48, 0x63,
 0x31, 0x0f, 0x07,
 0x00, 0x14, 0x03, 0x00, 0x02, 0x00, 0x20, 0x00, 0x01 },
#endif
/* regulator */
{0x03, 0x0a, 0x04, 0x00, 0x20},
/* timing */
{0xab, 0x8a, 0x18, 0x00, 0x92, 0x97, 0x1b, 0x8c, 0x0c, 0x03, 0x04, 0xa0},
/* phy ctrl */
{0x5f, 0x00, 0x00, 0x10},
/* strength */
{0xff, 0x00, 0x06, 0x00},
/* pll control */
{0x0, 0xc1, 0x31, 0xda, 0x00, 0x50, 0x48, 0x63,
0x31, 0x0f, 0x07,
0x00, 0x14, 0x03, 0x00, 0x02, 0x00, 0x20, 0x00, 0x01 },

};

static int __init mipi_video_oscar_qhd_init(void)
{
	int ret;

#ifdef CONFIG_FB_MSM_MIPI_PANEL_DETECT
	if (msm_fb_detect_client("mipi_video_oscar_wxga"))
		return 0;
#endif


	pinfo.xres = 540;
	pinfo.yres = 960;
	pinfo.type = MIPI_CMD_PANEL;
	pinfo.pdest = DISPLAY_1;
	pinfo.wait_cycle = 0;
	pinfo.bpp = 24;
	//pinfo.lcdc.h_back_porch = 50;
	//pinfo.lcdc.h_front_porch = 50;
	//pinfo.lcdc.h_pulse_width = 20;
	pinfo.lcdc.v_back_porch = 3;
	pinfo.lcdc.v_front_porch = 77;
	pinfo.lcdc.v_pulse_width = 0;
	pinfo.lcdc.border_clr = 0;	/* blk */
	pinfo.lcdc.underflow_clr = 0xff;	/* blue */
	pinfo.lcdc.hsync_skew = 0;
	pinfo.bl_max = 13;
	pinfo.bl_min = 1;
	pinfo.fb_num = 2;
	pinfo.clk_rate = 454000000;
	//pinfo.is_3d_panel = FB_TYPE_3D_PANEL;
	pinfo.lcd.vsync_enable = TRUE;
	pinfo.lcd.hw_vsync_mode = TRUE;
	pinfo.lcd.refx100 = 6000; /* adjust refx100 to prevent tearing */

	pinfo.lcd.v_back_porch = 3;
	pinfo.lcd.v_front_porch = 77;
	pinfo.lcd.v_pulse_width = 0;

	pinfo.mipi.mode = DSI_CMD_MODE;
	pinfo.mipi.dst_format = DSI_CMD_DST_FORMAT_RGB888;
	pinfo.mipi.vc = 0;

	pinfo.mipi.data_lane0 = TRUE;
	pinfo.mipi.data_lane1 = TRUE;

	pinfo.mipi.t_clk_post = 0x21;
	pinfo.mipi.t_clk_pre = 0x2F;
	pinfo.mipi.stream = 0;	/* dma_p */


	pinfo.mipi.mdp_trigger = DSI_CMD_TRIGGER_NONE;
	pinfo.mipi.dma_trigger = DSI_CMD_TRIGGER_SW;


	pinfo.mipi.te_sel = 1; /* TE from vsycn gpio */
	pinfo.mipi.interleave_max = 1;
	pinfo.mipi.insert_dcs_cmd = TRUE;
	pinfo.mipi.wr_mem_continue = 0x3c;
	pinfo.mipi.wr_mem_start = 0x2c;
	pinfo.mipi.dsi_phy_db = &dsi_cmd_mode_phy_db;
 	pinfo.mipi.esc_byte_ratio = 4;

	ret = mipi_oscar_device_register(&pinfo, MIPI_DSI_PRIM,
						MIPI_DSI_PANEL_QHD_PT);
	if (ret)
		printk(KERN_ERR "%s: failed to register device!\n", __func__);

	return ret;
}
module_init(mipi_video_oscar_qhd_init);
