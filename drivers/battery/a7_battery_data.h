#define CAPACITY_MAX			1000
#define CAPACITY_MAX_MARGIN     70
#define CAPACITY_MIN			0

#if defined(CONFIG_MACH_A7_CHN_CTC)
static sec_bat_adc_table_data_t temp_table[] = {
	{26975, 700},
	{27351, 650},
	{27695, 610},
	{27835, 600},
	{27935, 590},
	{28402, 550},
	{29025, 500},
	{29386, 470},
	{29546, 460},
	{29702, 450},
	{30567, 400},
	{31457, 350},
	{32432, 300},
	{33470, 250},
	{34540, 200},
	{35640, 150},
	{36700, 100},
	{37740, 50},
	{38438, 10},
	{38560, 0},
	{38753, -10},
	{39460, -50},
	{40175, -100},
	{41335, -200},
};

#define TEMP_HIGH_THRESHOLD_EVENT  600
#define TEMP_HIGH_RECOVERY_EVENT   460
#define TEMP_LOW_THRESHOLD_EVENT   (-50)
#define TEMP_LOW_RECOVERY_EVENT    0
#define TEMP_HIGH_THRESHOLD_NORMAL 600
#define TEMP_HIGH_RECOVERY_NORMAL  460
#define TEMP_LOW_THRESHOLD_NORMAL  (-50)
#define TEMP_LOW_RECOVERY_NORMAL   0
#define TEMP_HIGH_THRESHOLD_LPM    600
#define TEMP_HIGH_RECOVERY_LPM     460
#define TEMP_LOW_THRESHOLD_LPM     (-50)
#define TEMP_LOW_RECOVERY_LPM      0

#else
static sec_bat_adc_table_data_t temp_table[] = {
	{27023, 700},
	{27926, 600},
	{29146, 500},
	{29889, 450},
	{30728, 400},
	{32642, 300},
	{34816, 200},
	{36982, 100},
	{38913, 0},
	{39725, -50},
	{40394, -100},
	{41462, -200},
};

#if defined(CONFIG_MACH_A7_EUR_OPEN)
#define TEMP_HIGH_THRESHOLD_EVENT  580
#define TEMP_HIGH_RECOVERY_EVENT   530
#define TEMP_LOW_THRESHOLD_EVENT   (-50)
#define TEMP_LOW_RECOVERY_EVENT    0
#define TEMP_HIGH_THRESHOLD_NORMAL 580
#define TEMP_HIGH_RECOVERY_NORMAL  530
#define TEMP_LOW_THRESHOLD_NORMAL  (-50)
#define TEMP_LOW_RECOVERY_NORMAL   0
#define TEMP_HIGH_THRESHOLD_LPM    580
#define TEMP_HIGH_RECOVERY_LPM     530
#define TEMP_LOW_THRESHOLD_LPM     (-50)
#define TEMP_LOW_RECOVERY_LPM      20
#else
#define TEMP_HIGH_THRESHOLD_EVENT  600
#define TEMP_HIGH_RECOVERY_EVENT   480
#define TEMP_LOW_THRESHOLD_EVENT   (-50)
#define TEMP_LOW_RECOVERY_EVENT    0
#define TEMP_HIGH_THRESHOLD_NORMAL 600
#define TEMP_HIGH_RECOVERY_NORMAL  480
#define TEMP_LOW_THRESHOLD_NORMAL  (-50)
#define TEMP_LOW_RECOVERY_NORMAL   0
#define TEMP_HIGH_THRESHOLD_LPM    600
#define TEMP_HIGH_RECOVERY_LPM     500
#define TEMP_LOW_THRESHOLD_LPM     (-50)
#define TEMP_LOW_RECOVERY_LPM      20
#endif
#endif

#if defined(CONFIG_BATTERY_SWELLING)
#if defined(CONFIG_MACH_A7_EUR_OPEN)
#define BATT_SWELLING_HIGH_TEMP_BLOCK		500
#define BATT_SWELLING_HIGH_TEMP_RECOV		450
#define BATT_SWELLING_LOW_TEMP_BLOCK		50
#define BATT_SWELLING_LOW_TEMP_RECOV		100
#define BATT_SWELLING_RECHG_VOLTAGE		4150
#define BATT_SWELLING_BLOCK_TIME	10 * 60 /* 10 min */
#else
#define BATT_SWELLING_HIGH_TEMP_BLOCK		500
#define BATT_SWELLING_HIGH_TEMP_RECOV		450
#define BATT_SWELLING_LOW_TEMP_BLOCK		100
#define BATT_SWELLING_LOW_TEMP_RECOV		150
#define BATT_SWELLING_RECHG_VOLTAGE		4150
#define BATT_SWELLING_BLOCK_TIME	10 * 60 /* 10 min */
#endif
#endif

#if defined(CONFIG_MACH_KOR_EARJACK_WR)
#define EARJACK_WR_SYSTEM_REV			0x08
#define EARJACK_WR_SOC_1ST				80
#define EARJACK_WR_SOC_2ND				90
#define EARJACK_WR_INPUT_CURRENT_1ST	700
#define EARJACK_WR_INPUT_CURRENT_2ND	500
#endif
