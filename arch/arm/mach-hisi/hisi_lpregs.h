/*
 * The codes for io debugging, and could checkout unexpected
 * status of all io/clk/pmu before system into SUSPEND.
 *
 * Copyright (C) 2013-2014 Hisilicon
 * License terms: GNU General Public License (GPL) version 2
 *
 */
#ifndef	__HISI_LPREGS_H
#define	__HISI_LPREGS_H

#define LOW_POWER(imo, imv, ico, icv, gpiog, gpiob, gpiod, gpiov) \
{				\
	.uiomg_off = imo,  .iomg_val = imv,   \
	.uiocg_off = ico,  .iocg_val  = icv,   \
	.ugpiog    = gpiog, .ugpio_bit = gpiob, \
	.gpio_dir  = gpiod, .gpio_val  = gpiov, \
}

#define FUNC0		0X0
#define FUNC1		0X1
#define FUNC2		0X2
#define FUNC3		0X3
#define FUNC4		0X4
#define FUNC5		0X5
#define FUNC6		0X6
#define FUNC7		0X7
#define NOPULL		0X0
#define PULLUP		0X1
#define PULLDOWN	0X2
#define OUT		1
#define IN		0
#define LOW		0x0
#define HIGH		0x1
#define N		-1
#define IO_LIST_LENGTH (sizeof(hisi_iocfg_lookups)/sizeof(hisi_iocfg_lookups[0]))

static char pulltype[][9] = {"NP", "PU", "PD"};

struct iocfg_lp {
	unsigned int uiomg_off;
	int iomg_val;
	unsigned int uiocg_off;
	int iocg_val;
	unsigned int ugpiog;
	unsigned int ugpio_bit;
	int gpio_dir;
	int gpio_val;
};

struct iocfg_lp hisi_iocfg_lookups[] = {
	//GPIO_002
	LOW_POWER(0x008, FUNC0, 0x01c, NOPULL,   0, 2, IN, LOW),
	//GPIO_003
	LOW_POWER(0x00c, FUNC0, 0x020, NOPULL,   0, 3, OUT, HIGH),
	//GPIO_004
	LOW_POWER(0x010, FUNC0, 0x024, NOPULL,   0, 4, IN, LOW),
	//GPIO_005
	LOW_POWER(0x014, FUNC0, 0x028, PULLDOWN,   0, 5, IN, LOW),
	//GPIO_006
	LOW_POWER(0x018, FUNC0, 0x02c, PULLDOWN,   0, 6, IN, LOW),
	//GPIO_007
	LOW_POWER(0x018, FUNC0, 0x030, PULLDOWN,   0, 7, IN, LOW),
	//GPIO_008
	LOW_POWER(0x01c, FUNC0, 0x034, PULLDOWN,   1, 0, IN, LOW),
	//GPIO_009
	LOW_POWER(0x01c, FUNC0, 0x038, PULLDOWN,   1, 1, IN, LOW),
	//GPIO_010
	LOW_POWER(0x01c, FUNC0, 0x03c, PULLDOWN,   1, 2, IN, LOW),
	//GPIO_011
	LOW_POWER(0x01c, FUNC0, 0x040, PULLDOWN,   1, 3, IN, LOW),
	//GPIO_012
	LOW_POWER(0x01c, FUNC0, 0x044, PULLDOWN,   1, 4, IN, LOW),
	//GPIO_013
	LOW_POWER(0x01c, FUNC0, 0x048, PULLDOWN,   1, 5, IN, LOW),
	//GPIO_014
	LOW_POWER(0x01c, FUNC0, 0x04c, PULLDOWN,   1, 6, IN, LOW),
	//GPIO_015
	LOW_POWER(0x01c, FUNC0, 0x050, PULLDOWN,   1, 7, IN, LOW),
	//GPIO_016
	LOW_POWER(0x020, FUNC0, 0x054, PULLDOWN,   2, 0, IN, LOW),
	//GPIO_017
	LOW_POWER(0x024, FUNC0, 0x058, NOPULL,   2, 1, IN, LOW),
	//GPIO_018
	LOW_POWER(0x028, FUNC0, 0x05c, NOPULL,   2, 2, IN, LOW),
	//GPIO_019
	LOW_POWER(0x02c, FUNC0, 0x060, NOPULL,   2, 3, IN, LOW),
	//GPIO_020
	LOW_POWER(0x030, FUNC0, 0x064, NOPULL,   2, 4, IN, LOW),
	//GPIO_021
	LOW_POWER(0x034, FUNC0, 0x068, PULLDOWN,   2, 5, IN, LOW),
	//GPIO_022
	LOW_POWER(0x038, FUNC0, 0x06c, PULLDOWN,   2, 6, IN, LOW),
	//GPIO_023
	LOW_POWER(0x03c, FUNC0, 0x070, PULLDOWN,   2, 7, IN, LOW),
	//GPIO_024
	LOW_POWER(0x040, FUNC0, 0x074, PULLDOWN,   3, 0, IN, LOW),
	//GPIO_025
	LOW_POWER(0x044, FUNC0, 0x078, PULLDOWN,   3, 1, IN, LOW),
	//GPIO_026
	LOW_POWER(0x048, FUNC0, 0x07c, PULLDOWN,   3, 2, IN, LOW),
	//GPIO_027
	LOW_POWER(0x04c, FUNC0, 0x080, NOPULL,   3, 3, IN, LOW),
	//GPIO_028
	LOW_POWER(0x050, FUNC0, 0x084, NOPULL,   3, 4, IN, LOW),
	//GPIO_029
	LOW_POWER(0x054, FUNC0, 0x088, PULLDOWN,   3, 5, IN, LOW),
	//GPIO_030
	LOW_POWER(0x058, FUNC0, 0x08c, PULLDOWN,   3, 6, IN, LOW),
	//GPIO_031
	LOW_POWER(0x05c, FUNC0, 0x090, PULLDOWN,   3, 7, IN, LOW),
	//GPIO_032
	LOW_POWER(0x060, FUNC0, 0x094, PULLDOWN,   4, 0, IN, LOW),
	//GPIO_033
	LOW_POWER(0x064, FUNC0, 0x098, PULLDOWN,   4, 1, IN, LOW),
	//GPIO_034
	LOW_POWER(0x068, FUNC0, 0x09c, PULLDOWN,   4, 2, IN, LOW),
	//GPIO_035
	LOW_POWER(0x06c, FUNC0, 0x0a0, NOPULL,   4, 3, IN, LOW),
	//GPIO_036
	LOW_POWER(0x070, FUNC0, 0x0a4, PULLDOWN,   4, 4, IN, LOW),
	//GPIO_037
	LOW_POWER(0x074, FUNC0, 0x0a8, PULLDOWN,   4, 5, IN, LOW),
	//GPIO_038
	LOW_POWER(0x078, FUNC0, 0x0ac, NOPULL,   4, 6, IN, LOW),
	//GPIO_039
	LOW_POWER(0x07c, FUNC0, 0x0b0, NOPULL,   4, 7, IN, LOW),
	//GPIO_040
	LOW_POWER(0x080, FUNC0, 0x0b4, NOPULL,   5, 0, IN, LOW),
	//GPIO_041
	LOW_POWER(0x084, FUNC0, 0x0b8, PULLDOWN,   5, 1, IN, LOW),
	//GPIO_042
	LOW_POWER(0x088, FUNC0, 0x0bc, PULLDOWN,   5, 2, IN, LOW),
	//GPIO_043
	LOW_POWER(0x08c, FUNC0, 0x0c0, PULLDOWN,   5, 3, IN, LOW),
	//GPIO_044
	LOW_POWER(0x090, FUNC0, 0x0c4, PULLDOWN,   5, 4, IN, LOW),
	//GPIO_045
	LOW_POWER(0x094, FUNC0, 0x0c8, PULLDOWN,   5, 5, IN, LOW),
	//GPIO_046
	LOW_POWER(0x098, FUNC0, 0x0cc, PULLDOWN,   5, 6, IN, LOW),
	//GPIO_047
	LOW_POWER(0x09c, FUNC0, 0x0d0, NOPULL,   5, 7, IN, LOW),
	//GPIO_048
	LOW_POWER(0x09c, FUNC0, 0x0d4, NOPULL,   6, 0, IN, LOW),
	//GPIO_049
	LOW_POWER(0x0a0, FUNC0, 0x0d8, NOPULL,   6, 1, IN, LOW),
	//GPIO_050
	LOW_POWER(0x0a0, FUNC0, 0x0dc, NOPULL,   6, 2, IN, LOW),
	//GPIO_051
	LOW_POWER(0x0a4, FUNC0, 0x0e0, PULLDOWN,   6, 3, IN, LOW),
	//GPIO_052
	LOW_POWER(0x0a4, FUNC0, 0x0e4, PULLDOWN,   6, 4, IN, LOW),
	//GPIO_053
	LOW_POWER(0x0a8, FUNC0, 0x0e8, NOPULL,   6, 5, IN, LOW),
	//GPIO_054
	LOW_POWER(0x0a8, FUNC0, 0x0ec, NOPULL,   6, 6, IN, LOW),
	//GPIO_055
	LOW_POWER(0x0ac, FUNC0, 0x0f0, NOPULL,   6, 7, IN, LOW),
	//GPIO_056
	LOW_POWER(0x0ac, FUNC0, 0x0f4, NOPULL,   7, 0, IN, LOW),
	//GPIO_057
	LOW_POWER(0x0b0, FUNC0, 0x0f8, PULLDOWN,   7, 1, IN, LOW),
	//GPIO_058
	LOW_POWER(0x0b4, FUNC0, 0x0fc, PULLDOWN,   7, 2, IN, LOW),
	//GPIO_059
	LOW_POWER(0x0b4, FUNC0, 0x100, PULLDOWN,   7, 3, IN, LOW),
	//GPIO_060
	LOW_POWER(0x0b4, FUNC0, 0x104, PULLDOWN,   7, 4, IN, LOW),
	//GPIO_061
	LOW_POWER(0x0b4, FUNC0, 0x108, PULLDOWN,   7, 5, IN, LOW),
	//GPIO_062
	LOW_POWER(0x0b8, FUNC0, 0x10c, PULLDOWN,   7, 6, IN, LOW),
	//GPIO_063
	LOW_POWER(0x0bc, FUNC0, 0x110, PULLDOWN,   7, 7, IN, LOW),
	//GPIO_064
	LOW_POWER(0x0bc, FUNC0, 0x114, PULLDOWN,   8, 0, IN, LOW),
	//GPIO_065
	LOW_POWER(0x0c0, FUNC0, 0x118, PULLDOWN,   8, 1, IN, LOW),
	//GPIO_066
	LOW_POWER(0x0c4, FUNC0, 0x11c, PULLDOWN,   8, 2, IN, LOW),
	//GPIO_067
	LOW_POWER(0x0c8, FUNC0, 0x120, PULLDOWN,   8, 3, IN, LOW),
	//GPIO_068
	LOW_POWER(0x0cc, FUNC0, 0x124, PULLDOWN,   8, 4, IN, LOW),
	//GPIO_069
	LOW_POWER(0x0d0, FUNC0, 0x128, NOPULL,   8, 5, IN, LOW),
	//GPIO_070
	LOW_POWER(0x0d4, FUNC0, 0x12c, PULLDOWN,   8, 6, IN, LOW),
	//GPIO_071
	LOW_POWER(0x0d4, FUNC0, 0x130, PULLDOWN,   8, 7, IN, LOW),
	//GPIO_072
	LOW_POWER(0x0d8, FUNC0, 0x134, PULLDOWN,   9, 0, IN, LOW),
	//GPIO_073
	LOW_POWER(0x0dc, FUNC0, 0x138, PULLDOWN,   9, 1, IN, LOW),
	//GPIO_074
	LOW_POWER(0x0e0, FUNC0, 0x13c, PULLDOWN,   9, 2, IN, LOW),
	//GPIO_075
	LOW_POWER(0x0e0, FUNC0, 0x140, PULLDOWN,   9, 3, IN, LOW),
	//GPIO_076
	LOW_POWER(0x0e4, FUNC0, 0x144, PULLDOWN,   9, 4, IN, LOW),
	//GPIO_077
	LOW_POWER(0x0e8, FUNC0, 0x148, PULLDOWN,   9, 5, IN, LOW),
	//GPIO_078
	LOW_POWER(0x0e8, FUNC0, 0x14c, PULLDOWN,   9, 6, IN, LOW),
	//GPIO_079
	LOW_POWER(0x0e8, FUNC0, 0x150, PULLDOWN,   9, 7, IN, LOW),
	//GPIO_080
	LOW_POWER(0x0ec, FUNC0, 0x154, PULLDOWN,  10, 0, IN, LOW),
	//GPIO_081
	LOW_POWER(0x0e8, FUNC0, 0x158, PULLDOWN,  10, 1, IN, LOW),
	//GPIO_082
	LOW_POWER(0x0e8, FUNC0, 0x15c, PULLDOWN,  10, 2, IN, LOW),
	//GPIO_083
	LOW_POWER(0x0f0, FUNC0, 0x160, NOPULL,  10, 3, IN, LOW),
	//GPIO_084
	LOW_POWER(0x0f0, FUNC0, 0x164, PULLUP,  10, 4, IN, LOW),
	//GPIO_085
	LOW_POWER(0x0f4, FUNC0, 0x168, PULLUP,  10, 5, IN, LOW),
	//GPIO_086
	LOW_POWER(0x0f4, FUNC0, 0x16c, PULLUP,  10, 6, IN, LOW),
	//GPIO_087
	LOW_POWER(0x0f8, FUNC0, 0x170, PULLDOWN,  10, 7, IN, LOW),
	//GPIO_088
	LOW_POWER(0x0f8, FUNC0, 0x174, PULLDOWN,  11, 0, IN, LOW),
	//GPIO_089
	LOW_POWER(0x0fc, FUNC0, 0x178, NOPULL,  11, 1, IN, LOW),
	//GPIO_090
	LOW_POWER(0x0fc, FUNC0, 0x17c, NOPULL,  11, 2, IN, LOW),
	//GPIO_091
	LOW_POWER(0x100, FUNC0, 0x180, PULLDOWN,  11, 3, IN, LOW),
	//GPIO_092
	LOW_POWER(0x100, FUNC0, 0x184, PULLDOWN,  11, 4, IN, LOW),
	//GPIO_093
	LOW_POWER(0x104, FUNC0, 0x188, PULLDOWN,  11, 5, IN, LOW),
	//GPIO_094
	LOW_POWER(0x104, FUNC0, 0x18c, PULLDOWN,  11, 6, IN, LOW),
	//GPIO_095
	LOW_POWER(0x108, FUNC0, 0x190, PULLDOWN,  11, 7, IN, LOW),
	//GPIO_096
	LOW_POWER(0x10c, FUNC0, 0x194, PULLDOWN,  12, 0, IN, LOW),
	//GPIO_097
	LOW_POWER(0x110, FUNC0, 0x198, PULLDOWN,  12, 1, IN, LOW),
	//GPIO_098
	LOW_POWER(0x114, FUNC0, 0x19c, PULLDOWN,  12, 2, IN, LOW),
	//GPIO_099
	LOW_POWER(0x118, FUNC0, 0x1a0, PULLDOWN,  12, 3, IN, LOW),
	//GPIO_100
	LOW_POWER(0x11c, FUNC0, 0x1a4, PULLDOWN,  12, 4, IN, LOW),
	//GPIO_101
	LOW_POWER(0x120, FUNC0, 0x1a8, PULLDOWN,  12, 5, IN, LOW),
	//GPIO_102
	LOW_POWER(0x124, FUNC0, 0x1ac, PULLDOWN,  12, 6, IN, LOW),
	//GPIO_103
	LOW_POWER(0x128, FUNC0, 0x1b0, PULLDOWN,  12, 7, IN, LOW),
	//GPIO_104
	LOW_POWER(0x12c, FUNC0, 0x1b4, PULLDOWN,  13, 0, IN, LOW),
	//GPIO_105
	LOW_POWER(0x130, FUNC0, 0x1b8, NOPULL,  13, 1, IN, LOW),
	//GPIO_106
	LOW_POWER(0x134, FUNC0, 0x1bc, PULLDOWN,  13, 2, IN, LOW),
	//GPIO_107
	LOW_POWER(0x138, FUNC0, 0x1c0, PULLDOWN,  13, 3, IN, LOW),
	//GPIO_108
	LOW_POWER(0x13c, FUNC0, 0x1c4, NOPULL,  13, 4, IN, LOW),
	//GPIO_109
	LOW_POWER(0x140, FUNC0, 0x1c8, PULLDOWN,  13, 5, IN, LOW),
	//GPIO_110
	LOW_POWER(0x144, FUNC0, 0x1cc, PULLDOWN,  13, 6, IN, LOW),
	//GPIO_111
	LOW_POWER(0x148, FUNC0, 0x1d0, PULLDOWN,  13, 7, IN, LOW),
	//GPIO_112
	LOW_POWER(0x14c, FUNC0, 0x1d4, PULLDOWN,  14, 0, IN, LOW),
	//GPIO_113
	LOW_POWER(0x150, FUNC0, 0x1d8, PULLDOWN,  14, 1, IN, LOW),
	//GPIO_114
	LOW_POWER(0x154, FUNC0, 0x1dc, PULLDOWN,  14, 2, IN, LOW),
	//GPIO_115
	LOW_POWER(0x158, FUNC0, 0x1e0, PULLDOWN,  14, 3, IN, LOW),
	//GPIO_116
	LOW_POWER(0x15c, FUNC0, 0x1e4, PULLDOWN,  14, 4, IN, LOW),
	//GPIO_117
	LOW_POWER(0x160, FUNC0, 0x1e8, PULLDOWN,  14, 5, IN, LOW),
	//GPIO_118
	LOW_POWER(0x164, FUNC0, 0x1ec, PULLDOWN,  14, 6, IN, LOW),
	//GPIO_119
	LOW_POWER(0x168, FUNC0, 0x1f0, PULLDOWN,  14, 7, IN, LOW),
	//GPIO_120
	LOW_POWER(0x16c, FUNC0, 0x1f4, PULLDOWN,  15, 0, IN, LOW),
	//GPIO_121
	LOW_POWER(0x170, FUNC0, 0x1f8, PULLDOWN,  15, 1, IN, LOW),
	//GPIO_122
	LOW_POWER(0x174, FUNC0, 0x1fc, PULLDOWN,  15, 2, IN, LOW),
	//GPIO_123
	LOW_POWER(0x178, FUNC0, 0x200, PULLDOWN,  15, 3, IN, LOW),
	//GPIO_124
	LOW_POWER(0x17c, FUNC0, 0x204, PULLDOWN,  15, 4, IN, LOW),
	//GPIO_125
	LOW_POWER(0x180, FUNC0, 0x208, PULLDOWN,  15, 5, IN, LOW),
	//GPIO_126
	LOW_POWER(0x184, FUNC0, 0x20c, PULLDOWN,  15, 6, IN, LOW),
	//GPIO_127
	LOW_POWER(0x188, FUNC0, 0x210, PULLDOWN,  15, 7, IN, LOW),
	//GPIO_128
	LOW_POWER(0x18c, FUNC0, 0x214, PULLDOWN,  16, 0, IN, LOW),
	//GPIO_129
	LOW_POWER(0x190, FUNC0, 0x218, PULLDOWN,  16, 1, IN, LOW),
	//GPIO_130
	LOW_POWER(0x194, FUNC0, 0x21c, PULLDOWN,  16, 2, IN, LOW),
	//GPIO_131
	LOW_POWER(0x198, FUNC0, 0x220, PULLDOWN,  16, 3, IN, LOW),
	//GPIO_132
	LOW_POWER(0x19c, FUNC0, 0x224, PULLDOWN,  16, 4, IN, LOW),
	//GPIO_133
	LOW_POWER(0x1a0, FUNC0, 0x228, PULLDOWN,  16, 5, IN, LOW),
	//GPIO_134
	LOW_POWER(0x1a4, FUNC0, 0x22c, PULLDOWN,  16, 6, IN, LOW),
	//GPIO_135
	LOW_POWER(0x1a8, FUNC0, 0x230, PULLDOWN,  16, 7, IN, LOW),
	//GPIO_136
	LOW_POWER(0x1ac, FUNC0, 0x234, PULLDOWN,  17, 0, IN, LOW),
	//GPIO_137
	LOW_POWER(0x1b0, FUNC0, 0x238, PULLDOWN,  17, 1, IN, LOW),
	//GPIO_138
	LOW_POWER(0x1b4, FUNC0, 0x23c, PULLDOWN,  17, 2, IN, LOW),
	//GPIO_139
	LOW_POWER(0x1b8, FUNC0, 0x240, PULLDOWN,  17, 3, IN, LOW),
	//GPIO_140
	LOW_POWER(0x1bc, FUNC0, 0x244, PULLDOWN,  17, 4, IN, LOW),
	//GPIO_141
	LOW_POWER(0x1c0, FUNC0, 0x248, PULLDOWN,  17, 5, IN, LOW),
	//GPIO_142
	LOW_POWER(0x1c4, FUNC0, 0x24c, PULLDOWN,  17, 6, IN, LOW),
	//GPIO_143
	LOW_POWER(0x1c8, FUNC0, 0x250, PULLDOWN,  17, 7, IN, LOW),
	//GPIO_144
	LOW_POWER(0x1cc, FUNC0, 0x254, PULLDOWN,  18, 0, IN, LOW),
	//GPIO_145
	LOW_POWER(0x1d0, FUNC0, 0x258, PULLDOWN,  18, 1, IN, LOW),
	//GPIO_146
	LOW_POWER(0x1d4, FUNC0, 0x25c, PULLDOWN,  18, 2, IN, LOW),
	//GPIO_147
	LOW_POWER(0x1d8, FUNC0, 0x260, PULLDOWN,  18, 3, IN, LOW),
	//GPIO_148
	LOW_POWER(0x1dc, FUNC0, 0x264, PULLDOWN,  18, 4, IN, LOW),
	//GPIO_149
	LOW_POWER(0x1e0, FUNC0, 0x268, PULLDOWN,  18, 5, IN, LOW),
	//GPIO_150
	LOW_POWER(0x1e4, FUNC0, 0x26c, PULLDOWN,  18, 6, IN, LOW),
	//GPIO_151
	LOW_POWER(0x1e8, FUNC0, 0x270, PULLDOWN,  18, 7, IN, LOW),
	//GPIO_152
	LOW_POWER(0x1ec, FUNC0, 0x274, PULLDOWN,  19, 0, IN, LOW),
	//GPIO_153
	LOW_POWER(0x1f0, FUNC0, 0x278, PULLDOWN,  19, 1, IN, LOW),
	//GPIO_154
	LOW_POWER(0x1f4, FUNC0, 0x27c, PULLDOWN,  19, 2, IN, LOW),
	//GPIO_155
	LOW_POWER(0x000, FUNC0, 0x00c, PULLDOWN,  19, 3, IN, LOW),
	//GPIO_156
	LOW_POWER(0x004, FUNC0, 0x010, PULLDOWN,  19, 4, IN, LOW),
	//GPIO_157
	LOW_POWER(N, FUNC0, 0x280, PULLUP,  19, 5, IN, LOW),
	//GPIO_158
	LOW_POWER(N, FUNC0, 0x284, PULLDOWN,  19, 6, IN, LOW),
	//GPIO_159
	LOW_POWER(N, FUNC0, 0x288, PULLDOWN,  19, 7, IN, LOW),
	//GPIO_160
	LOW_POWER(N, FUNC0, 0x28c, PULLDOWN,  20, 0, IN, LOW),
	//GPIO_161
	LOW_POWER(N, FUNC0, 0x290, PULLDOWN,  20, 1, IN, LOW),
	//GPIO_162
	LOW_POWER(N, FUNC0, 0x294, PULLDOWN,  20, 2, IN, LOW),
	//GPIO_163
	LOW_POWER(N, FUNC0, 0x298, PULLDOWN,  20, 3, IN, LOW),
	//GPIO_164
	LOW_POWER(N, FUNC0, 0x29c, PULLDOWN,  20, 4, IN, LOW),
	//GPIO_165
	LOW_POWER(N, FUNC0, 0x2a0, NOPULL,  20, 5, IN, LOW),
	//GPIO_166
	LOW_POWER(N, FUNC0, 0x2a4, NOPULL,  20, 6, IN, LOW),
	//GPIO_167
	LOW_POWER(N, FUNC0, 0x2a8, NOPULL,  20, 7, IN, LOW),
	//GPIO_168
	LOW_POWER(N, FUNC0, 0x2ac, NOPULL,  21, 0, IN, LOW),
	//GPIO_169
	LOW_POWER(N, FUNC0, 0x2b0, NOPULL,  21, 1, IN, LOW),
	//GPIO_170
	LOW_POWER(N, FUNC0, 0x2b4, NOPULL,  21, 2, IN, LOW),
	//GPIO_171
	LOW_POWER(N, FUNC0, 0x2b8, NOPULL,  21, 3, IN, LOW),
	//GPIO_172
	LOW_POWER(N, FUNC0, 0x2bc, NOPULL,  21, 4, IN, LOW),
	//GPIO_173
	LOW_POWER(N, FUNC0, 0x2c0, NOPULL,  21, 5, IN, LOW),
	//GPIO_174
	LOW_POWER(N, FUNC0, 0x2c4, NOPULL,  21, 6, IN, LOW),
	//GPIO_175
	LOW_POWER(N, FUNC0, 0x2c8, NOPULL,  21, 7, IN, LOW),
	//GPIO_176
	LOW_POWER(0x000, FUNC0, 0x000, NOPULL,  22, 0, IN, LOW),
	//GPIO_177
	LOW_POWER(0x004, FUNC0, 0x004, NOPULL,  22, 1, IN, LOW),
	//GPIO_178
	LOW_POWER(0x008, FUNC0, 0x008, NOPULL,  22, 2, IN, LOW),
	//GPIO_179
	LOW_POWER(0x00c, FUNC0, 0x00c, NOPULL,  22, 3, OUT, HIGH),
	//GPIO_180
	LOW_POWER(0x010, FUNC0, 0x010, NOPULL,  22, 4, OUT, HIGH),
	//GPIO_181
	LOW_POWER(0x014, FUNC0, 0x014, PULLDOWN,  22, 5, IN, LOW),
	//GPIO_182
	LOW_POWER(0x018, FUNC0, 0x018, PULLDOWN,  22, 6, IN, LOW),
	//GPIO_183
	LOW_POWER(0x01c, FUNC0, 0x01c, PULLDOWN,  22, 7, IN, LOW),
	//GPIO_184
	LOW_POWER(0x020, FUNC0, 0x020, PULLDOWN,  23, 0, IN, LOW),
	//GPIO_185
	LOW_POWER(0x024, FUNC0, 0x024, PULLDOWN,  23, 1, IN, LOW),
	//GPIO_186
	LOW_POWER(0x028, FUNC0, 0x028, PULLDOWN,  23, 2, IN, LOW),
	//GPIO_187
	LOW_POWER(0x02c, FUNC0, 0x02c, PULLDOWN,  23, 3, IN, LOW),
	//GPIO_188
	LOW_POWER(0x030, FUNC0, 0x030, PULLDOWN,  23, 4, IN, LOW),
	//GPIO_189
	LOW_POWER(0x034, FUNC0, 0x034, PULLDOWN,  23, 5, IN, LOW),
	//GPIO_190
	LOW_POWER(0x038, FUNC0, 0x038, PULLDOWN,  23, 6, IN, LOW),
	//GPIO_191
	LOW_POWER(0x03c, FUNC0, 0x03c, PULLDOWN,  23, 7, IN, LOW),
	//GPIO_192
	LOW_POWER(0x040, FUNC0, 0x040, PULLDOWN,  24, 0, IN, LOW),
	//GPIO_193
	LOW_POWER(0x044, FUNC0, 0x044, PULLDOWN,  24, 1, IN, LOW),
	//GPIO_194
	LOW_POWER(0x048, FUNC0, 0x048, PULLDOWN,  24, 2, IN, LOW),
	//GPIO_195
	LOW_POWER(N, FUNC0, 0x04c, NOPULL,  24, 3, OUT, HIGH),
	//GPIO_196
	LOW_POWER(N, FUNC0, 0x050, PULLUP,  24, 4, IN, LOW),
	//GPIO_197
	LOW_POWER(N, FUNC0, 0x054, PULLUP,  24, 5, IN, LOW),
	//GPIO_198
	LOW_POWER(N, FUNC0, 0x058, PULLUP,  24, 6, IN, LOW),
	//GPIO_199
	LOW_POWER(N, FUNC0, 0x05c, NOPULL,  24, 7, IN, LOW),
	//GPIO_200
	LOW_POWER(0x04c, FUNC0, 0x060, PULLDOWN,  25, 0, IN, LOW),
	//GPIO_201
	LOW_POWER(0x050, FUNC0, 0x064, PULLDOWN,  25, 1, IN, LOW),
	//GPIO_202
	LOW_POWER(0x054, FUNC0, 0x068, PULLDOWN,  25, 2, IN, LOW),
	//GPIO_203
	LOW_POWER(0x058, FUNC0, 0x06c, PULLUP,  25, 3, IN, LOW),
	//GPIO_204
	LOW_POWER(0x05c, FUNC0, 0x070, PULLUP,  25, 4, IN, LOW),
	//GPIO_205
	LOW_POWER(0x060, FUNC0, 0x074, NOPULL,  25, 5, IN, LOW),
	//GPIO_206
	LOW_POWER(0x064, FUNC0, 0x078, PULLUP,  25, 6, IN, LOW),
	//GPIO_207
	LOW_POWER(0x068, FUNC0, 0x07c, NOPULL,  25, 7, IN, LOW),
	//GPIO_208
	LOW_POWER(0x06c, FUNC0, 0x080, NOPULL,  26, 0, IN, LOW),
	//GPIO_209
	LOW_POWER(0x070, FUNC0, 0x084, NOPULL,  26, 1, IN, LOW),
	//GPIO_210
	LOW_POWER(0x074, FUNC0, 0x088, NOPULL,  26, 2, IN, LOW),
	//GPIO_211
	LOW_POWER(0x078, FUNC0, 0x08c, PULLDOWN,  26, 3, IN, LOW),
	//GPIO_212
	LOW_POWER(0x07c, FUNC0, 0x090, PULLDOWN,  26, 4, IN, LOW),
	//GPIO_213
	LOW_POWER(0x080, FUNC0, 0x094, PULLDOWN,  26, 5, IN, LOW),
};

struct pmuregs {
	unsigned int ucoffset;
	unsigned int cval;
	unsigned int old_val;
	unsigned int cmask;
};

enum hisi_pmu_list {
	LDO0_1 = 0,
	LDO0_2,
	LDO1,
	LDO2,
	LDO3,
	LDO4,
	LDO5,
	LDO6,
	LDO7,
	LDO8,
	LDO9,
	LDO10,
	LDO11,
	LDO12,
	LDO13,
	LDO14,
	LDO15,
	LDO16,
	LDO17,
	LDO18,
	LDO19,
	LDO20,
	LDO21,
	LDO22,
	LDO23,
	LDO24,
	LDO25,
	LDO26,
	BUCK0,
	BUCK1_2,
	BUCK3,
	BUCK4,
	BUCK5,
	BUCK6,
	PMUA,
	LSW50,
	LSW52,
	LSW53,
	BOOST,
	FELICA,
};

char *hisi_pmu_id[] = {
	[LDO0_1]	= "LDO0_1",
	[LDO0_2]	= "LDO0_2",
	[LDO1]  	= "LDO_01",
	[LDO2]  	= "LDO_02",
	[LDO3]  	= "LDO_03",
	[LDO4]  	= "LDO_04",
	[LDO5]  	= "LDO_05",
	[LDO6]  	= "LDO_06",
	[LDO7]  	= "LDO_07",
	[LDO8]  	= "LDO_08",
	[LDO9]  	= "LDO_09",
	[LDO10] 	= "LDO_10",
	[LDO11] 	= "LDO_11",
	[LDO12] 	= "LDO_12",
	[LDO13] 	= "LDO_13",
	[LDO14] 	= "LDO_14",
	[LDO15] 	= "LDO_15",
	[LDO16] 	= "LDO_16",
	[LDO17] 	= "LDO_17",
	[LDO18] 	= "LDO_18",
	[LDO19] 	= "LDO_19",
	[LDO20] 	= "LDO_20",
	[LDO21] 	= "LDO_21",
	[LDO22] 	= "LDO_22",
	[LDO23] 	= "LDO_23",
	[LDO24] 	= "LDO_24",
	[LDO25] 	= "LDO_25",
	[LDO26] 	= "LDO_26",
	[BUCK0] 	= "BUCK_0",
	[BUCK1_2]	= "BUCK12",
	[BUCK3]		= "BUCK_3",
	[BUCK4]  	= "BUCK_4",
	[BUCK5]  	= "BUCK_5",
	[BUCK6]  	= "BUCK_6",
	[PMUA]   	= "_PMU_A",
	[LSW50]  	= "LSW_50",
	[LSW52]  	= "LSW_52",
	[LSW53]  	= "LSW_53",
	[BOOST]  	= "_BOOST",
	[FELICA] 	= "FELICA",
};

#define PMU_LOW(x, y, z) { .ucoffset = (x), .cval = (y), .cmask = (z), .old_val = 0,}
static struct pmuregs pmuregs_lookups[] = {
	PMU_LOW(0x77 , 0x10, 0x10),/*LDO0_1 */
	PMU_LOW(0x78 , 0x02, 0x02),/*LDO0_2 */
	PMU_LOW(0x7A , 0x20, 0x20),/*LDO1*/
	PMU_LOW(0x7B , 0x20, 0x20),/*LDO2*/
	PMU_LOW(0x7C , 0x02, 0x02),/*LDO3*/
	PMU_LOW(0x7E , 0x02, 0x02),/*LDO4*/
	PMU_LOW(0x80 , 0x02, 0x02),/*LDO5*/
	PMU_LOW(0x82 , 0x20, 0x20),/*LDO6*/
	PMU_LOW(0x83 , 0x02, 0x02),/*LDO7*/
	PMU_LOW(0x85 , 0x20, 0x20),/*LDO8*/
	PMU_LOW(0x86 , 0x02, 0x02),/*LDO9*/
	PMU_LOW(0x88 , 0x02, 0x02),/*LDO10*/
	PMU_LOW(0x8A , 0x20, 0x20),/*LDO11*/
	PMU_LOW(0x8B , 0x20, 0x20),/*LDO12*/
	PMU_LOW(0x8C , 0x02, 0x02),/*LDO13*/
	PMU_LOW(0x8E , 0x02, 0x02),/*LDO14*/
	PMU_LOW(0x90 , 0x02, 0x02),/*LDO15*/
	PMU_LOW(0x92 , 0x20, 0x20),/*LDO16*/
	PMU_LOW(0x93 , 0x20, 0x20),/*LDO17*/
	PMU_LOW(0x94 , 0x20, 0x20),/*LDO18*/
	PMU_LOW(0x95 , 0x20, 0x20),/*LDO19*/
	PMU_LOW(0x96 , 0x20, 0x20),/*LDO20*/
	PMU_LOW(0x97 , 0x20, 0x20),/*LDO21*/
	PMU_LOW(0x98 , 0x20, 0x20),/*LDO22*/
	PMU_LOW(0x99 , 0x20, 0x20),/*LDO23*/
	PMU_LOW(0x9A , 0x20, 0x20),/*LDO24*/
	PMU_LOW(0x9B , 0x20, 0x20),/*LDO25*/
	PMU_LOW(0x9C , 0x02, 0x02),/*LDO26*/
	PMU_LOW(0x9E , 0x02, 0x02),/*BUCK0*/
	PMU_LOW(0xA0 , 0x07, 0x07),/*BUCK1_2*/
	PMU_LOW(0xA2 , 0x02, 0x02),/*BUCK3*/
	PMU_LOW(0xA4 , 0x02, 0x02),/*BUCK4*/
	PMU_LOW(0xA6 , 0x02, 0x02),/*BUCK5*/
	PMU_LOW(0xA8 , 0x02, 0x02),/*BUCK6*/
	PMU_LOW(0xAA , 0x00, 0x00),/*PMUA*/
	PMU_LOW(0xAC , 0x10, 0x10),/*LSW50*/
	PMU_LOW(0xAE , 0x10, 0x10),/*LSW52*/
	PMU_LOW(0xAF , 0x12, 0x12),/*LSW53*/
	PMU_LOW(0xB0 , 0x01, 0x01),/*BOOST*/
	PMU_LOW(0x11C, 0x01, 0x01),/*FELICA*/
};
#endif