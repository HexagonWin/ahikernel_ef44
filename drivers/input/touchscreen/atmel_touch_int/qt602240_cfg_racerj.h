/* -------------------------------------------------------------------- */
/* GPIO, VREG & resolution */
/* -------------------------------------------------------------------- */

#define MAX_NUM_FINGER	5

#define HAS_TOUCH_KEY
// Screen resolution
// Vega Racer J - FWVGA = 854 x 480
#define SCREEN_RESOLUTION_X	480 // 480
#define SCREEN_RESOLUTION_Y	854 // 800

// Interrupt GPIO Pin
#define GPIO_TOUCH_CHG			11
#define GPIO_TOUCH_RST			50

#define TOUCH_LR_MARGIN		29
#define TOUCH_BLANK_LENGTH	47	// 3-btn 71
#define TOUCH_BAR_LENGTH		70	// 3-btn 92

#define TOUCH_KEY_Y			890 // 833

#define TOUCH_MENU_MIN			TOUCH_LR_MARGIN  					// 27	// 0 + 27
#define TOUCH_MENU_MAX			TOUCH_MENU_MIN + TOUCH_BAR_LENGTH	// 119	// 27 + 92
#define TOUCH_HOME_MIN			TOUCH_MENU_MAX + TOUCH_BLANK_LENGTH	// 190	// 480/2 - 50
#define TOUCH_HOME_MAX			TOUCH_HOME_MIN + TOUCH_BAR_LENGTH	// 290	// 480/2 + 50
#define TOUCH_BACK_MIN			TOUCH_HOME_MAX + TOUCH_BLANK_LENGTH	// 361	// 453 - 92
#define TOUCH_BACK_MAX			TOUCH_BACK_MIN + TOUCH_BAR_LENGTH	// 453	// 480 - 27
#define TOUCH_SEARCH_MIN		TOUCH_BACK_MAX + TOUCH_BLANK_LENGTH	// 361	// 453 - 92
#define TOUCH_SEARCH_MAX		TOUCH_SEARCH_MIN + TOUCH_BAR_LENGTH	// 453	// 480 - 27

// Auto Cal time set
#define TOUCH_AUTO_CAL_TIME 7000

#ifdef PROTECTION_MODE
/* -------------------------------------------------------------------- */
/* DEVICE   : mxT224 Lockscreen Mode CONFIGURATION */
/* -------------------------------------------------------------------- */
#define T8_TCHAUTOCAL_PROTECTION 	10  /* 10*(200ms) */
#define T8_ATCHCALST_PROTECTION 	9
#define T8_ATCHCALSTHR_PROTECTION	35
#define T8_ATCHFRCCALTHR_PROTECTION 	50        
#define T8_ATCHFRCCALRATIO_PROTECTION 	20     

#endif
/* -------------------------------------------------------------------- */
/* DEVICE   : mxT224 CONFIGURATION */
/* -------------------------------------------------------------------- */

/* _SPT_USERDATA_T38 INSTANCE 0 */
#define T7_IDLEACQINT			32
#define T7_IDLEACQINT_PLUG	255
#define T7_ACTVACQINT			255
#define T7_ACTV2IDLETO			30

/* _GEN_ACQUISITIONCONFIG_T8 INSTANCE 0 */
#define T8_CHRGTIME               	32
#define T8_TCHDRIFT              	5	//20
#define T8_DRIFTST              	5	
#define T8_TCHAUTOCAL            	0
#define T8_SYNC                  	0
#define T8_ATCHCALST            255
#define T8_ATCHCALSTHR           	35
#define T8_ATCHFRCCALTHR        255
#define T8_ATCHFRCCALRATIO      127

/* _TOUCH_MULTITOUCHSCREEN_T9 INSTANCE 0 */
#define T9_CTRL                         143
#define T9_XORIGIN                      0
#define T9_YORIGIN                      0
#define T9_XSIZE                        19
#define T9_YSIZE                        11
#define T9_AKSCFG                       0
#define T9_BLEN                         16
#define T9_TCHTHR                       50
#define T9_TCHDI                      	2
#define T9_ORIENT                       5
#define T9_MRGTIMEOUT                   10
#define T9_MOVHYSTI                     10//1
#define T9_MOVHYSTN                     2
#define T9_MOVFILTER                  	18
#define T9_NUMTOUCH                     MAX_NUM_FINGER
#define T9_MRGHYST                      10
#define T9_MRGTHR                       25//0
#define T9_AMPHYST                      10
#define T9_XRANGE                       956  // (957-1)    // 957 = (97.65/87.1) * 854 
#define T9_YRANGE                       479  // (480-1)    
#define T9_XLOCLIP                      0
#define T9_XHICLIP                      0
#define T9_YLOCLIP                      0
#define T9_YHICLIP                      0
#define T9_XEDGECTRL                    0
#define T9_XEDGEDIST                    0
#define T9_YEDGECTRL                    0
#define T9_YEDGEDIST                    0
#define T9_JUMPLIMIT                    20 
#define T9_TCHHYST                 (T9_TCHTHR/4)  /* V2.0 or MXT224E added */
#define T9_XPITCH                   	0  /* MXT224E added */
#define T9_YPITCH                   	0  /* MXT224E added */
#define T9_NEXTTCHDI                	2     

/*
//Multitouch screen config
touch_multitouchscreen_t9_config_t touchscreen_config_default = {
.ctrl		= T9_CTRL,
.xorigin	= T9_XORIGIN,
.yorigin	= T9_YORIGIN,
.xsize		= T9_XSIZE,
.ysize		= T9_YSIZE,
.akscfg		= T9_AKSCFG,
.blen		= T9_BLEN,
.tchthr		= T9_TCHTHR,
.tchdi		= T9_TCHDI,
.orient		= T9_ORIENT,
.mrgtimeout	= T9_MRGTIMEOUT,
.movhysti	= T9_MOVHYSTI,
.movhystn	= T9_MOVHYSTN,
.movfilter	= T9_MOVFILTER,
.numtouch	= MAX_NUM_FINGER,
.mrghyst	= T9_MRGHYST,
.mrgthr		= T9_MRGTHR,
.amphyst	= T9_AMPHYST,
.xrange		= T9_XRANGE,
.yrange		= T9_YRANGE,
.xloclip	= T9_XLOCLIP,
.xhiclip	= T9_XHICLIP,
.yloclip	= T9_YLOCLIP,
.yhiclip	= T9_YHICLIP,
.xedgectrl	= T9_XEDGECTRL,
.xedgedist	= T9_XEDGEDIST,
.yedgectrl	= T9_YEDGECTRL,
.yedgedist	= T9_YEDGEDIST,
.jumplimit	= T9_JUMPLIMIT,
.tchhyst	= T9_TCHHYST, // PLUG: (T9_TCHTHR_PLUG/4);
.xpitch		= T9_XPITCH,	
.ypitch		= T9_YPITCH,
.nexttchdi	= T9_NEXTTCHDI
};
*/
/* [TOUCH_KEYARRAY_T15 INSTANCE 0]    */
#define T15_CTRL                        0
#define T15_XORIGIN                     0
#define T15_YORIGIN                     0
#define T15_XSIZE                       0
#define T15_YSIZE                       0
#define T15_AKSCFG                      0
#define T15_BLEN                        0
#define T15_TCHTHR                      0
#define T15_TCHDI                       0
#define T15_RESERVED_0                  0
#define T15_RESERVED_1                  0

/*  [SPT_COMMSCONFIG_T18 INSTANCE 0]        */
#define T18_CTRL                        0
#define T18_COMMAND                     0

/* _SPT_GPIOPWM_T19 INSTANCE 0 */
#define T19_CTRL                        0
#define T19_REPORTMASK                  0
#define T19_DIR                         0
#define T19_INTPULLUP                   0
#define T19_OUT                         0
#define T19_WAKE                        0
#define T19_PWM                         0
#define T19_PERIOD                      0
#define T19_DUTY_0                      0
#define T19_DUTY_1                      0
#define T19_DUTY_2                      0
#define T19_DUTY_3                      0
#define T19_TRIGGER_0                   0
#define T19_TRIGGER_1                   0
#define T19_TRIGGER_2                   0
#define T19_TRIGGER_3                   0

/* [TOUCH_PROXIMITY_T23 INSTANCE 0] */
#define T23_CTRL                        0
#define T23_XORIGIN               	0
#define T23_YORIGIN               	0
#define T23_XSIZE                 	0
#define T23_YSIZE                 	0
#define T23_RESERVED              	0
#define T23_BLEN                  	0
#define T23_FXDDTHR               	0
#define T23_FXDDI                 	0
#define T23_AVERAGE               	0
#define T23_MVNULLRATE            	0
#define T23_MVDTHR                	0
/* [SPT_SELFTEST_T25 INSTANCE 0] */
#define T25_CTRL                        0
#define T25_CMD                         0
#define T25_SIGLIM_0_UPSIGLIM        	0
#define T25_SIGLIM_0_LOSIGLIM        	0
#define T25_SIGLIM_1_UPSIGLIM        	0
#define T25_SIGLIM_1_LOSIGLIM        	0
#define T25_SIGLIM_2_UPSIGLIM        	0
#define T25_SIGLIM_2_LOSIGLIM        	0

/* SPT_USERDATA_T38 INSTANCE 0 */
#define T38_USERDATA0           	0
#define T38_USERDATA1           	0 /* CAL_THR */
#define T38_USERDATA2           	0 /* num_of_antitouch */
#define T38_USERDATA3           	0 /* max touch for palm recovery  */
#define T38_USERDATA4           	0 /* MXT_ADR_T8_ATCHFRCCALRATIO for normal */
#define T38_USERDATA5           	0     
#define T38_USERDATA6           	0 
#define T38_USERDATA7           	0 /* max touch for check_auto_cal */

#define T40_CTRL                	0
#define T40_XLOGRIP             	0
#define T40_XHIGRIP             	0
#define T40_YLOGRIP             	0
#define T40_YHIGRIP					0

/* PROCI_TOUCHSUPPRESSION_T42 */

#define T42_CTRL                	0
#define T42_APPRTHR             	0   /* 0 (TCHTHR/4), 1 to 255 */
#define T42_MAXAPPRAREA         	0   /* 0 (40ch), 1 to 255 */
#define T42_MAXTCHAREA          	0   /* 0 (35ch), 1 to 255 */
#define T42_SUPSTRENGTH         	0   /* 0 (128), 1 to 255 */
#define T42_SUPEXTTO            	0  /* 0 (never expires), 1 to 255 (timeout in cycles) */
#define T42_MAXNUMTCHS          	0  /* 0 to 9 (maximum number of touches minus 1) */
#define T42_SHAPESTRENGTH       	0  /* 0 (10), 1 to 31 */

/* SPT_CTECONFIG_T46  */
#define T46_CTRL                	4//0     /*Reserved */
#define T46_MODE                	3 /*3*/     /*0: 16X14Y, 1: 17X13Y, 2: 18X12Y, 3: 19X11Y, 4: 20X10Y, 5: 21X15Y, 6: 22X8Y, */
#define T46_IDLESYNCSPERX       	16//16/*40*/
#define T46_ACTVSYNCSPERX       	24//48/*40*/
#define T46_ADCSPERSYNC         	0 
#define T46_PULSESPERADC        	0     /*0:1  1:2   2:3   3:4 pulses */
#define T46_XSLEW               	1/*0*/     /*0:500nsec,  1:350nsec */
#define T46_SYNCDELAY           	0 

/* PROCI_STYLUS_T47 */              
#define T47_CTRL                	0
#define T47_CONTMIN             	0
#define T47_CONTMAX             	0
#define T47_STABILITY           	0
#define T47_MAXTCHAREA          	0
#define T47_AMPLTHR             	0
#define T47_STYSHAPE            	0
#define T47_HOVERSUP            	0
#define T47_CONFTHR             	0
#define T47_SYNCSPERX           	0

/* PROCG_NOISESUPPRESSION_T48  */
#define T48_CTRL                	1  
#define T48_CFG                 	132 
#define T48_CALCFG              	96
#define T48_CALCFG_PLUG             	112
#define T48_BASEFREQ            	0  
#define T48_RESERVED0           	0  
#define T48_RESERVED1           	0  
#define T48_RESERVED2           	0  
#define T48_RESERVED3           	0  
#define T48_MFFREQ_2            	10 
#define T48_MFFREQ_3            	20  
#define T48_RESERVED4           	0  
#define T48_RESERVED5           	0  
#define T48_RESERVED6           	0  
#define T48_GCACTVINVLDADCS     	6  
#define T48_GCIDLEINVLDADCS     	6  
#define T48_RESERVED7           	0  
#define T48_RESERVED8           	0  
#define T48_GCMAXADCSPERX       	100
#define T48_GCLIMITMIN          	6//4  
#define T48_GCLIMITMAX          	64 
#define T48_GCCOUNTMINTGT       	10 
#define T48_MFINVLDDIFFTHR      	32//0 
#define T48_MFINCADCSPXTHR      	5  
#define T48_MFERRORTHR          	38 
#define T48_SELFREQMAX          	8//20 
#define T48_RESERVED9           	0  
#define T48_RESERVED10          	0  
#define T48_RESERVED11          	0  
#define T48_RESERVED12          	0  
#define T48_RESERVED13          	0  
#define T48_RESERVED14          	0  
#define T48_BLEN                	0  
#define T48_TCHTHR              	60
#define T48_TCHDI               	3  
#define T48_MOVHYSTI            	10  
#define T48_MOVHYSTN            	2  
#define T48_MOVFILTER           	16 
#define T48_NUMTOUCH            	5  
#define T48_MRGHYST             	20 
#define T48_MRGTHR              	25
#define T48_XLOCLIP             	0
#define T48_XHICLIP             	0 
#define T48_YLOCLIP             	0 
#define T48_YHICLIP             	0 
#define T48_XEDGECTRL           	148
#define T48_XEDGEDIST           	55
#define T48_YEDGECTRL           	0
#define T48_YEDGEDIST           	0
#define T48_JUMPLIMIT           	13
#define T48_TCHHYST             	15
#define T48_NEXTTCHDI           	0


void TSP_Restart(void);		
int init_hw_setting(void)
{
	int rc; 
	unsigned gpioConfig;

#if defined (CONFIG_MACH_MSM8960_EF45K) || defined (CONFIG_MACH_MSM8960_EF46L) || defined (CONFIG_MACH_MSM8960_EF47S)
#if (BOARD_VER < WS20)
    struct regulator *vreg_touch_LVS4; // 1.8V
#if (BOARD_VER == PT10)
    struct regulator *vreg_touch_L9;     // 2.85V
#endif
#endif
#elif defined (CONFIG_MACH_MSM8960_CHEETAH)
#if (BOARD_VER <= WS12)    
    struct regulator *vreg_touch_LVS4; // mirinae_tm
    struct regulator *vreg_touch_1_8;
    struct regulator *vreg_touch_3_3;
#endif    
#elif defined (CONFIG_MACH_MSM8960_STARQ)
    struct regulator *vreg_touch_LVS4; // 1.8V
    struct regulator *vreg_touch_L17; // 3.3V
#elif defined (CONFIG_MACH_MSM8960_RACERJ)
	struct regulator *vreg_touch_L16_3P3;	// 3.3V
    struct regulator *vreg_touch_LVS4_1P8;	// 1.8V
#endif


       // Init 1.8V regulator  
#if defined (CONFIG_MACH_MSM8960_EF45K) || defined (CONFIG_MACH_MSM8960_EF46L) || defined (CONFIG_MACH_MSM8960_EF47S) || defined (CONFIG_MACH_MSM8960_STARQ) 
	vreg_touch_LVS4 = regulator_get(NULL, "8921_lvs4");
	if(vreg_touch_LVS4 == NULL)
		printk(KERN_ERR "%s: vreg_touch_LVS4  \n", __func__);

	rc = regulator_enable(vreg_touch_LVS4);
	if (rc) {
		printk(KERN_ERR "%s: vreg_LVS4 enable failed (%d)\n", __func__, rc);
		return 0;
	}
#endif

#if defined (CONFIG_MACH_MSM8960_CHEETAH) && (BOARD_VER <= WS12) //mirinae_ws13
	vreg_touch_LVS4 = regulator_get(NULL, "8921_lvs4");
	if(vreg_touch_LVS4 == NULL)
		printk(KERN_ERR "%s: vreg_touch_LVS4  \n", __func__);

	rc = regulator_enable(vreg_touch_LVS4);
	if (rc) {
		printk(KERN_ERR "%s: vreg_LVS4 enable failed (%d)\n", __func__, rc);
		return 0;
	}
#endif
	// Init 2.85V regulator
#if ((defined (CONFIG_MACH_MSM8960_EF45K) ||defined (CONFIG_MACH_MSM8960_EF46L) || defined (CONFIG_MACH_MSM8960_EF47S)) &&  (BOARD_VER == PT10))	
       vreg_touch_L9 = regulator_get(NULL, "8921_l9");

	if (IS_ERR(vreg_touch_L9)) {
		rc = PTR_ERR(vreg_touch_L9);
		printk(KERN_ERR "[QT602240]%s: regulator get of %s failed (%d)\n",
				__func__, "vreg_touch_1_8", rc);
	}

	rc = regulator_set_voltage(vreg_touch_L9, 2850000, 2850000);
	if (rc) {
		printk(KERN_ERR "[QT602240]%s: vreg set level failed (%d)\n", __func__, rc);
		return 1;
	}
	rc = regulator_enable(vreg_touch_L9);
	printk("[QT602240]8921_l9 regulator_enable return:  %d \n", rc);
	regulator_put(vreg_touch_L9);
#endif

	// Init 3.3V regulator
#if (defined (CONFIG_MACH_MSM8960_CHEETAH) && (BOARD_VER <= WS12)) //mirinae_ws13 
       #if (BOARD_VER == WS10)	// mirinae_p11223
        vreg_touch_3_3 = regulator_get(NULL, "8921_l15"); 
       #else 	
	 vreg_touch_3_3 = regulator_get(NULL, "8921_l17"); 
       #endif
 
	if (IS_ERR(vreg_touch_3_3)) {
		rc = PTR_ERR(vreg_touch_3_3);
		printk(KERN_ERR "[QT602240]%s: regulator get of %s failed (%d)\n",
				__func__, "vreg_touch_power", rc);
	}

	rc = regulator_set_voltage(vreg_touch_3_3, 3300000, 3300000);

	if (rc) {
		printk(KERN_ERR "[QT602240]%s: vreg set level failed (%d)\n", __func__, rc);
		return 1;
	}
	rc = regulator_enable(vreg_touch_3_3);
	printk("[QT602240]Touch Power regulator_enable return:  %d \n", rc);
	regulator_put(vreg_touch_3_3);

	// Init 1.8V regulator
       vreg_touch_1_8 = regulator_get(NULL, "8921_l29");

	if (IS_ERR(vreg_touch_1_8)) {
		rc = PTR_ERR(vreg_touch_1_8);
		printk(KERN_ERR "[QT602240]%s: regulator get of %s failed (%d)\n",
				__func__, "vreg_touch_1_8", rc);
	}

	rc = regulator_set_voltage(vreg_touch_1_8, 1800000, 1800000);
	if (rc) {
		printk(KERN_ERR "[QT602240]%s: vreg set level failed (%d)\n", __func__, rc);
		return 1;
	}
	rc = regulator_enable(vreg_touch_1_8);
	printk("[QT602240]8921_l9 regulator_enable return:  %d \n", rc);
	regulator_put(vreg_touch_1_8);
#endif

      // Init 3.3V regulator
#if defined (CONFIG_MACH_MSM8960_STARQ)
	vreg_touch_L17 = regulator_get(NULL, "8921_l17");
	if(vreg_touch_L17 == NULL)
		printk(KERN_ERR "%s: vreg_touch_L17  \n", __func__);

	rc = regulator_set_voltage(vreg_touch_L17, 3300000, 3300000);
	if (rc) {
		printk(KERN_ERR "[QT602240]%s: vreg set level failed (%d)\n", __func__, rc);
		return 1;
	}
	rc = regulator_enable(vreg_touch_L17);
	printk("[QT602240]8921_l17 regulator_enable return:  %d \n", rc);
	regulator_put(vreg_touch_L17);
#endif

// EF45K/46L/47S INPUT POWER
#if (defined (CONFIG_MACH_MSM8960_EF45K) ||defined (CONFIG_MACH_MSM8960_EF46L) || defined (CONFIG_MACH_MSM8960_EF47S)) && (BOARD_VER >= WS10)
	gpio_request(GPIO_TOUCH_POWER, "touch_power_n");
	gpioConfig = GPIO_CFG(GPIO_TOUCH_POWER, 0, GPIO_CFG_OUTPUT, GPIO_CFG_PULL_UP, GPIO_CFG_2MA);
	rc = gpio_tlmm_config(gpioConfig, GPIO_CFG_ENABLE);
	if (rc) {
		printk(KERN_ERR "%s: GPIO_TOUCH_RST failed (%d)\n",__func__, rc);
		return -1;
	}
	gpio_set_value(GPIO_TOUCH_POWER, 1);
	printk("(skytouch)set GPIO_TOUCH_POWER Low.\n");
#endif 

#if (defined (CONFIG_MACH_MSM8960_OSCAR) ||(defined (CONFIG_MACH_MSM8960_CHEETAH) && (BOARD_VER > WS12))) //mirinae_ws13
	gpio_request(GPIO_TOUCH_POWER, "touch_power_n");
	gpioConfig = GPIO_CFG(GPIO_TOUCH_POWER, 0, GPIO_CFG_OUTPUT, GPIO_CFG_PULL_UP, GPIO_CFG_2MA);
	rc = gpio_tlmm_config(gpioConfig, GPIO_CFG_ENABLE);
	if (rc) {
		printk(KERN_ERR "%s: GPIO_TOUCH_RST failed (%d)\n",__func__, rc);
		return -1;
	}
	gpio_set_value(GPIO_TOUCH_POWER, 1);
	printk("(skytouch)set GPIO_TOUCH_POWER Low.\n");
#endif

#if defined (CONFIG_MACH_MSM8960_RACERJ)

	//	1.8 V
	vreg_touch_LVS4_1P8 = regulator_get(NULL, "8921_lvs4");
	if(vreg_touch_LVS4_1P8 == NULL)
		printk("%s: vreg_touch_LVS4  \n", __func__);

	rc = regulator_enable(vreg_touch_LVS4_1P8);
	if (rc) {
		printk("%s: vreg_touch_LVS4_1P8 enable failed (%d)\n", __func__, rc);
		return 0;
	}	

	//	3.3V
    vreg_touch_L16_3P3 = regulator_get(NULL, "8921_l16");
	if (IS_ERR(vreg_touch_L16_3P3)) {
		rc = PTR_ERR(vreg_touch_L16_3P3);
		printk("%s: regulator get of %s failed (%d)\n", __func__, "vreg_touch_L16_3P3", rc);
	}

	rc = regulator_set_voltage(vreg_touch_L16_3P3, 3300000, 3300000);
	if (rc) {
		printk("%s: vreg set level failed (%d)\n", __func__, rc);
		return 1;
	}
	rc = regulator_enable(vreg_touch_L16_3P3);
	if (rc) {
		printk("8921_l16 regulator_enable return:  %d \n", rc);
	}
	regulator_put(vreg_touch_L16_3P3);


#endif 


/*========================================================================*/
/*  T O U C H    C O N T R O L    P I N                                   */
/*    Touch Reset, Touch change											  */	 
/*========================================================================*/

       // GPIO Config: reset pin
#if defined (CONFIG_MACH_MSM8960_EF45K) ||defined (CONFIG_MACH_MSM8960_EF46L) || defined (CONFIG_MACH_MSM8960_EF47S)
	gpio_request(GPIO_TOUCH_RST, "touch_rst_n");
	gpioConfig = GPIO_CFG(GPIO_TOUCH_RST, 0, GPIO_CFG_OUTPUT, GPIO_CFG_PULL_UP, GPIO_CFG_2MA);
	rc = gpio_tlmm_config(gpioConfig, GPIO_CFG_ENABLE);
	if (rc) {
		printk(KERN_ERR "%s: GPIO_TOUCH_RST failed (%d)\n",__func__, rc);
		return -1;
	}      
#elif defined (CONFIG_MACH_MSM8960_RACERJ)
	gpio_request(GPIO_TOUCH_RST, "touch_rst_n");
	gpioConfig = GPIO_CFG(GPIO_TOUCH_RST, 0, GPIO_CFG_OUTPUT, GPIO_CFG_PULL_UP, GPIO_CFG_2MA);
	rc = gpio_tlmm_config(gpioConfig, GPIO_CFG_ENABLE);
	if (rc) {
		printk(KERN_ERR "%s: GPIO_TOUCH_RST failed (%d)\n",__func__, rc);
		return -1;
	}      

#endif

#if defined  (CONFIG_MACH_MSM8960_STARQ)
	gpio_request(GPIO_TOUCH_RST, "touch_rst_n");
	gpioConfig = GPIO_CFG(GPIO_TOUCH_RST, 0, GPIO_CFG_OUTPUT, GPIO_CFG_PULL_UP, GPIO_CFG_2MA);
	rc = gpio_tlmm_config(gpioConfig, GPIO_CFG_ENABLE);
	if (rc) {
		printk(KERN_ERR "%s: GPIO_TOUCH_RST failed (%d)\n",__func__, rc);
		return -1;
	}      
#endif

       // GPIO Config: interrupt pin
	gpio_request(GPIO_TOUCH_CHG, "touch_chg_int");
	gpioConfig = GPIO_CFG(GPIO_TOUCH_CHG, 0, GPIO_CFG_INPUT, GPIO_CFG_PULL_UP, GPIO_CFG_2MA);
	rc = gpio_tlmm_config(gpioConfig, GPIO_CFG_ENABLE);
	if (rc) {
		printk(KERN_ERR "%s: GPIO_TOUCH_CHG failed (%d)\n",__func__, rc);
		return -1;
	}        
         
	TSP_Restart();
	msleep(100);

	return 0;
	
}

void off_hw_setting(void)
{
	
#if defined (CONFIG_MACH_MSM8960_EF45K) ||defined (CONFIG_MACH_MSM8960_EF46L) || defined (CONFIG_MACH_MSM8960_EF47S)
	int rc; 
       struct regulator *vreg_touch_LVS4; // 1.8V
#if (BOARD_VER == PT10)
       struct regulator *vreg_touch_L9;     // 2.85V
#endif
#elif defined (CONFIG_MACH_MSM8960_CHEETAH)
#if (BOARD_VER <= WS12)    
	int rc; 
	struct regulator *vreg_touch_3_3;
	struct regulator *vreg_touch_1_8;
#endif
#elif defined (CONFIG_MACH_MSM8960_STARQ)
	int rc;
	struct regulator *vreg_touch_LVS4; // 1.8V
	struct regulator *vreg_touch_L17; // 3.3V
#elif defined (CONFIG_MACH_MSM8960_RACERJ)
	int rc; 
	struct regulator *vreg_touch_LVS4_1P8;	// 1.8V
	struct regulator *vreg_touch_L29_3P3;	// 3.3V
#endif

	
	// disable 2.85V  
#if (defined (CONFIG_MACH_MSM8960_EF45K) ||defined (CONFIG_MACH_MSM8960_EF46L) || defined (CONFIG_MACH_MSM8960_EF47S)) &&  (BOARD_VER == PT10)
	vreg_touch_L9 = regulator_get(NULL, "8921_l9");

	if (IS_ERR(vreg_touch_L9)) {
		rc = PTR_ERR(vreg_touch_L9);
		printk(KERN_ERR "[QT602240]%s: regulator get of %s failed (%d)\n",
				__func__, "vreg_touch_power", rc);
	}

	rc = regulator_disable(vreg_touch_L9);
	printk("[QT602240]Touch Power regulator_disable return:  %d \n", rc);
	regulator_put(vreg_touch_L9);
#endif

      // disable 1.8V
#if defined (CONFIG_MACH_MSM8960_EF45K) ||defined (CONFIG_MACH_MSM8960_EF46L) || defined (CONFIG_MACH_MSM8960_EF47S) || defined (CONFIG_MACH_MSM8960_STARQ)	
	vreg_touch_LVS4 = regulator_get(NULL, "8921_lvs4");

	if (IS_ERR(vreg_touch_LVS4)) {
		rc = PTR_ERR(vreg_touch_LVS4);
		printk(KERN_ERR "[QT602240]%s: regulator get of %s failed (%d)\n",
				__func__, "vreg_touch_1_8", rc);
	}

	rc = regulator_disable(vreg_touch_LVS4);
	printk("[QT602240]8921_l9 regulator_disable return:  %d \n", rc);
	regulator_put(vreg_touch_LVS4);
#endif

	// Init 3.3V regulator
#if (defined (CONFIG_MACH_MSM8960_CHEETAH) && (BOARD_VER <= WS12)) //mirinae_ws13
       #if (BOARD_VER == WS10)		// mirinae_p11223
        vreg_touch_3_3 = regulator_get(NULL, "8921_l15"); 	   
       #else 	
	 vreg_touch_3_3 = regulator_get(NULL, "8921_l17"); 
       #endif
	   
	if (IS_ERR(vreg_touch_3_3)) {
		rc = PTR_ERR(vreg_touch_3_3);
		printk(KERN_ERR "[QT602240]%s: regulator get of %s failed (%d)\n",
				__func__, "vreg_touch_power", rc);
	}

	rc = regulator_disable(vreg_touch_3_3);
	printk("[QT602240]Touch Power regulator_disable return:  %d \n", rc);
	regulator_put(vreg_touch_3_3);

	// Init 1.8V regulator
	vreg_touch_1_8 = regulator_get(NULL, "8921_l29");

	if (IS_ERR(vreg_touch_1_8)) {
		rc = PTR_ERR(vreg_touch_1_8);
		printk(KERN_ERR "[QT602240]%s: regulator get of %s failed (%d)\n",
				__func__, "vreg_touch_1_8", rc);
	}

	rc = regulator_disable(vreg_touch_1_8);
	printk("[QT602240]8921_l9 regulator_disable return:  %d \n", rc);
	regulator_put(vreg_touch_1_8);
#endif

 	// Init 3.3V regulator
#if defined (CONFIG_MACH_MSM8960_STARQ)
	vreg_touch_L17 = regulator_get(NULL, "8921_l17");
	if (IS_ERR(vreg_touch_L17)) {
		rc = PTR_ERR(vreg_touch_L17);
		printk(KERN_ERR "[QT602240]%s: regulator get of %s failed (%d)\n",
				__func__, "vreg_touch_l17", rc);
	}

	rc = regulator_disable(vreg_touch_L17);
	printk("[QT602240]8921_l17 regulator_disable return:  %d \n", rc);
	regulator_put(vreg_touch_L17);
#endif

#if (defined (CONFIG_MACH_MSM8960_EF45K) ||defined (CONFIG_MACH_MSM8960_EF46L) || defined (CONFIG_MACH_MSM8960_EF47S)) && (BOARD_VER >= WS10)
  gpio_set_value(GPIO_TOUCH_POWER, 0);
	printk("(skytouch)set GPIO_TOUCH_POWER High.\n");
	msleep(10);
#endif

#if (defined (CONFIG_MACH_MSM8960_OSCAR) || (defined (CONFIG_MACH_MSM8960_CHEETAH) && (BOARD_VER > WS12))) //mirinae_ws13
  gpio_set_value(GPIO_TOUCH_POWER, 0);
	printk("(touch)set GPIO_TOUCH_POWER High.\n");
	msleep(10);
#endif


#if defined (CONFIG_MACH_MSM8960_RACERJ)	
	// 1.8V
	vreg_touch_LVS4_1P8 = regulator_get(NULL, "8921_lvs4");
	if (IS_ERR(vreg_touch_LVS4_1P8)) {
		rc = PTR_ERR(vreg_touch_LVS4_1P8);
		printk("%s: regulator get of %s failed (%d)\n", __func__, "vreg_touch_LVS4_1P8", rc);
	}

	rc = regulator_disable(vreg_touch_LVS4_1P8);
	printk("8921_lvs4 regulator_disable return:  %d \n", rc);
	regulator_put(vreg_touch_LVS4_1P8);

	// 3.3V
	vreg_touch_L29_3P3 = regulator_get(NULL, "8921_l29");
	if (IS_ERR(vreg_touch_L29_3P3)) {
		rc = PTR_ERR(vreg_touch_L29_3P3);
		printk("%s: regulator get of %s failed (%d)\n", __func__, "vreg_touch_L29_3P3", rc);
	}

	rc = regulator_disable(vreg_touch_L29_3P3);
	printk("8921_l29 regulator_disable return:  %d \n", rc);
	regulator_put(vreg_touch_L29_3P3);
#endif 
	gpio_free(GPIO_TOUCH_CHG);
	msleep(100);

}






