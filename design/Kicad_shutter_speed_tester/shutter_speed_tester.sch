EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Mechanical:MountingHole H1
U 1 1 619ED1CD
P 4000 1450
F 0 "H1" H 4100 1496 50  0000 L CNN
F 1 "MountingHole" H 4100 1405 50  0000 L CNN
F 2 "MountingHole:MountingHole_2.5mm" H 4000 1450 50  0001 C CNN
F 3 "~" H 4000 1450 50  0001 C CNN
	1    4000 1450
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H3
U 1 1 619ED74D
P 4000 1100
F 0 "H3" H 4100 1146 50  0000 L CNN
F 1 "MountingHole" H 4100 1055 50  0000 L CNN
F 2 "MountingHole:MountingHole_2.5mm" H 4000 1100 50  0001 C CNN
F 3 "~" H 4000 1100 50  0001 C CNN
	1    4000 1100
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H4
U 1 1 619EFEE5
P 4000 800
F 0 "H4" H 4100 846 50  0000 L CNN
F 1 "MountingHole" H 4100 755 50  0000 L CNN
F 2 "MountingHole:MountingHole_2.5mm" H 4000 800 50  0001 C CNN
F 3 "~" H 4000 800 50  0001 C CNN
	1    4000 800 
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H2
U 1 1 619F0357
P 4000 1700
F 0 "H2" H 4100 1746 50  0000 L CNN
F 1 "MountingHole" H 4100 1655 50  0000 L CNN
F 2 "MountingHole:MountingHole_2.5mm" H 4000 1700 50  0001 C CNN
F 3 "~" H 4000 1700 50  0001 C CNN
	1    4000 1700
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x02 J4
U 1 1 619F5383
P 8000 4050
F 0 "J4" H 8080 4042 50  0000 L CNN
F 1 "Power" H 8080 3951 50  0000 L CNN
F 2 "Connector_Molex:Molex_KK-254_AE-6410-02A_1x02_P2.54mm_Vertical" H 8000 4050 50  0001 C CNN
F 3 "~" H 8000 4050 50  0001 C CNN
	1    8000 4050
	1    0    0    1   
$EndComp
$Comp
L MCU_Module:Arduino_Nano_v3.x A1
U 1 1 619FB530
P 5650 3400
F 0 "A1" H 5650 2311 50  0000 C CNN
F 1 "Arduino_Nano_v3.x" H 5650 2220 50  0000 C CNN
F 2 "Module:Arduino_Nano" H 5650 3400 50  0001 C CIN
F 3 "http://www.mouser.com/pdfdocs/Gravitech_Arduino_Nano3_0.pdf" H 5650 3400 50  0001 C CNN
	1    5650 3400
	1    0    0    -1  
$EndComp
Wire Wire Line
	5550 1650 5550 2400
Wire Wire Line
	5750 5150 5750 4400
Wire Wire Line
	5750 5150 6650 5150
Wire Wire Line
	5650 4400 5650 5150
Wire Wire Line
	5650 5150 5750 5150
Connection ~ 5750 5150
$Comp
L Device:R R1
U 1 1 619FF074
P 4600 4650
F 0 "R1" H 4670 4696 50  0000 L CNN
F 1 "1M" H 4670 4605 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P5.08mm_Horizontal" V 4530 4650 50  0001 C CNN
F 3 "~" H 4600 4650 50  0001 C CNN
	1    4600 4650
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x04 J3
U 1 1 61A01F58
P 7200 3450
F 0 "J3" H 7280 3442 50  0000 L CNN
F 1 "LCD" H 7280 3351 50  0000 L CNN
F 2 "Connector_Molex:Molex_KK-254_AE-6410-04A_1x04_P2.54mm_Vertical" H 7200 3450 50  0001 C CNN
F 3 "~" H 7200 3450 50  0001 C CNN
	1    7200 3450
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR01
U 1 1 61A04046
P 6650 5300
F 0 "#PWR01" H 6650 5050 50  0001 C CNN
F 1 "GND" H 6655 5127 50  0000 C CNN
F 2 "" H 6650 5300 50  0001 C CNN
F 3 "" H 6650 5300 50  0001 C CNN
	1    6650 5300
	1    0    0    -1  
$EndComp
Wire Wire Line
	6650 5300 6650 5150
Connection ~ 6650 5150
Wire Wire Line
	6650 5150 7550 5150
$Comp
L power:PWR_FLAG #FLG01
U 1 1 61A04791
P 6150 1550
F 0 "#FLG01" H 6150 1625 50  0001 C CNN
F 1 "PWR_FLAG" H 6150 1723 50  0000 C CNN
F 2 "" H 6150 1550 50  0001 C CNN
F 3 "~" H 6150 1550 50  0001 C CNN
	1    6150 1550
	1    0    0    -1  
$EndComp
Wire Wire Line
	6150 1550 6150 1650
Wire Wire Line
	6150 1650 5550 1650
Wire Wire Line
	5850 2400 5850 2100
Wire Wire Line
	5850 2100 6800 2100
Wire Wire Line
	6800 2100 6800 3450
Wire Wire Line
	6800 3450 7000 3450
Wire Wire Line
	7000 3350 7000 3100
Wire Wire Line
	7000 3100 7550 3100
Wire Wire Line
	7550 3100 7550 5150
Connection ~ 7550 5150
Wire Wire Line
	7550 5150 7800 5150
Wire Wire Line
	7000 3550 6600 3550
Wire Wire Line
	6600 3550 6600 3800
Wire Wire Line
	6600 3800 6150 3800
Wire Wire Line
	7000 3650 6700 3650
Wire Wire Line
	6700 3650 6700 3900
Wire Wire Line
	6700 3900 6150 3900
Wire Wire Line
	5150 3000 4600 3000
Wire Wire Line
	4600 3000 4600 4500
Wire Wire Line
	4600 4800 4600 5150
Wire Wire Line
	4600 5150 4900 5150
Connection ~ 5650 5150
Wire Wire Line
	5850 2100 4100 2100
Wire Wire Line
	4100 2100 4100 2950
Wire Wire Line
	4100 2950 3750 2950
Connection ~ 5850 2100
Wire Wire Line
	3750 2850 4600 2850
Wire Wire Line
	4600 2850 4600 3000
Connection ~ 4600 3000
$Comp
L Transistor_BJT:PN2222A Q1
U 1 1 61A08ADF
P 4000 4500
F 0 "Q1" H 4191 4546 50  0000 L CNN
F 1 "PN2222A" H 4191 4455 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 4200 4425 50  0001 L CIN
F 3 "https://www.onsemi.com/pub/Collateral/PN2222-D.PDF" H 4000 4500 50  0001 L CNN
	1    4000 4500
	-1   0    0    -1  
$EndComp
$Comp
L Device:R R4
U 1 1 61A0A5DF
P 4400 3700
F 0 "R4" H 4470 3746 50  0000 L CNN
F 1 "1k" H 4470 3655 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P5.08mm_Horizontal" V 4330 3700 50  0001 C CNN
F 3 "~" H 4400 3700 50  0001 C CNN
	1    4400 3700
	1    0    0    -1  
$EndComp
Wire Wire Line
	5150 3100 4400 3100
Wire Wire Line
	4400 3100 4400 3550
Wire Wire Line
	3900 4150 3900 4300
Connection ~ 4600 5150
Wire Wire Line
	4100 2950 4100 3500
Wire Wire Line
	4100 3500 3750 3500
Connection ~ 4100 2950
$Comp
L Device:R R2
U 1 1 61A0D8F9
P 3900 4000
F 0 "R2" H 3970 4046 50  0000 L CNN
F 1 "220" H 3970 3955 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P5.08mm_Horizontal" V 3830 4000 50  0001 C CNN
F 3 "~" H 3900 4000 50  0001 C CNN
	1    3900 4000
	1    0    0    -1  
$EndComp
Wire Wire Line
	3900 4700 3900 5150
Wire Wire Line
	4400 4500 4200 4500
Wire Wire Line
	4400 3850 4400 4500
Wire Wire Line
	3750 3400 3900 3400
Wire Wire Line
	3900 3400 3900 3850
$Comp
L Switch:SW_Push SW1
U 1 1 61A1341C
P 2750 2400
F 0 "SW1" V 2796 2352 50  0000 R CNN
F 1 "Reset switch" V 2705 2352 50  0000 R CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H5mm" H 2750 2600 50  0001 C CNN
F 3 "~" H 2750 2600 50  0001 C CNN
	1    2750 2400
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4100 2100 2750 2100
Wire Wire Line
	2750 2100 2750 2200
Connection ~ 4100 2100
Wire Wire Line
	5150 3200 2750 3200
Wire Wire Line
	2750 3200 2750 2600
$Comp
L Device:R R3
U 1 1 61A1C5D0
P 2750 3950
F 0 "R3" H 2820 3996 50  0000 L CNN
F 1 "10k" H 2820 3905 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P5.08mm_Horizontal" V 2680 3950 50  0001 C CNN
F 3 "~" H 2750 3950 50  0001 C CNN
	1    2750 3950
	1    0    0    -1  
$EndComp
Wire Wire Line
	2750 3200 2750 3800
Connection ~ 2750 3200
Wire Wire Line
	2750 4100 2750 5150
Wire Wire Line
	2750 5150 3900 5150
Connection ~ 3900 5150
Wire Wire Line
	3900 5150 4600 5150
$Comp
L Device:LED D1
U 1 1 61A1EC25
P 4900 4250
F 0 "D1" V 4939 4132 50  0000 R CNN
F 1 "Control LED" V 4848 4132 50  0000 R CNN
F 2 "LED_THT:LED_D3.0mm" H 4900 4250 50  0001 C CNN
F 3 "~" H 4900 4250 50  0001 C CNN
	1    4900 4250
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R5
U 1 1 61A22621
P 4900 4750
F 0 "R5" H 4970 4796 50  0000 L CNN
F 1 "1k" H 4970 4705 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P5.08mm_Horizontal" V 4830 4750 50  0001 C CNN
F 3 "~" H 4900 4750 50  0001 C CNN
	1    4900 4750
	1    0    0    -1  
$EndComp
Wire Wire Line
	5150 3300 4900 3300
Wire Wire Line
	4900 3300 4900 4100
Wire Wire Line
	4900 4400 4900 4600
Wire Wire Line
	4900 4900 4900 5150
Connection ~ 4900 5150
Wire Wire Line
	4900 5150 5650 5150
NoConn ~ 6150 2800
NoConn ~ 6150 2900
NoConn ~ 6150 3200
NoConn ~ 6150 3400
NoConn ~ 6150 3500
NoConn ~ 6150 3600
NoConn ~ 6150 3700
NoConn ~ 6150 4000
NoConn ~ 6150 4100
NoConn ~ 5150 4100
NoConn ~ 5150 4000
NoConn ~ 5150 3900
NoConn ~ 5150 3800
NoConn ~ 5150 3700
NoConn ~ 5150 3600
NoConn ~ 5150 3500
NoConn ~ 5150 3400
NoConn ~ 5150 2900
NoConn ~ 5150 2800
NoConn ~ 5750 2400
Connection ~ 6150 1650
Wire Wire Line
	7800 1650 7800 3950
Wire Wire Line
	7800 1650 6150 1650
$Comp
L power:PWR_FLAG #FLG0101
U 1 1 61A403BB
P 8900 4800
F 0 "#FLG0101" H 8900 4875 50  0001 C CNN
F 1 "PWR_FLAG" H 8900 4973 50  0000 C CNN
F 2 "" H 8900 4800 50  0001 C CNN
F 3 "~" H 8900 4800 50  0001 C CNN
	1    8900 4800
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0101
U 1 1 61A40916
P 8900 5000
F 0 "#PWR0101" H 8900 4750 50  0001 C CNN
F 1 "GND" H 8905 4827 50  0000 C CNN
F 2 "" H 8900 5000 50  0001 C CNN
F 3 "" H 8900 5000 50  0001 C CNN
	1    8900 5000
	1    0    0    -1  
$EndComp
Wire Wire Line
	8900 4800 8900 5000
$Comp
L Connector_Generic:Conn_01x02 J2
U 1 1 61A421B1
P 3550 3400
F 0 "J2" H 3468 3617 50  0000 C CNN
F 1 "Light source LED" H 3468 3526 50  0000 C CNN
F 2 "Connector_Molex:Molex_KK-254_AE-6410-02A_1x02_P2.54mm_Vertical" H 3550 3400 50  0001 C CNN
F 3 "~" H 3550 3400 50  0001 C CNN
	1    3550 3400
	-1   0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x02 J1
U 1 1 61A42B79
P 3550 2850
F 0 "J1" H 3468 3067 50  0000 C CNN
F 1 "Light Sensor" H 3468 2976 50  0000 C CNN
F 2 "Connector_Molex:Molex_KK-254_AE-6410-02A_1x02_P2.54mm_Vertical" H 3550 2850 50  0001 C CNN
F 3 "~" H 3550 2850 50  0001 C CNN
	1    3550 2850
	-1   0    0    -1  
$EndComp
Wire Wire Line
	7800 4050 7800 5150
$EndSCHEMATC