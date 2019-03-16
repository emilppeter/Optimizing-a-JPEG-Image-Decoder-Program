// Automatically generated file. Do not edit if you plan to regenerate it.
#include "region.h"
const REGION_T RegionTable[] = {
	{0x00001c15, 0x00001c3e, "copyY"}, // 0
	{0x00001c51, 0x00002c52, "decodeNextMCU"}, // 1
	{0x00002c81, 0x00002cf8, "getBits"}, // 2
	{0x00002cfd, 0x00002d4c, "getChar"}, // 3
	{0x00002d59, 0x00002d92, "getOctet"}, // 4
	{0x00002d9d, 0x00002e46, "huffDecode"}, // 5
	{0x0000376d, 0x00003a42, "processMarkers"}, // 6
	{0x00003a79, 0x00003bba, "upsampleCb"}, // 7
	{0x00003bc9, 0x00003c8a, "upsampleCbH"}, // 8
	{0x00003c99, 0x00003d5c, "upsampleCbV"}, // 9
	{0x00003d69, 0x00003eaa, "upsampleCr"}, // 10
	{0x00003eb9, 0x00003f7a, "upsampleCrH"}, // 11
	{0x00003f89, 0x0000404c, "upsampleCrV"}, // 12
	{0x000001c9, 0x000001d4, "Reset_Handler"}, // 13
	{0x000001d5, 0x000001d6, "NMI_Handler"}, // 14
	{0x000001d7, 0x000001d8, "HardFault_Handler"}, // 15
	{0x000001d9, 0x000001da, "SVC_Handler"}, // 16
	{0x000001db, 0x000001dc, "PendSV_Handler"}, // 17
	{0x000001dd, 0x000001de, "SysTick_Handler"}, // 18
	{0x0000020d, 0x0000026e, "malloc"}, // 19
	{0x0000026f, 0x000002ba, "free"}, // 20
	{0x000003f5, 0x000003fc, "ferror"}, // 21
	{0x00000aaf, 0x00000abe, "exit"}, // 22
	{0x00000b69, 0x00000b9c, "Control_RGB_LEDs"}, // 23
	{0x00000ba5, 0x00000bb8, "Delay"}, // 24
	{0x00000bbd, 0x00000bc4, "Disable_Profiling"}, // 25
	{0x00000bc9, 0x00000c7a, "Display_Profile"}, // 26
	{0x00000cb5, 0x00000cbc, "Enable_Profiling"}, // 27
	{0x00000cc1, 0x00000d0e, "Init_Profiling"}, // 28
	{0x00000d21, 0x00000d72, "Init_RGB_LEDs"}, // 29
	{0x00000d89, 0x00000d92, "LCD_Erase"}, // 30
	{0x00000d99, 0x00000e78, "LCD_Fill_Buffer"}, // 31
	{0x00000e7d, 0x00000fa2, "LCD_GPIO_Init"}, // 32
	{0x00000fb9, 0x0000106c, "LCD_Init"}, // 33
	{0x00001089, 0x000010aa, "LCD_JPEG"}, // 34
	{0x000010b5, 0x0000118c, "LCD_Plot_Pixel"}, // 35
	{0x00001191, 0x00001290, "LCD_Start_Rectangle"}, // 36
	{0x00001295, 0x000012c4, "LCD_TS_Blocking_Read"}, // 37
	{0x000012c5, 0x000012dc, "LCD_TS_Init"}, // 38
	{0x000012e5, 0x00001468, "LCD_TS_Read"}, // 39
	{0x00001481, 0x000014aa, "LCD_Text_Init"}, // 40
	{0x000014bd, 0x00001658, "LCD_Text_PrintChar"}, // 41
	{0x00001665, 0x000016aa, "LCD_Text_PrintStr"}, // 42
	{0x000016b1, 0x000016ce, "LCD_Text_Set_Colors"}, // 43
	{0x000016d9, 0x00001722, "LCD_Write_Rectangle_Pixe"}, // 44
	{0x00001729, 0x000017de, "LCD_Write_Rectangle_Pixe"}, // 45
	{0x0000189d, 0x000018f8, "PWM_Init"}, // 46
	{0x00001909, 0x00001966, "Process_Profile_Sample"}, // 47
	{0x00001a01, 0x00001a98, "Sort_Profile_Regions"}, // 48
	{0x00001aa9, 0x00001b60, "SystemInit"}, // 49
	{0x00001b91, 0x00001b9c, "TPM0_IRQHandler"}, // 50
	{0x00001ba1, 0x00001bf8, "UART0_IRQHandler"}, // 51
	{0x00002c69, 0x00002c7a, "fputc"}, // 52
	{0x00002e51, 0x00002eb6, "main"}, // 53
	{0x00002ed9, 0x000033aa, "pjpeg_decode_init"}, // 54
	{0x000033c5, 0x000033f8, "pjpeg_decode_mcu"}, // 55
	{0x000033fd, 0x000036b0, "pjpeg_load_from_memory"}, // 56
	{0x00003741, 0x00003768, "pjpeg_need_bytes_callbac"}, // 57
}; 
const unsigned NumProfileRegions=58;
volatile unsigned RegionCount[58];
unsigned SortedRegions[58];
