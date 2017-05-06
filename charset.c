/*
    ZEsarUX  ZX Second-Emulator And Released for UniX 
    Copyright (C) 2013 Cesar Hernandez Bano

    This file is part of ZEsarUX.

    ZEsarUX is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/


//Se puede obtener volcado con:
//hexdump -C archivo.bin |cut -d ' ' -f2-|cut -d '|' -f1|sed 's/  / /g'|cut -d ' ' -f2-|sed 's/ $/,/'|sed 's/ /,0x/g'|sed 's/^/0x/'



unsigned char char_set_spectrum[]={		0
	,	0
	,	0
	,	0
	,	0
	,	0
	,	0
	,	0
	,	0
	,	16
	,	16
	,	16
	,	16
	,	0
	,	16
	,	0
	,	0
	,	36
	,	36
	,	0
	,	0
	,	0
	,	0
	,	0
	,	0
	,	36
	,	126
	,	36
	,	36
	,	126
	,	36
	,	0
	,	0
	,	8
	,	62
	,	40
	,	62
	,	10
	,	62
	,	8
	,	0
	,	98
	,	100
	,	8
	,	16
	,	38
	,	70
	,	0
	,	0
	,	16
	,	40
	,	16
	,	42
	,	68
	,	58
	,	0
	,	0
	,	8
	,	16
	,	0
	,	0
	,	0
	,	0
	,	0
	,	0
	,	4
	,	8
	,	8
	,	8
	,	8
	,	4
	,	0
	,	0
	,	32
	,	16
	,	16
	,	16
	,	16
	,	32
	,	0
	,	0
	,	0
	,	20
	,	8
	,	62
	,	8
	,	20
	,	0
	,	0
	,	0
	,	8
	,	8
	,	62
	,	8
	,	8
	,	0
	,	0
	,	0
	,	0
	,	0
	,	0
	,	8
	,	8
	,	16
	,	0
	,	0
	,	0
	,	0
	,	62
	,	0
	,	0
	,	0
	,	0
	,	0
	,	0
	,	0
	,	0
	,	24
	,	24
	,	0
	,	0
	,	0
	,	2
	,	4
	,	8
	,	16
	,	32
	,	0
	,	0
	,	60
	,	70
	,	74
	,	82
	,	98
	,	60
	,	0
	,	0
	,	24
	,	40
	,	8
	,	8
	,	8
	,	62
	,	0
	,	0
	,	60
	,	66
	,	2
	,	60
	,	64
	,	126
	,	0
	,	0
	,	60
	,	66
	,	12
	,	2
	,	66
	,	60
	,	0
	,	0
	,	8
	,	24
	,	40
	,	72
	,	126
	,	8
	,	0
	,	0
	,	126
	,	64
	,	124
	,	2
	,	66
	,	60
	,	0
	,	0
	,	60
	,	64
	,	124
	,	66
	,	66
	,	60
	,	0
	,	0
	,	126
	,	2
	,	4
	,	8
	,	16
	,	16
	,	0
	,	0
	,	60
	,	66
	,	60
	,	66
	,	66
	,	60
	,	0
	,	0
	,	60
	,	66
	,	66
	,	62
	,	2
	,	60
	,	0
	,	0
	,	0
	,	0
	,	16
	,	0
	,	0
	,	16
	,	0
	,	0
	,	0
	,	16
	,	0
	,	0
	,	16
	,	16
	,	32
	,	0
	,	0
	,	4
	,	8
	,	16
	,	8
	,	4
	,	0
	,	0
	,	0
	,	0
	,	62
	,	0
	,	62
	,	0
	,	0
	,	0
	,	0
	,	16
	,	8
	,	4
	,	8
	,	16
	,	0
	,	0
	,	60
	,	66
	,	4
	,	8
	,	0
	,	8
	,	0
	,	0
	,	60
	,	74
	,	86
	,	94
	,	64
	,	60
	,	0
	,	0
	,	60
	,	66
	,	66
	,	126
	,	66
	,	66
	,	0
	,	0
	,	124
	,	66
	,	124
	,	66
	,	66
	,	124
	,	0
	,	0
	,	60
	,	66
	,	64
	,	64
	,	66
	,	60
	,	0
	,	0
	,	120
	,	68
	,	66
	,	66
	,	68
	,	120
	,	0
	,	0
	,	126
	,	64
	,	124
	,	64
	,	64
	,	126
	,	0
	,	0
	,	126
	,	64
	,	124
	,	64
	,	64
	,	64
	,	0
	,	0
	,	60
	,	66
	,	64
	,	78
	,	66
	,	60
	,	0
	,	0
	,	66
	,	66
	,	126
	,	66
	,	66
	,	66
	,	0
	,	0
	,	62
	,	8
	,	8
	,	8
	,	8
	,	62
	,	0
	,	0
	,	2
	,	2
	,	2
	,	66
	,	66
	,	60
	,	0
	,	0
	,	68
	,	72
	,	112
	,	72
	,	68
	,	66
	,	0
	,	0
	,	64
	,	64
	,	64
	,	64
	,	64
	,	126
	,	0
	,	0
	,	66
	,	102
	,	90
	,	66
	,	66
	,	66
	,	0
	,	0
	,	66
	,	98
	,	82
	,	74
	,	70
	,	66
	,	0
	,	0
	,	60
	,	66
	,	66
	,	66
	,	66
	,	60
	,	0
	,	0
	,	124
	,	66
	,	66
	,	124
	,	64
	,	64
	,	0
	,	0
	,	60
	,	66
	,	66
	,	82
	,	74
	,	60
	,	0
	,	0
	,	124
	,	66
	,	66
	,	124
	,	68
	,	66
	,	0
	,	0
	,	60
	,	64
	,	60
	,	2
	,	66
	,	60
	,	0
	,	0
	,	254
	,	16
	,	16
	,	16
	,	16
	,	16
	,	0
	,	0
	,	66
	,	66
	,	66
	,	66
	,	66
	,	60
	,	0
	,	0
	,	66
	,	66
	,	66
	,	66
	,	36
	,	24
	,	0
	,	0
	,	66
	,	66
	,	66
	,	66
	,	90
	,	36
	,	0
	,	0
	,	66
	,	36
	,	24
	,	24
	,	36
	,	66
	,	0
	,	0
	,	130
	,	68
	,	40
	,	16
	,	16
	,	16
	,	0
	,	0
	,	126
	,	4
	,	8
	,	16
	,	32
	,	126
	,	0
	,	0
	,	14
	,	8
	,	8
	,	8
	,	8
	,	14
	,	0
	,	0
	,	0
	,	64
	,	32
	,	16
	,	8
	,	4
	,	0
	,	0
	,	112
	,	16
	,	16
	,	16
	,	16
	,	112
	,	0
	,	0
	,	16
	,	56
	,	84
	,	16
	,	16
	,	16
	,	0
	,	0
	,	0
	,	0
	,	0
	,	0
	,	0
	,	0
	,	255
	,	0
	,	28
	,	34
	,	120
	,	32
	,	32
	,	126
	,	0
	,	0
	,	0
	,	56
	,	4
	,	60
	,	68
	,	60
	,	0
	,	0
	,	32
	,	32
	,	60
	,	34
	,	34
	,	60
	,	0
	,	0
	,	0
	,	28
	,	32
	,	32
	,	32
	,	28
	,	0
	,	0
	,	4
	,	4
	,	60
	,	68
	,	68
	,	60
	,	0
	,	0
	,	0
	,	56
	,	68
	,	120
	,	64
	,	60
	,	0
	,	0
	,	12
	,	16
	,	24
	,	16
	,	16
	,	16
	,	0
	,	0
	,	0
	,	60
	,	68
	,	68
	,	60
	,	4
	,	56
	,	0
	,	64
	,	64
	,	120
	,	68
	,	68
	,	68
	,	0
	,	0
	,	16
	,	0
	,	48
	,	16
	,	16
	,	56
	,	0
	,	0
	,	4
	,	0
	,	4
	,	4
	,	4
	,	36
	,	24
	,	0
	,	32
	,	40
	,	48
	,	48
	,	40
	,	36
	,	0
	,	0
	,	16
	,	16
	,	16
	,	16
	,	16
	,	12
	,	0
	,	0
	,	0
	,	104
	,	84
	,	84
	,	84
	,	84
	,	0
	,	0
	,	0
	,	120
	,	68
	,	68
	,	68
	,	68
	,	0
	,	0
	,	0
	,	56
	,	68
	,	68
	,	68
	,	56
	,	0
	,	0
	,	0
	,	120
	,	68
	,	68
	,	120
	,	64
	,	64
	,	0
	,	0
	,	60
	,	68
	,	68
	,	60
	,	4
	,	6
	,	0
	,	0
	,	28
	,	32
	,	32
	,	32
	,	32
	,	0
	,	0
	,	0
	,	56
	,	64
	,	56
	,	4
	,	120
	,	0
	,	0
	,	16
	,	56
	,	16
	,	16
	,	16
	,	12
	,	0
	,	0
	,	0
	,	68
	,	68
	,	68
	,	68
	,	56
	,	0
	,	0
	,	0
	,	68
	,	68
	,	40
	,	40
	,	16
	,	0
	,	0
	,	0
	,	68
	,	84
	,	84
	,	84
	,	40
	,	0
	,	0
	,	0
	,	68
	,	40
	,	16
	,	40
	,	68
	,	0
	,	0
	,	0
	,	68
	,	68
	,	68
	,	60
	,	4
	,	56
	,	0
	,	0
	,	124
	,	8
	,	16
	,	32
	,	124
	,	0
	,	0
	,	14
	,	8
	,	48
	,	8
	,	8
	,	14
	,	0
	,	0
	,	8
	,	8
	,	8
	,	8
	,	8
	,	8
	,	0
	,	0
	,	112
	,	16
	,	12
	,	16
	,	16
	,	112
	,	0
	,	0
	,	20
	,	40
	,	0
	,	0
	,	0
	,	0
	,	0
	,	60
	,	66
	,	153
	,	161
	,	161
	,	153
	,	66
	,	60 

//caracter adicional para menu - franja de color de spectrum

	,	1
	,	3
	,	7
	,	15
	,	31
	,	63
	,	127
	,	255

//caracter adicional para menu - enye minuscula
	,0x38
	,0x00
	,0x58
	,0x64
	,0x44
	,0x44
	,0x44
	,0x00





};



unsigned char char_set_cpc[]={ 
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x00,0x18,0x00
,0x6c,0x6c,0x6c,0x00,0x00,0x00,0x00,0x00,0x6c,0x6c,0xfe,0x6c,0xfe,0x6c,0x6c,0x00
,0x18,0x3e,0x58,0x3c,0x1a,0x7c,0x18,0x00,0x00,0xc6,0xcc,0x18,0x30,0x66,0xc6,0x00
,0x38,0x6c,0x38,0x76,0xdc,0xcc,0x76,0x00,0x18,0x18,0x30,0x00,0x00,0x00,0x00,0x00
,0x0c,0x18,0x30,0x30,0x30,0x18,0x0c,0x00,0x30,0x18,0x0c,0x0c,0x0c,0x18,0x30,0x00
,0x00,0x66,0x3c,0xff,0x3c,0x66,0x00,0x00,0x00,0x18,0x18,0x7e,0x18,0x18,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x30,0x00,0x00,0x00,0x7e,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x06,0x0c,0x18,0x30,0x60,0xc0,0x80,0x00
,0x7c,0xc6,0xce,0xd6,0xe6,0xc6,0x7c,0x00,0x18,0x38,0x18,0x18,0x18,0x18,0x7e,0x00
,0x3c,0x66,0x06,0x3c,0x60,0x66,0x7e,0x00,0x3c,0x66,0x06,0x1c,0x06,0x66,0x3c,0x00
,0x1c,0x3c,0x6c,0xcc,0xfe,0x0c,0x1e,0x00,0x7e,0x62,0x60,0x7c,0x06,0x66,0x3c,0x00
,0x3c,0x66,0x60,0x7c,0x66,0x66,0x3c,0x00,0x7e,0x66,0x06,0x0c,0x18,0x18,0x18,0x00
,0x3c,0x66,0x66,0x3c,0x66,0x66,0x3c,0x00,0x3c,0x66,0x66,0x3e,0x06,0x66,0x3c,0x00
,0x00,0x00,0x18,0x18,0x00,0x18,0x18,0x00,0x00,0x00,0x18,0x18,0x00,0x18,0x18,0x30
,0x0c,0x18,0x30,0x60,0x30,0x18,0x0c,0x00,0x00,0x00,0x7e,0x00,0x00,0x7e,0x00,0x00
,0x60,0x30,0x18,0x0c,0x18,0x30,0x60,0x00,0x3c,0x66,0x66,0x0c,0x18,0x00,0x18,0x00
,0x7c,0xc6,0xde,0xde,0xde,0xc0,0x7c,0x00,0x18,0x3c,0x66,0x66,0x7e,0x66,0x66,0x00
,0xfc,0x66,0x66,0x7c,0x66,0x66,0xfc,0x00,0x3c,0x66,0xc0,0xc0,0xc0,0x66,0x3c,0x00
,0xf8,0x6c,0x66,0x66,0x66,0x6c,0xf8,0x00,0xfe,0x62,0x68,0x78,0x68,0x62,0xfe,0x00
,0xfe,0x62,0x68,0x78,0x68,0x60,0xf0,0x00,0x3c,0x66,0xc0,0xc0,0xce,0x66,0x3e,0x00
,0x66,0x66,0x66,0x7e,0x66,0x66,0x66,0x00,0x7e,0x18,0x18,0x18,0x18,0x18,0x7e,0x00
,0x1e,0x0c,0x0c,0x0c,0xcc,0xcc,0x78,0x00,0xe6,0x66,0x6c,0x78,0x6c,0x66,0xe6,0x00
,0xf0,0x60,0x60,0x60,0x62,0x66,0xfe,0x00,0xc6,0xee,0xfe,0xfe,0xd6,0xc6,0xc6,0x00
,0xc6,0xe6,0xf6,0xde,0xce,0xc6,0xc6,0x00,0x38,0x6c,0xc6,0xc6,0xc6,0x6c,0x38,0x00
,0xfc,0x66,0x66,0x7c,0x60,0x60,0xf0,0x00,0x38,0x6c,0xc6,0xc6,0xda,0xcc,0x76,0x00
,0xfc,0x66,0x66,0x7c,0x6c,0x66,0xe6,0x00,0x3c,0x66,0x60,0x3c,0x06,0x66,0x3c,0x00
,0x7e,0x5a,0x18,0x18,0x18,0x18,0x3c,0x00,0x66,0x66,0x66,0x66,0x66,0x66,0x3c,0x00
,0x66,0x66,0x66,0x66,0x66,0x3c,0x18,0x00,0xc6,0xc6,0xc6,0xd6,0xfe,0xee,0xc6,0x00
,0xc6,0x6c,0x38,0x38,0x6c,0xc6,0xc6,0x00,0x66,0x66,0x66,0x3c,0x18,0x18,0x3c,0x00
,0xfe,0xc6,0x8c,0x18,0x32,0x66,0xfe,0x00,0x3c,0x30,0x30,0x30,0x30,0x30,0x3c,0x00
,0xc0,0x60,0x30,0x18,0x0c,0x06,0x02,0x00,0x3c,0x0c,0x0c,0x0c,0x0c,0x0c,0x3c,0x00
,0x18,0x3c,0x7e,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff
,0x30,0x18,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x0c,0x7c,0xcc,0x76,0x00
,0xe0,0x60,0x7c,0x66,0x66,0x66,0xdc,0x00,0x00,0x00,0x3c,0x66,0x60,0x66,0x3c,0x00
,0x1c,0x0c,0x7c,0xcc,0xcc,0xcc,0x76,0x00,0x00,0x00,0x3c,0x66,0x7e,0x60,0x3c,0x00
,0x1c,0x36,0x30,0x78,0x30,0x30,0x78,0x00,0x00,0x00,0x3e,0x66,0x66,0x3e,0x06,0x7c
,0xe0,0x60,0x6c,0x76,0x66,0x66,0xe6,0x00,0x18,0x00,0x38,0x18,0x18,0x18,0x3c,0x00
,0x06,0x00,0x0e,0x06,0x06,0x66,0x66,0x3c,0xe0,0x60,0x66,0x6c,0x78,0x6c,0xe6,0x00
,0x38,0x18,0x18,0x18,0x18,0x18,0x3c,0x00,0x00,0x00,0x6c,0xfe,0xd6,0xd6,0xc6,0x00
,0x00,0x00,0xdc,0x66,0x66,0x66,0x66,0x00,0x00,0x00,0x3c,0x66,0x66,0x66,0x3c,0x00
,0x00,0x00,0xdc,0x66,0x66,0x7c,0x60,0xf0,0x00,0x00,0x76,0xcc,0xcc,0x7c,0x0c,0x1e
,0x00,0x00,0xdc,0x76,0x60,0x60,0xf0,0x00,0x00,0x00,0x3c,0x60,0x3c,0x06,0x7c,0x00
,0x30,0x30,0x7c,0x30,0x30,0x36,0x1c,0x00,0x00,0x00,0x66,0x66,0x66,0x66,0x3e,0x00
,0x00,0x00,0x66,0x66,0x66,0x3c,0x18,0x00,0x00,0x00,0xc6,0xd6,0xd6,0xfe,0x6c,0x00
,0x00,0x00,0xc6,0x6c,0x38,0x6c,0xc6,0x00,0x00,0x00,0x66,0x66,0x66,0x3e,0x06,0x7c
,0x00,0x00,0x7e,0x4c,0x18,0x32,0x7e,0x00,0x0e,0x18,0x18,0x70,0x18,0x18,0x0e,0x00
,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x70,0x18,0x18,0x0e,0x18,0x18,0x70,0x00
,0x76,0xdc,0x00,0x00,0x00,0x00,0x00,0x00,0xcc,0x33,0xcc,0x33,0xcc,0x33,0xcc,0x33


//caracter adicional para menu - franja de color de spectrum

        ,       1
        ,       3
        ,       7
        ,       15
        ,       31
        ,       63
        ,       127
        ,       255

//caracter adicional para menu - enye minuscula
,0xfe ,0x00 ,0xdc ,0x66 ,0x66 ,0x66 ,0x66 ,0x00


};
unsigned char *char_set=char_set_spectrum; //por defecto

unsigned char char_set_z88[]={

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00


,0x0c,0x0c,0x0c,0x0c,0x00,0x00,0x0c,0x00,0x1b,0x1b,0x1b,0x00,0x00,0x00,0x00,0x00
,0x0a,0x1f,0x1f,0x0a,0x1f,0x1f,0x0a,0x00,0x0c,0x1f,0x2c,0x1e,0x0d,0x3e,0x0c,0x00
,0x30,0x33,0x06,0x0c,0x18,0x33,0x03,0x00,0x1c,0x36,0x36,0x18,0x35,0x32,0x1d,0x00
,0x06,0x0c,0x18,0x00,0x00,0x00,0x00,0x00,0x06,0x0c,0x18,0x18,0x18,0x0c,0x06,0x00
,0x18,0x0c,0x06,0x06,0x06,0x0c,0x18,0x00,0x00,0x0c,0x3f,0x1e,0x3f,0x0c,0x00,0x00
,0x00,0x0c,0x0c,0x3f,0x3f,0x0c,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x0c,0x18
,0x00,0x00,0x00,0x1f,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x0c,0x00
,0x00,0x03,0x06,0x0c,0x18,0x30,0x00,0x00,0x0e,0x19,0x1b,0x1d,0x19,0x19,0x0e,0x00
,0x0c,0x1c,0x0c,0x0c,0x0c,0x0c,0x0c,0x00,0x0e,0x1b,0x03,0x06,0x0c,0x18,0x1f,0x00
,0x1f,0x03,0x06,0x03,0x03,0x1b,0x0e,0x00,0x06,0x0e,0x16,0x26,0x3f,0x06,0x06,0x00
,0x1f,0x18,0x1e,0x03,0x03,0x1b,0x0e,0x00,0x06,0x0c,0x18,0x1e,0x1b,0x1b,0x0e,0x00
,0x1f,0x03,0x03,0x06,0x0c,0x0c,0x0c,0x00,0x0e,0x1b,0x1b,0x0e,0x1b,0x1b,0x0e,0x00
,0x0e,0x1b,0x1b,0x0f,0x03,0x06,0x0c,0x00,0x00,0x00,0x0c,0x0c,0x00,0x0c,0x0c,0x00
,0x00,0x00,0x0c,0x0c,0x00,0x0c,0x0c,0x18,0x03,0x06,0x0c,0x18,0x0c,0x06,0x03,0x00
,0x00,0x1f,0x1f,0x00,0x1f,0x1f,0x00,0x00,0x18,0x0c,0x06,0x03,0x06,0x0c,0x18,0x00
,0x0e,0x1b,0x03,0x06,0x06,0x00,0x06,0x00,0x1e,0x33,0x37,0x35,0x37,0x30,0x1e,0x00
,0x0e,0x1b,0x1b,0x1f,0x1b,0x1b,0x1b,0x00,0x1e,0x1b,0x1b,0x1e,0x1b,0x1b,0x1e,0x00
,0x0e,0x1b,0x18,0x18,0x18,0x1b,0x0e,0x00,0x1c,0x1a,0x1b,0x1b,0x1b,0x1a,0x1c,0x00
,0x1f,0x18,0x18,0x1e,0x18,0x18,0x1f,0x00,0x1f,0x18,0x18,0x1e,0x18,0x18,0x18,0x00
,0x0f,0x18,0x18,0x1b,0x19,0x19,0x0f,0x00,0x19,0x19,0x19,0x1f,0x19,0x19,0x19,0x00
,0x0f,0x06,0x06,0x06,0x06,0x06,0x0f,0x00,0x1f,0x06,0x06,0x06,0x06,0x16,0x0c,0x00
,0x19,0x1a,0x1c,0x1c,0x1c,0x1a,0x19,0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x1f,0x00
,0x11,0x1b,0x1f,0x1f,0x15,0x15,0x11,0x00,0x11,0x19,0x1d,0x1f,0x1b,0x19,0x19,0x00
,0x0e,0x1b,0x1b,0x1b,0x1b,0x1b,0x0e,0x00,0x1e,0x1b,0x1b,0x1e,0x18,0x18,0x18,0x00
,0x0e,0x19,0x19,0x19,0x1d,0x1a,0x0d,0x00,0x1e,0x1b,0x1b,0x1e,0x1c,0x1a,0x19,0x00
,0x0e,0x1b,0x18,0x0e,0x03,0x1b,0x0e,0x00,0x3f,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x00
,0x1b,0x1b,0x1b,0x1b,0x1b,0x1b,0x0e,0x00,0x1b,0x1b,0x1b,0x1b,0x1b,0x0a,0x04,0x00
,0x11,0x11,0x15,0x15,0x1f,0x1f,0x0a,0x00,0x1b,0x1b,0x0a,0x04,0x0a,0x1b,0x1b,0x00
,0x1b,0x1b,0x1b,0x0a,0x04,0x04,0x04,0x00,0x1f,0x03,0x06,0x0c,0x18,0x18,0x1f,0x00
,0x1e,0x18,0x18,0x18,0x18,0x18,0x1e,0x00,0x00,0x30,0x18,0x0c,0x06,0x03,0x00,0x00
,0x1e,0x06,0x06,0x06,0x06,0x06,0x1e,0x00,0x0c,0x1e,0x33,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x3f,0x3f,0x00,0x18,0x0c,0x06,0x00,0x00,0x00,0x00,0x00
,0x00,0x00,0x0e,0x03,0x0f,0x1b,0x0f,0x00,0x18,0x18,0x1e,0x1b,0x1b,0x1b,0x1e,0x00
,0x00,0x00,0x0e,0x18,0x18,0x18,0x0e,0x00,0x03,0x03,0x0f,0x1b,0x1b,0x1b,0x0f,0x00
,0x00,0x00,0x0e,0x1b,0x1f,0x18,0x0e,0x00,0x06,0x0d,0x0c,0x1e,0x0c,0x0c,0x0c,0x00
,0x00,0x00,0x0e,0x1b,0x1b,0x0f,0x03,0x0e,0x18,0x18,0x1e,0x1b,0x1b,0x1b,0x1b,0x00
,0x06,0x00,0x0e,0x06,0x06,0x06,0x0f,0x00,0x06,0x00,0x06,0x06,0x06,0x06,0x16,0x0c
,0x18,0x18,0x1b,0x1e,0x1e,0x1b,0x19,0x00,0x1c,0x0c,0x0c,0x0c,0x0c,0x0c,0x1e,0x00
,0x00,0x00,0x0a,0x1f,0x1f,0x15,0x15,0x00,0x00,0x00,0x1e,0x1b,0x1b,0x1b,0x1b,0x00

,0x00,0x00,0x0e,0x1b,0x1b,0x1b,0x0e,0x00,0x00,0x00,0x1e,0x1b,0x1b,0x1e,0x18,0x18
,0x00,0x00,0x1e,0x36,0x36,0x1e,0x06,0x07,0x00,0x00,0x1b,0x1c,0x18,0x18,0x18,0x00
,0x00,0x00,0x0f,0x18,0x0e,0x03,0x1e,0x00,0x00,0x0c,0x1f,0x0c,0x0c,0x0d,0x06,0x00
,0x00,0x00,0x1b,0x1b,0x1b,0x1b,0x0f,0x00,0x00,0x00,0x1b,0x1b,0x1b,0x0a,0x04,0x00
,0x00,0x00,0x15,0x15,0x1f,0x1f,0x0a,0x00,0x00,0x00,0x1b,0x0a,0x04,0x0a,0x1b,0x00
,0x00,0x00,0x1b,0x1b,0x1b,0x0f,0x03,0x0e,0x00,0x00,0x1f,0x06,0x0c,0x18,0x1f,0x00
,0x06,0x0c,0x0c,0x18,0x0c,0x0c,0x06,0x00,0x0c,0x0c,0x0c,0x00,0x0c,0x0c,0x0c,0x00
,0x18,0x0c,0x0c,0x06,0x0c,0x0c,0x18,0x00,0x00,0x18,0x2d,0x06,0x00,0x00,0x00,0x00
,0x0e,0x19,0x3c,0x18,0x3c,0x19,0x0e,0x00


//caracter adicional para menu - franja de color de spectrum

        ,       1
        ,       3
        ,       7
        ,       15
        ,       31
        ,       63
        ,       127
        ,       255

//caracter adicional para menu - enye minuscula

,0x1f,0x00,0x1e,0x1b,0x1b,0x1b,0x1b,0x00


};


unsigned char char_set_sam[]={



0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x08,0x08,0x08,0x00,0x08,0x00,
0x14,0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x14,0x14,0x3e,0x14,0x3e,0x14,0x14,0x00,
0x1c,0x28,0x28,0x1c,0x0a,0x0a,0x1c,0x00,0x32,0x32,0x04,0x08,0x10,0x26,0x26,0x00,
0x10,0x28,0x28,0x10,0x2a,0x24,0x1a,0x00,0x0c,0x04,0x08,0x00,0x00,0x00,0x00,0x00,
0x02,0x04,0x08,0x08,0x08,0x04,0x02,0x00,0x20,0x10,0x08,0x08,0x08,0x10,0x20,0x00,
0x08,0x2a,0x1c,0x3e,0x1c,0x2a,0x08,0x00,0x00,0x08,0x08,0x3e,0x08,0x08,0x00,0x00,
0x00,0x00,0x00,0x00,0x0c,0x0c,0x04,0x08,0x00,0x00,0x00,0x3e,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x0c,0x0c,0x00,0x02,0x02,0x04,0x08,0x10,0x20,0x20,0x00,
0x1c,0x22,0x26,0x2a,0x32,0x22,0x1c,0x00,0x08,0x18,0x08,0x08,0x08,0x08,0x1c,0x00,
0x1c,0x22,0x02,0x04,0x08,0x10,0x3e,0x00,0x1c,0x22,0x02,0x0c,0x02,0x22,0x1c,0x00,
0x04,0x0c,0x14,0x24,0x3e,0x04,0x04,0x00,0x3e,0x20,0x3c,0x02,0x02,0x22,0x1c,0x00,
0x0c,0x10,0x20,0x3c,0x22,0x22,0x1c,0x00,0x3e,0x02,0x04,0x08,0x10,0x20,0x20,0x00,
0x1c,0x22,0x22,0x1c,0x22,0x22,0x1c,0x00,0x1c,0x22,0x22,0x1e,0x02,0x04,0x18,0x00,
0x00,0x00,0x0c,0x0c,0x00,0x0c,0x0c,0x00,0x00,0x00,0x0c,0x0c,0x00,0x0c,0x04,0x08,
0x02,0x04,0x08,0x10,0x08,0x04,0x02,0x00,0x00,0x00,0x3e,0x00,0x3e,0x00,0x00,0x00,
0x20,0x10,0x08,0x04,0x08,0x10,0x20,0x00,0x1c,0x22,0x02,0x04,0x08,0x00,0x08,0x00,
0x1c,0x22,0x26,0x2a,0x2e,0x20,0x1c,0x00,0x1c,0x22,0x22,0x3e,0x22,0x22,0x22,0x00,
0x3c,0x22,0x22,0x3c,0x22,0x22,0x3c,0x00,0x1c,0x22,0x20,0x20,0x20,0x22,0x1c,0x00,
0x3c,0x22,0x22,0x22,0x22,0x22,0x3c,0x00,0x3e,0x20,0x20,0x3c,0x20,0x20,0x3e,0x00,
0x3e,0x20,0x20,0x3c,0x20,0x20,0x20,0x00,0x1c,0x22,0x20,0x20,0x26,0x22,0x1c,0x00,
0x22,0x22,0x22,0x3e,0x22,0x22,0x22,0x00,0x1c,0x08,0x08,0x08,0x08,0x08,0x1c,0x00,
0x02,0x02,0x02,0x02,0x02,0x22,0x1c,0x00,0x22,0x24,0x28,0x30,0x28,0x24,0x22,0x00,
0x20,0x20,0x20,0x20,0x20,0x20,0x3e,0x00,0x22,0x36,0x2a,0x22,0x22,0x22,0x22,0x00,
0x22,0x22,0x32,0x2a,0x26,0x22,0x22,0x00,0x1c,0x22,0x22,0x22,0x22,0x22,0x1c,0x00,
0x3c,0x22,0x22,0x3c,0x20,0x20,0x20,0x00,0x1c,0x22,0x22,0x22,0x2a,0x24,0x1a,0x00,
0x3c,0x22,0x22,0x3c,0x28,0x24,0x22,0x00,0x1c,0x22,0x20,0x1c,0x02,0x22,0x1c,0x00,
0x3e,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x22,0x22,0x22,0x22,0x22,0x22,0x1c,0x00,
0x22,0x22,0x22,0x22,0x22,0x14,0x08,0x00,0x22,0x22,0x22,0x22,0x2a,0x2a,0x14,0x00,
0x22,0x22,0x14,0x08,0x14,0x22,0x22,0x00,0x22,0x22,0x14,0x08,0x08,0x08,0x08,0x00,
0x3e,0x02,0x04,0x08,0x10,0x20,0x3e,0x00,0x0e,0x08,0x08,0x08,0x08,0x08,0x0e,0x00,
0x20,0x20,0x10,0x08,0x04,0x02,0x02,0x00,0x38,0x08,0x08,0x08,0x08,0x08,0x38,0x00,
0x08,0x1c,0x2a,0x08,0x08,0x08,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,
0x0c,0x12,0x10,0x38,0x10,0x10,0x3e,0x00,0x00,0x00,0x1c,0x02,0x1e,0x22,0x1e,0x00,
0x20,0x20,0x3c,0x22,0x22,0x22,0x3c,0x00,0x00,0x00,0x1e,0x20,0x20,0x20,0x1e,0x00,
0x02,0x02,0x1e,0x22,0x22,0x22,0x1e,0x00,0x00,0x00,0x1c,0x22,0x3e,0x20,0x1e,0x00,
0x0c,0x12,0x10,0x3c,0x10,0x10,0x10,0x00,0x00,0x00,0x1e,0x22,0x22,0x1e,0x02,0x1c,
0x20,0x20,0x3c,0x22,0x22,0x22,0x22,0x00,0x08,0x00,0x08,0x08,0x08,0x08,0x04,0x00,
0x08,0x00,0x08,0x08,0x08,0x08,0x08,0x10,0x20,0x20,0x22,0x24,0x38,0x24,0x22,0x00,
0x08,0x08,0x08,0x08,0x08,0x08,0x0c,0x00,0x00,0x00,0x34,0x2a,0x2a,0x2a,0x2a,0x00,
0x00,0x00,0x3c,0x22,0x22,0x22,0x22,0x00,0x00,0x00,0x1c,0x22,0x22,0x22,0x1c,0x00,
0x00,0x00,0x3c,0x22,0x22,0x3c,0x20,0x20,0x00,0x00,0x1e,0x22,0x22,0x1e,0x02,0x02,
0x00,0x00,0x2c,0x32,0x20,0x20,0x20,0x00,0x00,0x00,0x1e,0x20,0x1c,0x02,0x3c,0x00,
0x08,0x08,0x1e,0x08,0x08,0x08,0x06,0x00,0x00,0x00,0x22,0x22,0x22,0x22,0x1e,0x00,
0x00,0x00,0x22,0x22,0x22,0x14,0x08,0x00,0x00,0x00,0x22,0x22,0x22,0x2a,0x14,0x00,
0x00,0x00,0x22,0x14,0x08,0x14,0x22,0x00,0x00,0x00,0x22,0x22,0x22,0x1e,0x02,0x1c,
0x00,0x00,0x3e,0x04,0x08,0x10,0x3e,0x00,0x04,0x08,0x08,0x10,0x08,0x08,0x04,0x00,
0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x10,0x08,0x08,0x04,0x08,0x08,0x10,0x00,
0x0a,0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x42,0x5a,0x52,0x5a,0x42,0x3c,0x00



//caracter adicional para menu - franja de color de spectrum

        ,       1
        ,       3
        ,       7
        ,       15
        ,       31
        ,       63
        ,       127
        ,       255

//caracter adicional para menu - enye minuscula
        ,0x38
        ,0x00
        ,0x58
        ,0x64
        ,0x44
        ,0x44
        ,0x44
        ,0x00



};



unsigned char char_set_mansoftware[]={

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x70,0x70,0x70,0x00,0x70,0x70,
0x00,0x36,0x6c,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x24,0x7e,0x24,0x7e,0x24,0x24,
0x00,0x24,0x3f,0x64,0x3e,0x25,0x7e,0x24,0x00,0x63,0x66,0x0c,0x18,0x33,0x63,0x00,
0x00,0x18,0x24,0x19,0x3a,0x44,0x3a,0x00,0x00,0x06,0x0c,0x00,0x00,0x00,0x00,0x00,
0x00,0x1e,0x20,0x40,0x40,0x40,0x20,0x1e,0x00,0x78,0x04,0x02,0x02,0x02,0x04,0x78,
0x00,0x42,0x24,0x08,0x10,0x24,0x42,0x00,0x00,0x18,0x18,0x7e,0x7e,0x18,0x18,0x00,
0x00,0x00,0x00,0x00,0x02,0x04,0x08,0x00,0x00,0x00,0x00,0x7e,0x7e,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x02,0x06,0x0c,0x18,0x30,0x60,0x00,
0x00,0x3e,0x46,0x4a,0x52,0x62,0x7c,0x00,0x00,0x0e,0x1e,0x06,0x06,0x06,0x06,0x00,
0x00,0x38,0x44,0x08,0x10,0x20,0x7e,0x00,0x00,0x7c,0x02,0x7c,0x7c,0x02,0x7c,0x00,
0x00,0x66,0x66,0x66,0x7e,0x7e,0x06,0x00,0x00,0x7e,0x40,0x40,0x7e,0x02,0x02,0x7c,
0x00,0x1e,0x30,0x60,0x60,0x7c,0x66,0x3c,0x00,0x7e,0x7e,0x06,0x0e,0x0e,0x06,0x06,
0x00,0x3c,0x7e,0x24,0x18,0x24,0x7e,0x3c,0x00,0x1e,0x32,0x32,0x1e,0x06,0x06,0x06,
0x00,0x18,0x18,0x00,0x00,0x18,0x18,0x00,0x00,0x18,0x18,0x00,0x00,0x08,0x30,0x00,
0x00,0x02,0x04,0x08,0x08,0x04,0x02,0x00,0x00,0x7e,0x7e,0x00,0x00,0x7e,0x7e,0x00,
0x00,0x40,0x20,0x10,0x10,0x20,0x40,0x00,0x00,0x3c,0x42,0x04,0x18,0x10,0x00,0x10,
0x00,0x3e,0x42,0x5a,0x5a,0x5c,0x40,0x3e,0x00,0x3c,0x7e,0x66,0x7e,0x7e,0x66,0x66,
0x00,0x7c,0x7c,0x62,0x64,0x62,0x7c,0x7c,0x00,0x3e,0x7e,0x60,0x60,0x60,0x7e,0x3e,
0x00,0x78,0x7c,0x66,0x66,0x66,0x7c,0x78,0x00,0x7e,0x7e,0x40,0x7e,0x40,0x7e,0x7e,
0x00,0x7e,0x7e,0x60,0x78,0x78,0x60,0x60,0x00,0x3e,0x7e,0x60,0x6c,0x62,0x7e,0x3c,
0x00,0x63,0x63,0x7f,0x7f,0x7f,0x63,0x63,0x00,0x38,0x38,0x00,0x38,0x38,0x38,0x38,
0x00,0x06,0x06,0x06,0x06,0x66,0x7e,0x7c,0x00,0x62,0x64,0x68,0x70,0x68,0x64,0x62,
0x00,0x60,0x60,0x60,0x60,0x60,0x7f,0x7f,0x00,0x63,0x77,0x6b,0x63,0x63,0x63,0x63,
0x00,0x63,0x73,0x6b,0x67,0x63,0x63,0x63,0x00,0x3e,0x7f,0x77,0x63,0x77,0x7f,0x3e,
0x00,0x7e,0x73,0x73,0x7e,0x60,0x60,0x60,0x00,0x3c,0x42,0x42,0x52,0x4a,0x46,0x3e,
0x00,0x7c,0x62,0x62,0x7c,0x68,0x64,0x62,0x00,0x3e,0x7e,0x40,0x3c,0x02,0x7e,0x7c,
0x00,0x7e,0x7e,0x18,0x18,0x18,0x18,0x18,0x00,0x63,0x63,0x63,0x63,0x63,0x7f,0x3e,
0x00,0x63,0x63,0x63,0x63,0x63,0x36,0x1c,0x00,0x63,0x63,0x63,0x63,0x6b,0x77,0x63,
0x00,0x41,0x63,0x36,0x1c,0x1c,0x36,0x63,0x00,0x63,0x36,0x1c,0x1c,0x1c,0x1c,0x1c,
0x00,0x3f,0x7f,0x06,0x0c,0x18,0x3f,0x7e,0x00,0x18,0x00,0x18,0x18,0x18,0x18,0x18,
0x00,0x1c,0x63,0x73,0x6b,0x67,0x63,0x63,0x00,0x0c,0x00,0x0c,0x18,0x30,0x41,0x3e,
0x00,0x00,0x18,0x3c,0x5a,0x18,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x7f,0x7f,0x00,
0x00,0x60,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x42,0x1e,0x22,0x46,0x39,
0x00,0x30,0x30,0x30,0x3c,0x32,0x32,0x3c,0x00,0x00,0x00,0x3e,0x40,0x40,0x40,0x3e,
0x00,0x06,0x06,0x06,0x1e,0x26,0x26,0x1e,0x00,0x00,0x3c,0x42,0x7c,0x40,0x42,0x3c,
0x00,0x0c,0x10,0x20,0x20,0x78,0x20,0x20,0x00,0x3c,0x42,0x42,0x3c,0x04,0x28,0x30,
0x00,0x40,0x40,0x40,0x40,0x78,0x44,0x44,0x00,0x10,0x00,0x10,0x10,0x10,0x10,0x10,
0x00,0x04,0x00,0x04,0x04,0x04,0x04,0x38,0x00,0x00,0x48,0x50,0x60,0x60,0x50,0x48,
0x00,0x00,0x20,0x20,0x20,0x20,0x20,0x1c,0x00,0x00,0x00,0x28,0x54,0x54,0x54,0x54,
0x00,0x00,0x00,0x70,0x48,0x48,0x48,0x48,0x00,0x00,0x00,0x3c,0x42,0x42,0x42,0x3c,
0x00,0x00,0x00,0x70,0x48,0x48,0x70,0x40,0x00,0x00,0x00,0x1c,0x24,0x24,0x1c,0x06,
0x00,0x00,0x00,0x38,0x40,0x40,0x40,0x40,0x00,0x00,0x00,0x3e,0x40,0x3c,0x02,0x7c,
0x00,0x00,0x20,0x70,0x20,0x20,0x20,0x18,0x00,0x00,0x00,0x42,0x42,0x42,0x42,0x3c,
0x00,0x00,0x00,0x00,0x41,0x22,0x14,0x08,0x00,0x00,0x00,0x41,0x41,0x41,0x5d,0x22,
0x00,0x00,0x00,0x41,0x22,0x1c,0x22,0x41,0x00,0x00,0x41,0x22,0x14,0x08,0x10,0x20,
0x00,0x00,0x00,0x7f,0x02,0x04,0x08,0x7f,0x00,0x00,0x42,0x00,0x42,0x42,0x42,0x3c,
0x00,0x78,0x00,0x78,0x44,0x44,0x44,0x44,0x00,0x00,0x3e,0x40,0x40,0x48,0x3e,0x20,
0x00,0x00,0x00,0x11,0x2a,0x44,0x00,0x00,0x00,0x3e,0x41,0x5d,0x51,0x5d,0x41,0x3e


//caracter adicional para menu - franja de color de spectrum

        ,       1
        ,       3
        ,       7
        ,       15
        ,       31
        ,       63
        ,       127
        ,       255

//caracter adicional para menu - enye minuscula
        ,0x38
        ,0x00
        ,0x58
        ,0x64
        ,0x44
        ,0x44
        ,0x44
        ,0x00


};


//Nota: Charset de QL es originalmente de 9 pixels de alto, he tenido que ignorar el ultimo byte de cada caracter para poder tener fuente de 8 pixeles
//Es por eso que hay letras, como la g, que se ven cortadas
unsigned char char_set_ql[]={

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x10,0x10,0x10,0x00,0x10,0x00,
0x28,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0x28,0x7c,0x28,0x7c,0x28,0x28,0x00,
0x38,0x50,0x50,0x38,0x14,0x14,0x38,0x00,0x64,0x64,0x08,0x10,0x20,0x4c,0x4c,0x00,
0x20,0x50,0x50,0x20,0x54,0x48,0x34,0x00,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
0x04,0x08,0x10,0x10,0x10,0x08,0x04,0x00,0x40,0x20,0x10,0x10,0x10,0x20,0x40,0x00,
0x10,0x54,0x38,0x10,0x38,0x54,0x10,0x00,0x00,0x10,0x10,0x7c,0x10,0x10,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x08,0x00,0x00,0x00,0x7c,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x04,0x04,0x08,0x10,0x20,0x40,0x40,0x00,
0x38,0x44,0x4c,0x54,0x64,0x44,0x38,0x00,0x10,0x30,0x10,0x10,0x10,0x10,0x38,0x00,
0x38,0x44,0x04,0x08,0x10,0x20,0x7c,0x00,0x38,0x44,0x04,0x18,0x04,0x44,0x38,0x00,
0x08,0x18,0x28,0x48,0x7c,0x08,0x08,0x00,0x7c,0x40,0x78,0x04,0x04,0x44,0x38,0x00,
0x18,0x20,0x40,0x78,0x44,0x44,0x38,0x00,0x7c,0x04,0x08,0x10,0x20,0x40,0x40,0x00,
0x38,0x44,0x44,0x38,0x44,0x44,0x38,0x00,0x38,0x44,0x44,0x3c,0x04,0x08,0x30,0x00,
0x00,0x00,0x18,0x18,0x00,0x18,0x18,0x00,0x00,0x00,0x18,0x18,0x00,0x18,0x18,0x08,
0x04,0x08,0x10,0x20,0x10,0x08,0x04,0x00,0x00,0x00,0x7c,0x00,0x7c,0x00,0x00,0x00,
0x40,0x20,0x10,0x08,0x10,0x20,0x40,0x00,0x38,0x44,0x04,0x08,0x10,0x00,0x10,0x00,
0x38,0x44,0x4c,0x54,0x4c,0x40,0x30,0x00,0x38,0x44,0x44,0x7c,0x44,0x44,0x44,0x00,
0x78,0x44,0x44,0x78,0x44,0x44,0x78,0x00,0x38,0x44,0x40,0x40,0x40,0x44,0x38,0x00,
0x78,0x44,0x44,0x44,0x44,0x44,0x78,0x00,0x7c,0x40,0x40,0x78,0x40,0x40,0x7c,0x00,
0x7c,0x40,0x40,0x78,0x40,0x40,0x40,0x00,0x38,0x44,0x40,0x40,0x4c,0x44,0x38,0x00,
0x44,0x44,0x44,0x7c,0x44,0x44,0x44,0x00,0x38,0x10,0x10,0x10,0x10,0x10,0x38,0x00,
0x04,0x04,0x04,0x04,0x04,0x44,0x38,0x00,0x44,0x48,0x50,0x60,0x50,0x48,0x44,0x00,
0x40,0x40,0x40,0x40,0x40,0x40,0x7c,0x00,0x44,0x6c,0x54,0x44,0x44,0x44,0x44,0x00,
0x44,0x44,0x64,0x54,0x4c,0x44,0x44,0x00,0x38,0x44,0x44,0x44,0x44,0x44,0x38,0x00,
0x78,0x44,0x44,0x78,0x40,0x40,0x40,0x00,0x38,0x44,0x44,0x44,0x54,0x48,0x34,0x00,
0x78,0x44,0x44,0x78,0x50,0x48,0x44,0x00,0x38,0x44,0x40,0x38,0x04,0x44,0x38,0x00,
0x7c,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x44,0x44,0x44,0x44,0x44,0x44,0x38,0x00,
0x44,0x44,0x44,0x44,0x44,0x28,0x10,0x00,0x44,0x44,0x44,0x44,0x54,0x54,0x28,0x00,
0x44,0x44,0x28,0x10,0x28,0x44,0x44,0x00,0x44,0x44,0x28,0x10,0x10,0x10,0x10,0x00,
0x7c,0x04,0x08,0x10,0x20,0x40,0x7c,0x00,0x1c,0x10,0x10,0x10,0x10,0x10,0x1c,0x00,
0x40,0x40,0x20,0x10,0x08,0x04,0x04,0x00,0x70,0x10,0x10,0x10,0x10,0x10,0x70,0x00,
0x10,0x28,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,
0x18,0x24,0x20,0x70,0x20,0x20,0x7c,0x00,0x00,0x00,0x34,0x4c,0x44,0x4c,0x34,0x00,
0x40,0x40,0x78,0x44,0x44,0x44,0x78,0x00,0x00,0x00,0x3c,0x40,0x40,0x40,0x3c,0x00,
0x04,0x04,0x3c,0x44,0x44,0x44,0x3c,0x00,0x00,0x00,0x38,0x44,0x7c,0x40,0x3c,0x00,
0x18,0x24,0x20,0x70,0x20,0x20,0x20,0x00,0x00,0x00,0x38,0x44,0x44,0x44,0x3c,0x04,
0x40,0x40,0x78,0x44,0x44,0x44,0x44,0x00,0x10,0x00,0x10,0x10,0x10,0x10,0x08,0x00,
0x10,0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x40,0x40,0x44,0x48,0x70,0x48,0x44,0x00,
0x10,0x10,0x10,0x10,0x10,0x10,0x08,0x00,0x00,0x00,0x68,0x54,0x54,0x54,0x54,0x00,
0x00,0x00,0x78,0x44,0x44,0x44,0x44,0x00,0x00,0x00,0x38,0x44,0x44,0x44,0x38,0x00,
0x00,0x00,0x78,0x44,0x44,0x44,0x78,0x40,0x00,0x00,0x3c,0x44,0x44,0x44,0x3c,0x04,
0x00,0x00,0x58,0x64,0x40,0x40,0x40,0x00,0x00,0x00,0x38,0x40,0x38,0x04,0x38,0x00,
0x10,0x10,0x38,0x10,0x10,0x10,0x0c,0x00,0x00,0x00,0x44,0x44,0x44,0x44,0x3c,0x00,
0x00,0x00,0x44,0x44,0x44,0x28,0x10,0x00,0x00,0x00,0x44,0x44,0x44,0x54,0x28,0x00,
0x00,0x00,0x44,0x28,0x10,0x28,0x44,0x00,0x00,0x00,0x44,0x44,0x44,0x44,0x3c,0x04,
0x00,0x00,0x7c,0x08,0x10,0x20,0x7c,0x00,0x08,0x10,0x10,0x20,0x10,0x10,0x08,0x00,
0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x20,0x10,0x10,0x08,0x10,0x10,0x20,0x00,
0x14,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x44,0x5c,0x64,0x5c,0x44,0x38,0x00

//caracter adicional para menu - franja de color de spectrum

        ,       1
        ,       3
        ,       7
        ,       15
        ,       31
        ,       63
        ,       127
        ,       255

//caracter adicional para menu - enye minuscula
        ,0x38
        ,0x00
        ,0x58
        ,0x64
        ,0x44
        ,0x44
        ,0x44
        ,0x00

};
