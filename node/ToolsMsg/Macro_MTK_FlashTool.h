
basePath = F:\6261D_11C_V33_AI
//basePath = F:\6261D_KM
toolPath = E:\desktop\M115_JGW_D2_X191_F2
	


/***********************************************************************/
/**************************** FlashTool  *******************************/
/***********************************************************************/


Save:SI\node\note\Macro_modis_MTK.h	 \[4.10\] U盘符





11CW1352MP

//文件系统--SDS或者backup partition区域
//		NVRAM_BACKUP_PARTITION_NO_NOR = ENABLE
//		SDS_SUPPORT= TRUE
projects\M115\M115_JGW_D2_X191_F2\M115_JGW_D2_X191_F2_GPRS.mak SDS_SUPPORT = TRUE
projects\M115\M115_JGW_D2_X191_F2\M115_JGW_D2_X191_F2_GPRS.mak NVRAM_BACKUP_PARTITION_ON_NOR = ENABLE



//内置mp3文件
projects\M115\M115_JGW_D2_X191_F2\Resource\custom_MemoryDevice.h NOR_BOOTING_NOR_FS_BASE_ADDRESS

//1000b000

//  0x003BD000
//  0x00043000
//  88 	//72 	//42

003BD000-40=3BCFC0 —> C0CF3B00
00043000+40=043040 —> 40300400







//cfg--fs
Tool:soft_zip_mp3\BLEPHONE61D_11C_BB.cfg main_region
//    - file: ROM
//    - file: VIVA
//+
    - file: FS




















