/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or https://opensource.org/licenses/CDDL-1.0.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */
/*
 * Copyright 2008 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

#ifndef _AESTAB2_H
#define	_AESTAB2_H

#ifdef	__cplusplus
extern "C" {
#endif

/*
 * To create this file for OpenSolaris:
 * 1. Compile and run tablegen.c, from aes-src-04-03-08.zip,
 *	after defining ASM_AMD64_C
 * 2. mv aestab2.c aestab2.h
 * 3. Add __cplusplus and _AESTAB2_H header guards
 * 3. Add #include <aes_impl.h>
 * 4. Change "uint_32t" to "uint32_t"
 * 5. Change all variables to "static const"
 * 6. Cstyle and hdrchk this file
 */

#include <aes/aes_impl.h>

static const uint32_t t_rc[RC_LENGTH] =
{
	0x00000001, 0x00000002, 0x00000004, 0x00000008,
	0x00000010, 0x00000020, 0x00000040, 0x00000080,
	0x0000001b, 0x00000036
};

static const uint32_t t_ls[4][256] =
{
	{
	0x00000063, 0x0000007c, 0x00000077, 0x0000007b,
	0x000000f2, 0x0000006b, 0x0000006f, 0x000000c5,
	0x00000030, 0x00000001, 0x00000067, 0x0000002b,
	0x000000fe, 0x000000d7, 0x000000ab, 0x00000076,
	0x000000ca, 0x00000082, 0x000000c9, 0x0000007d,
	0x000000fa, 0x00000059, 0x00000047, 0x000000f0,
	0x000000ad, 0x000000d4, 0x000000a2, 0x000000af,
	0x0000009c, 0x000000a4, 0x00000072, 0x000000c0,
	0x000000b7, 0x000000fd, 0x00000093, 0x00000026,
	0x00000036, 0x0000003f, 0x000000f7, 0x000000cc,
	0x00000034, 0x000000a5, 0x000000e5, 0x000000f1,
	0x00000071, 0x000000d8, 0x00000031, 0x00000015,
	0x00000004, 0x000000c7, 0x00000023, 0x000000c3,
	0x00000018, 0x00000096, 0x00000005, 0x0000009a,
	0x00000007, 0x00000012, 0x00000080, 0x000000e2,
	0x000000eb, 0x00000027, 0x000000b2, 0x00000075,
	0x00000009, 0x00000083, 0x0000002c, 0x0000001a,
	0x0000001b, 0x0000006e, 0x0000005a, 0x000000a0,
	0x00000052, 0x0000003b, 0x000000d6, 0x000000b3,
	0x00000029, 0x000000e3, 0x0000002f, 0x00000084,
	0x00000053, 0x000000d1, 0x00000000, 0x000000ed,
	0x00000020, 0x000000fc, 0x000000b1, 0x0000005b,
	0x0000006a, 0x000000cb, 0x000000be, 0x00000039,
	0x0000004a, 0x0000004c, 0x00000058, 0x000000cf,
	0x000000d0, 0x000000ef, 0x000000aa, 0x000000fb,
	0x00000043, 0x0000004d, 0x00000033, 0x00000085,
	0x00000045, 0x000000f9, 0x00000002, 0x0000007f,
	0x00000050, 0x0000003c, 0x0000009f, 0x000000a8,
	0x00000051, 0x000000a3, 0x00000040, 0x0000008f,
	0x00000092, 0x0000009d, 0x00000038, 0x000000f5,
	0x000000bc, 0x000000b6, 0x000000da, 0x00000021,
	0x00000010, 0x000000ff, 0x000000f3, 0x000000d2,
	0x000000cd, 0x0000000c, 0x00000013, 0x000000ec,
	0x0000005f, 0x00000097, 0x00000044, 0x00000017,
	0x000000c4, 0x000000a7, 0x0000007e, 0x0000003d,
	0x00000064, 0x0000005d, 0x00000019, 0x00000073,
	0x00000060, 0x00000081, 0x0000004f, 0x000000dc,
	0x00000022, 0x0000002a, 0x00000090, 0x00000088,
	0x00000046, 0x000000ee, 0x000000b8, 0x00000014,
	0x000000de, 0x0000005e, 0x0000000b, 0x000000db,
	0x000000e0, 0x00000032, 0x0000003a, 0x0000000a,
	0x00000049, 0x00000006, 0x00000024, 0x0000005c,
	0x000000c2, 0x000000d3, 0x000000ac, 0x00000062,
	0x00000091, 0x00000095, 0x000000e4, 0x00000079,
	0x000000e7, 0x000000c8, 0x00000037, 0x0000006d,
	0x0000008d, 0x000000d5, 0x0000004e, 0x000000a9,
	0x0000006c, 0x00000056, 0x000000f4, 0x000000ea,
	0x00000065, 0x0000007a, 0x000000ae, 0x00000008,
	0x000000ba, 0x00000078, 0x00000025, 0x0000002e,
	0x0000001c, 0x000000a6, 0x000000b4, 0x000000c6,
	0x000000e8, 0x000000dd, 0x00000074, 0x0000001f,
	0x0000004b, 0x000000bd, 0x0000008b, 0x0000008a,
	0x00000070, 0x0000003e, 0x000000b5, 0x00000066,
	0x00000048, 0x00000003, 0x000000f6, 0x0000000e,
	0x00000061, 0x00000035, 0x00000057, 0x000000b9,
	0x00000086, 0x000000c1, 0x0000001d, 0x0000009e,
	0x000000e1, 0x000000f8, 0x00000098, 0x00000011,
	0x00000069, 0x000000d9, 0x0000008e, 0x00000094,
	0x0000009b, 0x0000001e, 0x00000087, 0x000000e9,
	0x000000ce, 0x00000055, 0x00000028, 0x000000df,
	0x0000008c, 0x000000a1, 0x00000089, 0x0000000d,
	0x000000bf, 0x000000e6, 0x00000042, 0x00000068,
	0x00000041, 0x00000099, 0x0000002d, 0x0000000f,
	0x000000b0, 0x00000054, 0x000000bb, 0x00000016
	},
	{
	0x00006300, 0x00007c00, 0x00007700, 0x00007b00,
	0x0000f200, 0x00006b00, 0x00006f00, 0x0000c500,
	0x00003000, 0x00000100, 0x00006700, 0x00002b00,
	0x0000fe00, 0x0000d700, 0x0000ab00, 0x00007600,
	0x0000ca00, 0x00008200, 0x0000c900, 0x00007d00,
	0x0000fa00, 0x00005900, 0x00004700, 0x0000f000,
	0x0000ad00, 0x0000d400, 0x0000a200, 0x0000af00,
	0x00009c00, 0x0000a400, 0x00007200, 0x0000c000,
	0x0000b700, 0x0000fd00, 0x00009300, 0x00002600,
	0x00003600, 0x00003f00, 0x0000f700, 0x0000cc00,
	0x00003400, 0x0000a500, 0x0000e500, 0x0000f100,
	0x00007100, 0x0000d800, 0x00003100, 0x00001500,
	0x00000400, 0x0000c700, 0x00002300, 0x0000c300,
	0x00001800, 0x00009600, 0x00000500, 0x00009a00,
	0x00000700, 0x00001200, 0x00008000, 0x0000e200,
	0x0000eb00, 0x00002700, 0x0000b200, 0x00007500,
	0x00000900, 0x00008300, 0x00002c00, 0x00001a00,
	0x00001b00, 0x00006e00, 0x00005a00, 0x0000a000,
	0x00005200, 0x00003b00, 0x0000d600, 0x0000b300,
	0x00002900, 0x0000e300, 0x00002f00, 0x00008400,
	0x00005300, 0x0000d100, 0x00000000, 0x0000ed00,
	0x00002000, 0x0000fc00, 0x0000b100, 0x00005b00,
	0x00006a00, 0x0000cb00, 0x0000be00, 0x00003900,
	0x00004a00, 0x00004c00, 0x00005800, 0x0000cf00,
	0x0000d000, 0x0000ef00, 0x0000aa00, 0x0000fb00,
	0x00004300, 0x00004d00, 0x00003300, 0x00008500,
	0x00004500, 0x0000f900, 0x00000200, 0x00007f00,
	0x00005000, 0x00003c00, 0x00009f00, 0x0000a800,
	0x00005100, 0x0000a300, 0x00004000, 0x00008f00,
	0x00009200, 0x00009d00, 0x00003800, 0x0000f500,
	0x0000bc00, 0x0000b600, 0x0000da00, 0x00002100,
	0x00001000, 0x0000ff00, 0x0000f300, 0x0000d200,
	0x0000cd00, 0x00000c00, 0x00001300, 0x0000ec00,
	0x00005f00, 0x00009700, 0x00004400, 0x00001700,
	0x0000c400, 0x0000a700, 0x00007e00, 0x00003d00,
	0x00006400, 0x00005d00, 0x00001900, 0x00007300,
	0x00006000, 0x00008100, 0x00004f00, 0x0000dc00,
	0x00002200, 0x00002a00, 0x00009000, 0x00008800,
	0x00004600, 0x0000ee00, 0x0000b800, 0x00001400,
	0x0000de00, 0x00005e00, 0x00000b00, 0x0000db00,
	0x0000e000, 0x00003200, 0x00003a00, 0x00000a00,
	0x00004900, 0x00000600, 0x00002400, 0x00005c00,
	0x0000c200, 0x0000d300, 0x0000ac00, 0x00006200,
	0x00009100, 0x00009500, 0x0000e400, 0x00007900,
	0x0000e700, 0x0000c800, 0x00003700, 0x00006d00,
	0x00008d00, 0x0000d500, 0x00004e00, 0x0000a900,
	0x00006c00, 0x00005600, 0x0000f400, 0x0000ea00,
	0x00006500, 0x00007a00, 0x0000ae00, 0x00000800,
	0x0000ba00, 0x00007800, 0x00002500, 0x00002e00,
	0x00001c00, 0x0000a600, 0x0000b400, 0x0000c600,
	0x0000e800, 0x0000dd00, 0x00007400, 0x00001f00,
	0x00004b00, 0x0000bd00, 0x00008b00, 0x00008a00,
	0x00007000, 0x00003e00, 0x0000b500, 0x00006600,
	0x00004800, 0x00000300, 0x0000f600, 0x00000e00,
	0x00006100, 0x00003500, 0x00005700, 0x0000b900,
	0x00008600, 0x0000c100, 0x00001d00, 0x00009e00,
	0x0000e100, 0x0000f800, 0x00009800, 0x00001100,
	0x00006900, 0x0000d900, 0x00008e00, 0x00009400,
	0x00009b00, 0x00001e00, 0x00008700, 0x0000e900,
	0x0000ce00, 0x00005500, 0x00002800, 0x0000df00,
	0x00008c00, 0x0000a100, 0x00008900, 0x00000d00,
	0x0000bf00, 0x0000e600, 0x00004200, 0x00006800,
	0x00004100, 0x00009900, 0x00002d00, 0x00000f00,
	0x0000b000, 0x00005400, 0x0000bb00, 0x00001600
	},
	{
	0x00630000, 0x007c0000, 0x00770000, 0x007b0000,
	0x00f20000, 0x006b0000, 0x006f0000, 0x00c50000,
	0x00300000, 0x00010000, 0x00670000, 0x002b0000,
	0x00fe0000, 0x00d70000, 0x00ab0000, 0x00760000,
	0x00ca0000, 0x00820000, 0x00c90000, 0x007d0000,
	0x00fa0000, 0x00590000, 0x00470000, 0x00f00000,
	0x00ad0000, 0x00d40000, 0x00a20000, 0x00af0000,
	0x009c0000, 0x00a40000, 0x00720000, 0x00c00000,
	0x00b70000, 0x00fd0000, 0x00930000, 0x00260000,
	0x00360000, 0x003f0000, 0x00f70000, 0x00cc0000,
	0x00340000, 0x00a50000, 0x00e50000, 0x00f10000,
	0x00710000, 0x00d80000, 0x00310000, 0x00150000,
	0x00040000, 0x00c70000, 0x00230000, 0x00c30000,
	0x00180000, 0x00960000, 0x00050000, 0x009a0000,
	0x00070000, 0x00120000, 0x00800000, 0x00e20000,
	0x00eb0000, 0x00270000, 0x00b20000, 0x00750000,
	0x00090000, 0x00830000, 0x002c0000, 0x001a0000,
	0x001b0000, 0x006e0000, 0x005a0000, 0x00a00000,
	0x00520000, 0x003b0000, 0x00d60000, 0x00b30000,
	0x00290000, 0x00e30000, 0x002f0000, 0x00840000,
	0x00530000, 0x00d10000, 0x00000000, 0x00ed0000,
	0x00200000, 0x00fc0000, 0x00b10000, 0x005b0000,
	0x006a0000, 0x00cb0000, 0x00be0000, 0x00390000,
	0x004a0000, 0x004c0000, 0x00580000, 0x00cf0000,
	0x00d00000, 0x00ef0000, 0x00aa0000, 0x00fb0000,
	0x00430000, 0x004d0000, 0x00330000, 0x00850000,
	0x00450000, 0x00f90000, 0x00020000, 0x007f0000,
	0x00500000, 0x003c0000, 0x009f0000, 0x00a80000,
	0x00510000, 0x00a30000, 0x00400000, 0x008f0000,
	0x00920000, 0x009d0000, 0x00380000, 0x00f50000,
	0x00bc0000, 0x00b60000, 0x00da0000, 0x00210000,
	0x00100000, 0x00ff0000, 0x00f30000, 0x00d20000,
	0x00cd0000, 0x000c0000, 0x00130000, 0x00ec0000,
	0x005f0000, 0x00970000, 0x00440000, 0x00170000,
	0x00c40000, 0x00a70000, 0x007e0000, 0x003d0000,
	0x00640000, 0x005d0000, 0x00190000, 0x00730000,
	0x00600000, 0x00810000, 0x004f0000, 0x00dc0000,
	0x00220000, 0x002a0000, 0x00900000, 0x00880000,
	0x00460000, 0x00ee0000, 0x00b80000, 0x00140000,
	0x00de0000, 0x005e0000, 0x000b0000, 0x00db0000,
	0x00e00000, 0x00320000, 0x003a0000, 0x000a0000,
	0x00490000, 0x00060000, 0x00240000, 0x005c0000,
	0x00c20000, 0x00d30000, 0x00ac0000, 0x00620000,
	0x00910000, 0x00950000, 0x00e40000, 0x00790000,
	0x00e70000, 0x00c80000, 0x00370000, 0x006d0000,
	0x008d0000, 0x00d50000, 0x004e0000, 0x00a90000,
	0x006c0000, 0x00560000, 0x00f40000, 0x00ea0000,
	0x00650000, 0x007a0000, 0x00ae0000, 0x00080000,
	0x00ba0000, 0x00780000, 0x00250000, 0x002e0000,
	0x001c0000, 0x00a60000, 0x00b40000, 0x00c60000,
	0x00e80000, 0x00dd0000, 0x00740000, 0x001f0000,
	0x004b0000, 0x00bd0000, 0x008b0000, 0x008a0000,
	0x00700000, 0x003e0000, 0x00b50000, 0x00660000,
	0x00480000, 0x00030000, 0x00f60000, 0x000e0000,
	0x00610000, 0x00350000, 0x00570000, 0x00b90000,
	0x00860000, 0x00c10000, 0x001d0000, 0x009e0000,
	0x00e10000, 0x00f80000, 0x00980000, 0x00110000,
	0x00690000, 0x00d90000, 0x008e0000, 0x00940000,
	0x009b0000, 0x001e0000, 0x00870000, 0x00e90000,
	0x00ce0000, 0x00550000, 0x00280000, 0x00df0000,
	0x008c0000, 0x00a10000, 0x00890000, 0x000d0000,
	0x00bf0000, 0x00e60000, 0x00420000, 0x00680000,
	0x00410000, 0x00990000, 0x002d0000, 0x000f0000,
	0x00b00000, 0x00540000, 0x00bb0000, 0x00160000
	},
	{
	0x63000000, 0x7c000000, 0x77000000, 0x7b000000,
	0xf2000000, 0x6b000000, 0x6f000000, 0xc5000000,
	0x30000000, 0x01000000, 0x67000000, 0x2b000000,
	0xfe000000, 0xd7000000, 0xab000000, 0x76000000,
	0xca000000, 0x82000000, 0xc9000000, 0x7d000000,
	0xfa000000, 0x59000000, 0x47000000, 0xf0000000,
	0xad000000, 0xd4000000, 0xa2000000, 0xaf000000,
	0x9c000000, 0xa4000000, 0x72000000, 0xc0000000,
	0xb7000000, 0xfd000000, 0x93000000, 0x26000000,
	0x36000000, 0x3f000000, 0xf7000000, 0xcc000000,
	0x34000000, 0xa5000000, 0xe5000000, 0xf1000000,
	0x71000000, 0xd8000000, 0x31000000, 0x15000000,
	0x04000000, 0xc7000000, 0x23000000, 0xc3000000,
	0x18000000, 0x96000000, 0x05000000, 0x9a000000,
	0x07000000, 0x12000000, 0x80000000, 0xe2000000,
	0xeb000000, 0x27000000, 0xb2000000, 0x75000000,
	0x09000000, 0x83000000, 0x2c000000, 0x1a000000,
	0x1b000000, 0x6e000000, 0x5a000000, 0xa0000000,
	0x52000000, 0x3b000000, 0xd6000000, 0xb3000000,
	0x29000000, 0xe3000000, 0x2f000000, 0x84000000,
	0x53000000, 0xd1000000, 0x00000000, 0xed000000,
	0x20000000, 0xfc000000, 0xb1000000, 0x5b000000,
	0x6a000000, 0xcb000000, 0xbe000000, 0x39000000,
	0x4a000000, 0x4c000000, 0x58000000, 0xcf000000,
	0xd0000000, 0xef000000, 0xaa000000, 0xfb000000,
	0x43000000, 0x4d000000, 0x33000000, 0x85000000,
	0x45000000, 0xf9000000, 0x02000000, 0x7f000000,
	0x50000000, 0x3c000000, 0x9f000000, 0xa8000000,
	0x51000000, 0xa3000000, 0x40000000, 0x8f000000,
	0x92000000, 0x9d000000, 0x38000000, 0xf5000000,
	0xbc000000, 0xb6000000, 0xda000000, 0x21000000,
	0x10000000, 0xff000000, 0xf3000000, 0xd2000000,
	0xcd000000, 0x0c000000, 0x13000000, 0xec000000,
	0x5f000000, 0x97000000, 0x44000000, 0x17000000,
	0xc4000000, 0xa7000000, 0x7e000000, 0x3d000000,
	0x64000000, 0x5d000000, 0x19000000, 0x73000000,
	0x60000000, 0x81000000, 0x4f000000, 0xdc000000,
	0x22000000, 0x2a000000, 0x90000000, 0x88000000,
	0x46000000, 0xee000000, 0xb8000000, 0x14000000,
	0xde000000, 0x5e000000, 0x0b000000, 0xdb000000,
	0xe0000000, 0x32000000, 0x3a000000, 0x0a000000,
	0x49000000, 0x06000000, 0x24000000, 0x5c000000,
	0xc2000000, 0xd3000000, 0xac000000, 0x62000000,
	0x91000000, 0x95000000, 0xe4000000, 0x79000000,
	0xe7000000, 0xc8000000, 0x37000000, 0x6d000000,
	0x8d000000, 0xd5000000, 0x4e000000, 0xa9000000,
	0x6c000000, 0x56000000, 0xf4000000, 0xea000000,
	0x65000000, 0x7a000000, 0xae000000, 0x08000000,
	0xba000000, 0x78000000, 0x25000000, 0x2e000000,
	0x1c000000, 0xa6000000, 0xb4000000, 0xc6000000,
	0xe8000000, 0xdd000000, 0x74000000, 0x1f000000,
	0x4b000000, 0xbd000000, 0x8b000000, 0x8a000000,
	0x70000000, 0x3e000000, 0xb5000000, 0x66000000,
	0x48000000, 0x03000000, 0xf6000000, 0x0e000000,
	0x61000000, 0x35000000, 0x57000000, 0xb9000000,
	0x86000000, 0xc1000000, 0x1d000000, 0x9e000000,
	0xe1000000, 0xf8000000, 0x98000000, 0x11000000,
	0x69000000, 0xd9000000, 0x8e000000, 0x94000000,
	0x9b000000, 0x1e000000, 0x87000000, 0xe9000000,
	0xce000000, 0x55000000, 0x28000000, 0xdf000000,
	0x8c000000, 0xa1000000, 0x89000000, 0x0d000000,
	0xbf000000, 0xe6000000, 0x42000000, 0x68000000,
	0x41000000, 0x99000000, 0x2d000000, 0x0f000000,
	0xb0000000, 0x54000000, 0xbb000000, 0x16000000
	}
};

static const uint32_t t_im[4][256] =
{
	{
	0x00000000, 0x0b0d090e, 0x161a121c, 0x1d171b12,
	0x2c342438, 0x27392d36, 0x3a2e3624, 0x31233f2a,
	0x58684870, 0x5365417e, 0x4e725a6c, 0x457f5362,
	0x745c6c48, 0x7f516546, 0x62467e54, 0x694b775a,
	0xb0d090e0, 0xbbdd99ee, 0xa6ca82fc, 0xadc78bf2,
	0x9ce4b4d8, 0x97e9bdd6, 0x8afea6c4, 0x81f3afca,
	0xe8b8d890, 0xe3b5d19e, 0xfea2ca8c, 0xf5afc382,
	0xc48cfca8, 0xcf81f5a6, 0xd296eeb4, 0xd99be7ba,
	0x7bbb3bdb, 0x70b632d5, 0x6da129c7, 0x66ac20c9,
	0x578f1fe3, 0x5c8216ed, 0x41950dff, 0x4a9804f1,
	0x23d373ab, 0x28de7aa5, 0x35c961b7, 0x3ec468b9,
	0x0fe75793, 0x04ea5e9d, 0x19fd458f, 0x12f04c81,
	0xcb6bab3b, 0xc066a235, 0xdd71b927, 0xd67cb029,
	0xe75f8f03, 0xec52860d, 0xf1459d1f, 0xfa489411,
	0x9303e34b, 0x980eea45, 0x8519f157, 0x8e14f859,
	0xbf37c773, 0xb43ace7d, 0xa92dd56f, 0xa220dc61,
	0xf66d76ad, 0xfd607fa3, 0xe07764b1, 0xeb7a6dbf,
	0xda595295, 0xd1545b9b, 0xcc434089, 0xc74e4987,
	0xae053edd, 0xa50837d3, 0xb81f2cc1, 0xb31225cf,
	0x82311ae5, 0x893c13eb, 0x942b08f9, 0x9f2601f7,
	0x46bde64d, 0x4db0ef43, 0x50a7f451, 0x5baafd5f,
	0x6a89c275, 0x6184cb7b, 0x7c93d069, 0x779ed967,
	0x1ed5ae3d, 0x15d8a733, 0x08cfbc21, 0x03c2b52f,
	0x32e18a05, 0x39ec830b, 0x24fb9819, 0x2ff69117,
	0x8dd64d76, 0x86db4478, 0x9bcc5f6a, 0x90c15664,
	0xa1e2694e, 0xaaef6040, 0xb7f87b52, 0xbcf5725c,
	0xd5be0506, 0xdeb30c08, 0xc3a4171a, 0xc8a91e14,
	0xf98a213e, 0xf2872830, 0xef903322, 0xe49d3a2c,
	0x3d06dd96, 0x360bd498, 0x2b1ccf8a, 0x2011c684,
	0x1132f9ae, 0x1a3ff0a0, 0x0728ebb2, 0x0c25e2bc,
	0x656e95e6, 0x6e639ce8, 0x737487fa, 0x78798ef4,
	0x495ab1de, 0x4257b8d0, 0x5f40a3c2, 0x544daacc,
	0xf7daec41, 0xfcd7e54f, 0xe1c0fe5d, 0xeacdf753,
	0xdbeec879, 0xd0e3c177, 0xcdf4da65, 0xc6f9d36b,
	0xafb2a431, 0xa4bfad3f, 0xb9a8b62d, 0xb2a5bf23,
	0x83868009, 0x888b8907, 0x959c9215, 0x9e919b1b,
	0x470a7ca1, 0x4c0775af, 0x51106ebd, 0x5a1d67b3,
	0x6b3e5899, 0x60335197, 0x7d244a85, 0x7629438b,
	0x1f6234d1, 0x146f3ddf, 0x097826cd, 0x02752fc3,
	0x335610e9, 0x385b19e7, 0x254c02f5, 0x2e410bfb,
	0x8c61d79a, 0x876cde94, 0x9a7bc586, 0x9176cc88,
	0xa055f3a2, 0xab58faac, 0xb64fe1be, 0xbd42e8b0,
	0xd4099fea, 0xdf0496e4, 0xc2138df6, 0xc91e84f8,
	0xf83dbbd2, 0xf330b2dc, 0xee27a9ce, 0xe52aa0c0,
	0x3cb1477a, 0x37bc4e74, 0x2aab5566, 0x21a65c68,
	0x10856342, 0x1b886a4c, 0x069f715e, 0x0d927850,
	0x64d90f0a, 0x6fd40604, 0x72c31d16, 0x79ce1418,
	0x48ed2b32, 0x43e0223c, 0x5ef7392e, 0x55fa3020,
	0x01b79aec, 0x0aba93e2, 0x17ad88f0, 0x1ca081fe,
	0x2d83bed4, 0x268eb7da, 0x3b99acc8, 0x3094a5c6,
	0x59dfd29c, 0x52d2db92, 0x4fc5c080, 0x44c8c98e,
	0x75ebf6a4, 0x7ee6ffaa, 0x63f1e4b8, 0x68fcedb6,
	0xb1670a0c, 0xba6a0302, 0xa77d1810, 0xac70111e,
	0x9d532e34, 0x965e273a, 0x8b493c28, 0x80443526,
	0xe90f427c, 0xe2024b72, 0xff155060, 0xf418596e,
	0xc53b6644, 0xce366f4a, 0xd3217458, 0xd82c7d56,
	0x7a0ca137, 0x7101a839, 0x6c16b32b, 0x671bba25,
	0x5638850f, 0x5d358c01, 0x40229713, 0x4b2f9e1d,
	0x2264e947, 0x2969e049, 0x347efb5b, 0x3f73f255,
	0x0e50cd7f, 0x055dc471, 0x184adf63, 0x1347d66d,
	0xcadc31d7, 0xc1d138d9, 0xdcc623cb, 0xd7cb2ac5,
	0xe6e815ef, 0xede51ce1, 0xf0f207f3, 0xfbff0efd,
	0x92b479a7, 0x99b970a9, 0x84ae6bbb, 0x8fa362b5,
	0xbe805d9f, 0xb58d5491, 0xa89a4f83, 0xa397468d
	},
	{
	0x00000000, 0x0d090e0b, 0x1a121c16, 0x171b121d,
	0x3424382c, 0x392d3627, 0x2e36243a, 0x233f2a31,
	0x68487058, 0x65417e53, 0x725a6c4e, 0x7f536245,
	0x5c6c4874, 0x5165467f, 0x467e5462, 0x4b775a69,
	0xd090e0b0, 0xdd99eebb, 0xca82fca6, 0xc78bf2ad,
	0xe4b4d89c, 0xe9bdd697, 0xfea6c48a, 0xf3afca81,
	0xb8d890e8, 0xb5d19ee3, 0xa2ca8cfe, 0xafc382f5,
	0x8cfca8c4, 0x81f5a6cf, 0x96eeb4d2, 0x9be7bad9,
	0xbb3bdb7b, 0xb632d570, 0xa129c76d, 0xac20c966,
	0x8f1fe357, 0x8216ed5c, 0x950dff41, 0x9804f14a,
	0xd373ab23, 0xde7aa528, 0xc961b735, 0xc468b93e,
	0xe757930f, 0xea5e9d04, 0xfd458f19, 0xf04c8112,
	0x6bab3bcb, 0x66a235c0, 0x71b927dd, 0x7cb029d6,
	0x5f8f03e7, 0x52860dec, 0x459d1ff1, 0x489411fa,
	0x03e34b93, 0x0eea4598, 0x19f15785, 0x14f8598e,
	0x37c773bf, 0x3ace7db4, 0x2dd56fa9, 0x20dc61a2,
	0x6d76adf6, 0x607fa3fd, 0x7764b1e0, 0x7a6dbfeb,
	0x595295da, 0x545b9bd1, 0x434089cc, 0x4e4987c7,
	0x053eddae, 0x0837d3a5, 0x1f2cc1b8, 0x1225cfb3,
	0x311ae582, 0x3c13eb89, 0x2b08f994, 0x2601f79f,
	0xbde64d46, 0xb0ef434d, 0xa7f45150, 0xaafd5f5b,
	0x89c2756a, 0x84cb7b61, 0x93d0697c, 0x9ed96777,
	0xd5ae3d1e, 0xd8a73315, 0xcfbc2108, 0xc2b52f03,
	0xe18a0532, 0xec830b39, 0xfb981924, 0xf691172f,
	0xd64d768d, 0xdb447886, 0xcc5f6a9b, 0xc1566490,
	0xe2694ea1, 0xef6040aa, 0xf87b52b7, 0xf5725cbc,
	0xbe0506d5, 0xb30c08de, 0xa4171ac3, 0xa91e14c8,
	0x8a213ef9, 0x872830f2, 0x903322ef, 0x9d3a2ce4,
	0x06dd963d, 0x0bd49836, 0x1ccf8a2b, 0x11c68420,
	0x32f9ae11, 0x3ff0a01a, 0x28ebb207, 0x25e2bc0c,
	0x6e95e665, 0x639ce86e, 0x7487fa73, 0x798ef478,
	0x5ab1de49, 0x57b8d042, 0x40a3c25f, 0x4daacc54,
	0xdaec41f7, 0xd7e54ffc, 0xc0fe5de1, 0xcdf753ea,
	0xeec879db, 0xe3c177d0, 0xf4da65cd, 0xf9d36bc6,
	0xb2a431af, 0xbfad3fa4, 0xa8b62db9, 0xa5bf23b2,
	0x86800983, 0x8b890788, 0x9c921595, 0x919b1b9e,
	0x0a7ca147, 0x0775af4c, 0x106ebd51, 0x1d67b35a,
	0x3e58996b, 0x33519760, 0x244a857d, 0x29438b76,
	0x6234d11f, 0x6f3ddf14, 0x7826cd09, 0x752fc302,
	0x5610e933, 0x5b19e738, 0x4c02f525, 0x410bfb2e,
	0x61d79a8c, 0x6cde9487, 0x7bc5869a, 0x76cc8891,
	0x55f3a2a0, 0x58faacab, 0x4fe1beb6, 0x42e8b0bd,
	0x099fead4, 0x0496e4df, 0x138df6c2, 0x1e84f8c9,
	0x3dbbd2f8, 0x30b2dcf3, 0x27a9ceee, 0x2aa0c0e5,
	0xb1477a3c, 0xbc4e7437, 0xab55662a, 0xa65c6821,
	0x85634210, 0x886a4c1b, 0x9f715e06, 0x9278500d,
	0xd90f0a64, 0xd406046f, 0xc31d1672, 0xce141879,
	0xed2b3248, 0xe0223c43, 0xf7392e5e, 0xfa302055,
	0xb79aec01, 0xba93e20a, 0xad88f017, 0xa081fe1c,
	0x83bed42d, 0x8eb7da26, 0x99acc83b, 0x94a5c630,
	0xdfd29c59, 0xd2db9252, 0xc5c0804f, 0xc8c98e44,
	0xebf6a475, 0xe6ffaa7e, 0xf1e4b863, 0xfcedb668,
	0x670a0cb1, 0x6a0302ba, 0x7d1810a7, 0x70111eac,
	0x532e349d, 0x5e273a96, 0x493c288b, 0x44352680,
	0x0f427ce9, 0x024b72e2, 0x155060ff, 0x18596ef4,
	0x3b6644c5, 0x366f4ace, 0x217458d3, 0x2c7d56d8,
	0x0ca1377a, 0x01a83971, 0x16b32b6c, 0x1bba2567,
	0x38850f56, 0x358c015d, 0x22971340, 0x2f9e1d4b,
	0x64e94722, 0x69e04929, 0x7efb5b34, 0x73f2553f,
	0x50cd7f0e, 0x5dc47105, 0x4adf6318, 0x47d66d13,
	0xdc31d7ca, 0xd138d9c1, 0xc623cbdc, 0xcb2ac5d7,
	0xe815efe6, 0xe51ce1ed, 0xf207f3f0, 0xff0efdfb,
	0xb479a792, 0xb970a999, 0xae6bbb84, 0xa362b58f,
	0x805d9fbe, 0x8d5491b5, 0x9a4f83a8, 0x97468da3
	},
	{
	0x00000000, 0x090e0b0d, 0x121c161a, 0x1b121d17,
	0x24382c34, 0x2d362739, 0x36243a2e, 0x3f2a3123,
	0x48705868, 0x417e5365, 0x5a6c4e72, 0x5362457f,
	0x6c48745c, 0x65467f51, 0x7e546246, 0x775a694b,
	0x90e0b0d0, 0x99eebbdd, 0x82fca6ca, 0x8bf2adc7,
	0xb4d89ce4, 0xbdd697e9, 0xa6c48afe, 0xafca81f3,
	0xd890e8b8, 0xd19ee3b5, 0xca8cfea2, 0xc382f5af,
	0xfca8c48c, 0xf5a6cf81, 0xeeb4d296, 0xe7bad99b,
	0x3bdb7bbb, 0x32d570b6, 0x29c76da1, 0x20c966ac,
	0x1fe3578f, 0x16ed5c82, 0x0dff4195, 0x04f14a98,
	0x73ab23d3, 0x7aa528de, 0x61b735c9, 0x68b93ec4,
	0x57930fe7, 0x5e9d04ea, 0x458f19fd, 0x4c8112f0,
	0xab3bcb6b, 0xa235c066, 0xb927dd71, 0xb029d67c,
	0x8f03e75f, 0x860dec52, 0x9d1ff145, 0x9411fa48,
	0xe34b9303, 0xea45980e, 0xf1578519, 0xf8598e14,
	0xc773bf37, 0xce7db43a, 0xd56fa92d, 0xdc61a220,
	0x76adf66d, 0x7fa3fd60, 0x64b1e077, 0x6dbfeb7a,
	0x5295da59, 0x5b9bd154, 0x4089cc43, 0x4987c74e,
	0x3eddae05, 0x37d3a508, 0x2cc1b81f, 0x25cfb312,
	0x1ae58231, 0x13eb893c, 0x08f9942b, 0x01f79f26,
	0xe64d46bd, 0xef434db0, 0xf45150a7, 0xfd5f5baa,
	0xc2756a89, 0xcb7b6184, 0xd0697c93, 0xd967779e,
	0xae3d1ed5, 0xa73315d8, 0xbc2108cf, 0xb52f03c2,
	0x8a0532e1, 0x830b39ec, 0x981924fb, 0x91172ff6,
	0x4d768dd6, 0x447886db, 0x5f6a9bcc, 0x566490c1,
	0x694ea1e2, 0x6040aaef, 0x7b52b7f8, 0x725cbcf5,
	0x0506d5be, 0x0c08deb3, 0x171ac3a4, 0x1e14c8a9,
	0x213ef98a, 0x2830f287, 0x3322ef90, 0x3a2ce49d,
	0xdd963d06, 0xd498360b, 0xcf8a2b1c, 0xc6842011,
	0xf9ae1132, 0xf0a01a3f, 0xebb20728, 0xe2bc0c25,
	0x95e6656e, 0x9ce86e63, 0x87fa7374, 0x8ef47879,
	0xb1de495a, 0xb8d04257, 0xa3c25f40, 0xaacc544d,
	0xec41f7da, 0xe54ffcd7, 0xfe5de1c0, 0xf753eacd,
	0xc879dbee, 0xc177d0e3, 0xda65cdf4, 0xd36bc6f9,
	0xa431afb2, 0xad3fa4bf, 0xb62db9a8, 0xbf23b2a5,
	0x80098386, 0x8907888b, 0x9215959c, 0x9b1b9e91,
	0x7ca1470a, 0x75af4c07, 0x6ebd5110, 0x67b35a1d,
	0x58996b3e, 0x51976033, 0x4a857d24, 0x438b7629,
	0x34d11f62, 0x3ddf146f, 0x26cd0978, 0x2fc30275,
	0x10e93356, 0x19e7385b, 0x02f5254c, 0x0bfb2e41,
	0xd79a8c61, 0xde94876c, 0xc5869a7b, 0xcc889176,
	0xf3a2a055, 0xfaacab58, 0xe1beb64f, 0xe8b0bd42,
	0x9fead409, 0x96e4df04, 0x8df6c213, 0x84f8c91e,
	0xbbd2f83d, 0xb2dcf330, 0xa9ceee27, 0xa0c0e52a,
	0x477a3cb1, 0x4e7437bc, 0x55662aab, 0x5c6821a6,
	0x63421085, 0x6a4c1b88, 0x715e069f, 0x78500d92,
	0x0f0a64d9, 0x06046fd4, 0x1d1672c3, 0x141879ce,
	0x2b3248ed, 0x223c43e0, 0x392e5ef7, 0x302055fa,
	0x9aec01b7, 0x93e20aba, 0x88f017ad, 0x81fe1ca0,
	0xbed42d83, 0xb7da268e, 0xacc83b99, 0xa5c63094,
	0xd29c59df, 0xdb9252d2, 0xc0804fc5, 0xc98e44c8,
	0xf6a475eb, 0xffaa7ee6, 0xe4b863f1, 0xedb668fc,
	0x0a0cb167, 0x0302ba6a, 0x1810a77d, 0x111eac70,
	0x2e349d53, 0x273a965e, 0x3c288b49, 0x35268044,
	0x427ce90f, 0x4b72e202, 0x5060ff15, 0x596ef418,
	0x6644c53b, 0x6f4ace36, 0x7458d321, 0x7d56d82c,
	0xa1377a0c, 0xa8397101, 0xb32b6c16, 0xba25671b,
	0x850f5638, 0x8c015d35, 0x97134022, 0x9e1d4b2f,
	0xe9472264, 0xe0492969, 0xfb5b347e, 0xf2553f73,
	0xcd7f0e50, 0xc471055d, 0xdf63184a, 0xd66d1347,
	0x31d7cadc, 0x38d9c1d1, 0x23cbdcc6, 0x2ac5d7cb,
	0x15efe6e8, 0x1ce1ede5, 0x07f3f0f2, 0x0efdfbff,
	0x79a792b4, 0x70a999b9, 0x6bbb84ae, 0x62b58fa3,
	0x5d9fbe80, 0x5491b58d, 0x4f83a89a, 0x468da397
	},
	{
	0x00000000, 0x0e0b0d09, 0x1c161a12, 0x121d171b,
	0x382c3424, 0x3627392d, 0x243a2e36, 0x2a31233f,
	0x70586848, 0x7e536541, 0x6c4e725a, 0x62457f53,
	0x48745c6c, 0x467f5165, 0x5462467e, 0x5a694b77,
	0xe0b0d090, 0xeebbdd99, 0xfca6ca82, 0xf2adc78b,
	0xd89ce4b4, 0xd697e9bd, 0xc48afea6, 0xca81f3af,
	0x90e8b8d8, 0x9ee3b5d1, 0x8cfea2ca, 0x82f5afc3,
	0xa8c48cfc, 0xa6cf81f5, 0xb4d296ee, 0xbad99be7,
	0xdb7bbb3b, 0xd570b632, 0xc76da129, 0xc966ac20,
	0xe3578f1f, 0xed5c8216, 0xff41950d, 0xf14a9804,
	0xab23d373, 0xa528de7a, 0xb735c961, 0xb93ec468,
	0x930fe757, 0x9d04ea5e, 0x8f19fd45, 0x8112f04c,
	0x3bcb6bab, 0x35c066a2, 0x27dd71b9, 0x29d67cb0,
	0x03e75f8f, 0x0dec5286, 0x1ff1459d, 0x11fa4894,
	0x4b9303e3, 0x45980eea, 0x578519f1, 0x598e14f8,
	0x73bf37c7, 0x7db43ace, 0x6fa92dd5, 0x61a220dc,
	0xadf66d76, 0xa3fd607f, 0xb1e07764, 0xbfeb7a6d,
	0x95da5952, 0x9bd1545b, 0x89cc4340, 0x87c74e49,
	0xddae053e, 0xd3a50837, 0xc1b81f2c, 0xcfb31225,
	0xe582311a, 0xeb893c13, 0xf9942b08, 0xf79f2601,
	0x4d46bde6, 0x434db0ef, 0x5150a7f4, 0x5f5baafd,
	0x756a89c2, 0x7b6184cb, 0x697c93d0, 0x67779ed9,
	0x3d1ed5ae, 0x3315d8a7, 0x2108cfbc, 0x2f03c2b5,
	0x0532e18a, 0x0b39ec83, 0x1924fb98, 0x172ff691,
	0x768dd64d, 0x7886db44, 0x6a9bcc5f, 0x6490c156,
	0x4ea1e269, 0x40aaef60, 0x52b7f87b, 0x5cbcf572,
	0x06d5be05, 0x08deb30c, 0x1ac3a417, 0x14c8a91e,
	0x3ef98a21, 0x30f28728, 0x22ef9033, 0x2ce49d3a,
	0x963d06dd, 0x98360bd4, 0x8a2b1ccf, 0x842011c6,
	0xae1132f9, 0xa01a3ff0, 0xb20728eb, 0xbc0c25e2,
	0xe6656e95, 0xe86e639c, 0xfa737487, 0xf478798e,
	0xde495ab1, 0xd04257b8, 0xc25f40a3, 0xcc544daa,
	0x41f7daec, 0x4ffcd7e5, 0x5de1c0fe, 0x53eacdf7,
	0x79dbeec8, 0x77d0e3c1, 0x65cdf4da, 0x6bc6f9d3,
	0x31afb2a4, 0x3fa4bfad, 0x2db9a8b6, 0x23b2a5bf,
	0x09838680, 0x07888b89, 0x15959c92, 0x1b9e919b,
	0xa1470a7c, 0xaf4c0775, 0xbd51106e, 0xb35a1d67,
	0x996b3e58, 0x97603351, 0x857d244a, 0x8b762943,
	0xd11f6234, 0xdf146f3d, 0xcd097826, 0xc302752f,
	0xe9335610, 0xe7385b19, 0xf5254c02, 0xfb2e410b,
	0x9a8c61d7, 0x94876cde, 0x869a7bc5, 0x889176cc,
	0xa2a055f3, 0xacab58fa, 0xbeb64fe1, 0xb0bd42e8,
	0xead4099f, 0xe4df0496, 0xf6c2138d, 0xf8c91e84,
	0xd2f83dbb, 0xdcf330b2, 0xceee27a9, 0xc0e52aa0,
	0x7a3cb147, 0x7437bc4e, 0x662aab55, 0x6821a65c,
	0x42108563, 0x4c1b886a, 0x5e069f71, 0x500d9278,
	0x0a64d90f, 0x046fd406, 0x1672c31d, 0x1879ce14,
	0x3248ed2b, 0x3c43e022, 0x2e5ef739, 0x2055fa30,
	0xec01b79a, 0xe20aba93, 0xf017ad88, 0xfe1ca081,
	0xd42d83be, 0xda268eb7, 0xc83b99ac, 0xc63094a5,
	0x9c59dfd2, 0x9252d2db, 0x804fc5c0, 0x8e44c8c9,
	0xa475ebf6, 0xaa7ee6ff, 0xb863f1e4, 0xb668fced,
	0x0cb1670a, 0x02ba6a03, 0x10a77d18, 0x1eac7011,
	0x349d532e, 0x3a965e27, 0x288b493c, 0x26804435,
	0x7ce90f42, 0x72e2024b, 0x60ff1550, 0x6ef41859,
	0x44c53b66, 0x4ace366f, 0x58d32174, 0x56d82c7d,
	0x377a0ca1, 0x397101a8, 0x2b6c16b3, 0x25671bba,
	0x0f563885, 0x015d358c, 0x13402297, 0x1d4b2f9e,
	0x472264e9, 0x492969e0, 0x5b347efb, 0x553f73f2,
	0x7f0e50cd, 0x71055dc4, 0x63184adf, 0x6d1347d6,
	0xd7cadc31, 0xd9c1d138, 0xcbdcc623, 0xc5d7cb2a,
	0xefe6e815, 0xe1ede51c, 0xf3f0f207, 0xfdfbff0e,
	0xa792b479, 0xa999b970, 0xbb84ae6b, 0xb58fa362,
	0x9fbe805d, 0x91b58d54, 0x83a89a4f, 0x8da39746
	}
};

#ifdef	__cplusplus
}
#endif

#endif	/* _AESTAB2_H */
