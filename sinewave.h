
// sinewave.h
// Put this file in the "inc" directory of your project.
// You do not need to change it or submit it with your solution.
///*
const short int sine_table[] = {
0x800,0x823,0x847,0x86b,0x88e,0x8b2,0x8d6,0x8f9,0x91d,0x940,
0x963,0x986,0x9a9,0x9cc,0x9ef,0xa12,0xa34,0xa56,0xa78,0xa9a,
0xabc,0xadd,0xaff,0xb20,0xb40,0xb61,0xb81,0xba1,0xbc1,0xbe0,
0xc00,0xc1e,0xc3d,0xc5b,0xc79,0xc96,0xcb3,0xcd0,0xcec,0xd08,
0xd24,0xd3f,0xd5a,0xd74,0xd8e,0xda8,0xdc1,0xdd9,0xdf1,0xe09,
0xe20,0xe37,0xe4d,0xe63,0xe78,0xe8d,0xea1,0xeb5,0xec8,0xedb,
0xeed,0xeff,0xf10,0xf20,0xf30,0xf40,0xf4e,0xf5d,0xf6a,0xf77,
0xf84,0xf90,0xf9b,0xfa6,0xfb0,0xfba,0xfc3,0xfcb,0xfd3,0xfda,
0xfe0,0xfe6,0xfec,0xff0,0xff4,0xff8,0xffb,0xffd,0xffe,0xfff,
0xfff,0xfff,0xffe,0xffd,0xffb,0xff8,0xff4,0xff0,0xfec,0xfe6,
0xfe0,0xfda,0xfd3,0xfcb,0xfc3,0xfba,0xfb0,0xfa6,0xf9b,0xf90,
0xf84,0xf77,0xf6a,0xf5d,0xf4e,0xf40,0xf30,0xf20,0xf10,0xeff,
0xeed,0xedb,0xec8,0xeb5,0xea1,0xe8d,0xe78,0xe63,0xe4d,0xe37,
0xe20,0xe09,0xdf1,0xdd9,0xdc1,0xda8,0xd8e,0xd74,0xd5a,0xd3f,
0xd24,0xd08,0xcec,0xcd0,0xcb3,0xc96,0xc79,0xc5b,0xc3d,0xc1e,
0xc00,0xbe0,0xbc1,0xba1,0xb81,0xb61,0xb40,0xb20,0xaff,0xadd,
0xabc,0xa9a,0xa78,0xa56,0xa34,0xa12,0x9ef,0x9cc,0x9a9,0x986,
0x963,0x940,0x91d,0x8f9,0x8d6,0x8b2,0x88e,0x86b,0x847,0x823,
0x800,0x7dc,0x7b8,0x794,0x771,0x74d,0x729,0x706,0x6e2,0x6bf,
0x69c,0x679,0x656,0x633,0x610,0x5ed,0x5cb,0x5a9,0x587,0x565,
0x543,0x522,0x500,0x4df,0x4bf,0x49e,0x47e,0x45e,0x43e,0x41f,
0x400,0x3e1,0x3c2,0x3a4,0x386,0x369,0x34c,0x32f,0x313,0x2f7,
0x2db,0x2c0,0x2a5,0x28b,0x271,0x257,0x23e,0x226,0x20e,0x1f6,
0x1df,0x1c8,0x1b2,0x19c,0x187,0x172,0x15e,0x14a,0x137,0x124,
0x112,0x100,0x0ef,0x0df,0x0cf,0x0bf,0x0b1,0x0a2,0x095,0x088,
0x07b,0x06f,0x064,0x059,0x04f,0x045,0x03c,0x034,0x02c,0x025,
0x01f,0x019,0x013,0x00f,0x00b,0x007,0x004,0x002,0x001,0x000,
0x000,0x000,0x001,0x002,0x004,0x007,0x00b,0x00f,0x013,0x019,
0x01f,0x025,0x02c,0x034,0x03c,0x045,0x04f,0x059,0x064,0x06f,
0x07b,0x088,0x095,0x0a2,0x0b1,0x0bf,0x0cf,0x0df,0x0ef,0x100,
0x112,0x124,0x137,0x14a,0x15e,0x172,0x187,0x19c,0x1b2,0x1c8,
0x1df,0x1f6,0x20e,0x226,0x23e,0x257,0x271,0x28b,0x2a5,0x2c0,
0x2db,0x2f7,0x313,0x32f,0x34c,0x369,0x386,0x3a4,0x3c2,0x3e1,
0x400,0x41f,0x43e,0x45e,0x47e,0x49e,0x4bf,0x4df,0x500,0x522,
0x543,0x565,0x587,0x5a9,0x5cb,0x5ed,0x610,0x633,0x656,0x679,
0x69c,0x6bf,0x6e2,0x706,0x729,0x74d,0x771,0x794,0x7b8,0x7dc,
};

const short int triangle_table[] = {
		0x17,0x2e,0x44,0x5b,0x72,0x89,0x9f,0xb6,0xcd,0xe4,
		0xfa,0x111,0x128,0x13f,0x155,0x16c,0x183,0x19a,0x1b0,0x1c7,
		0x1de,0x1f5,0x20b,0x222,0x239,0x250,0x266,0x27d,0x294,0x2ab,
		0x2c1,0x2d8,0x2ef,0x306,0x31c,0x333,0x34a,0x361,0x377,0x38e,
		0x3a5,0x3bc,0x3d2,0x3e9,0x400,0x417,0x42d,0x444,0x45b,0x472,
		0x488,0x49f,0x4b6,0x4cd,0x4e3,0x4fa,0x511,0x528,0x53e,0x555,
		0x56c,0x583,0x599,0x5b0,0x5c7,0x5de,0x5f4,0x60b,0x622,0x639,
		0x64f,0x666,0x67d,0x694,0x6aa,0x6c1,0x6d8,0x6ef,0x705,0x71c,
		0x733,0x74a,0x760,0x777,0x78e,0x7a5,0x7bb,0x7d2,0x7e9,0x800,
		0x816,0x82d,0x844,0x85b,0x871,0x888,0x89f,0x8b6,0x8cc,0x8e3,
		0x8fa,0x911,0x927,0x93e,0x955,0x96c,0x982,0x999,0x9b0,0x9c7,
		0x9dd,0x9f4,0xa0b,0xa22,0xa38,0xa4f,0xa66,0xa7d,0xa93,0xaaa,
		0xac1,0xad8,0xaee,0xb05,0xb1c,0xb33,0xb49,0xb60,0xb77,0xb8e,
		0xba4,0xbbb,0xbd2,0xbe9,0xbff,0xc16,0xc2d,0xc44,0xc5a,0xc71,
		0xc88,0xc9f,0xcb5,0xccc,0xce3,0xcfa,0xd10,0xd27,0xd3e,0xd55,
		0xd6b,0xd82,0xd99,0xdb0,0xdc6,0xddd,0xdf4,0xe0b,0xe21,0xe38,
		0xe4f,0xe66,0xe7c,0xe93,0xeaa,0xec1,0xed7,0xeee,0xf05,0xf1c,
		0xf32,0xf49,0xf60,0xf77,0xf8d,0xfa4,0xfbb,0xfd2,0xfe8,0xfff,
		0xfe8,0xfd2,0xfbb,0xfa4,0xf8d,0xf77,0xf60,0xf49,0xf32,0xf1c,
		0xf05,0xeee,0xed7,0xec1,0xeaa,0xe93,0xe7c,0xe66,0xe4f,0xe38,
		0xe21,0xe0b,0xdf4,0xddd,0xdc6,0xdb0,0xd99,0xd82,0xd6b,0xd55,
		0xd3e,0xd27,0xd10,0xcfa,0xce3,0xccc,0xcb5,0xc9f,0xc88,0xc71,
		0xc5a,0xc44,0xc2d,0xc16,0xbff,0xbe9,0xbd2,0xbbb,0xba4,0xb8e,
		0xb77,0xb60,0xb49,0xb33,0xb1c,0xb05,0xaee,0xad8,0xac1,0xaaa,
		0xa93,0xa7d,0xa66,0xa4f,0xa38,0xa22,0xa0b,0x9f4,0x9dd,0x9c7,
		0x9b0,0x999,0x982,0x96c,0x955,0x93e,0x927,0x911,0x8fa,0x8e3,
		0x8cc,0x8b6,0x89f,0x888,0x871,0x85b,0x844,0x82d,0x816,0x800,
		0x7e9,0x7d2,0x7bb,0x7a5,0x78e,0x777,0x760,0x74a,0x733,0x71c,
		0x705,0x6ef,0x6d8,0x6c1,0x6aa,0x694,0x67d,0x666,0x64f,0x639,
		0x622,0x60b,0x5f4,0x5de,0x5c7,0x5b0,0x599,0x583,0x56c,0x555,
		0x53e,0x528,0x511,0x4fa,0x4e3,0x4cd,0x4b6,0x49f,0x488,0x472,
		0x45b,0x444,0x42d,0x417,0x400,0x3e9,0x3d2,0x3bc,0x3a5,0x38e,
		0x377,0x361,0x34a,0x333,0x31c,0x306,0x2ef,0x2d8,0x2c1,0x2ab,
		0x294,0x27d,0x266,0x250,0x239,0x222,0x20b,0x1f5,0x1de,0x1c7,
		0x1b0,0x19a,0x183,0x16c,0x155,0x13f,0x128,0x111,0xfa,0xe4,
		0xcd,0xb6,0x9f,0x89,0x72,0x5b,0x44,0x2e,0x17,0x0,
};

const short int half_table[] = {
		0xb,0x17,0x22,0x2d,0x39,0x44,0x50,0x5b,0x66,0x72,
		0x7d,0x88,0x94,0x9f,0xab,0xb6,0xc1,0xcd,0xd8,0xe3,
		0xef,0xfa,0x106,0x111,0x11c,0x128,0x133,0x13e,0x14a,0x155,
		0x161,0x16c,0x177,0x183,0x18e,0x199,0x1a5,0x1b0,0x1bc,0x1c7,
		0x1d2,0x1de,0x1e9,0x1f4,0x200,0x20b,0x216,0x222,0x22d,0x239,
		0x244,0x24f,0x25b,0x266,0x271,0x27d,0x288,0x294,0x29f,0x2aa,
		0x2b6,0x2c1,0x2cc,0x2d8,0x2e3,0x2ef,0x2fa,0x305,0x311,0x31c,
		0x327,0x333,0x33e,0x34a,0x355,0x360,0x36c,0x377,0x382,0x38e,
		0x399,0x3a5,0x3b0,0x3bb,0x3c7,0x3d2,0x3dd,0x3e9,0x3f4,0x400,
		0x40b,0x416,0x422,0x42d,0x438,0x444,0x44f,0x45a,0x466,0x471,
		0x47d,0x488,0x493,0x49f,0x4aa,0x4b5,0x4c1,0x4cc,0x4d8,0x4e3,
		0x4ee,0x4fa,0x505,0x510,0x51c,0x527,0x533,0x53e,0x549,0x555,
		0x560,0x56b,0x577,0x582,0x58e,0x599,0x5a4,0x5b0,0x5bb,0x5c6,
		0x5d2,0x5dd,0x5e9,0x5f4,0x5ff,0x60b,0x616,0x621,0x62d,0x638,
		0x643,0x64f,0x65a,0x666,0x671,0x67c,0x688,0x693,0x69e,0x6aa,
		0x6b5,0x6c1,0x6cc,0x6d7,0x6e3,0x6ee,0x6f9,0x705,0x710,0x71c,
		0x727,0x732,0x73e,0x749,0x754,0x760,0x76b,0x777,0x782,0x78d,
		0x799,0x7a4,0x7af,0x7bb,0x7c6,0x7d2,0x7dd,0x7e8,0x7f4,0x7ff,
		0x7f4,0x7e8,0x7dd,0x7d2,0x7c6,0x7bb,0x7af,0x7a4,0x799,0x78d,
		0x782,0x777,0x76b,0x760,0x754,0x749,0x73e,0x732,0x727,0x71c,
		0x710,0x705,0x6f9,0x6ee,0x6e3,0x6d7,0x6cc,0x6c1,0x6b5,0x6aa,
		0x69e,0x693,0x688,0x67c,0x671,0x666,0x65a,0x64f,0x643,0x638,
		0x62d,0x621,0x616,0x60b,0x5ff,0x5f4,0x5e9,0x5dd,0x5d2,0x5c6,
		0x5bb,0x5b0,0x5a4,0x599,0x58e,0x582,0x577,0x56b,0x560,0x555,
		0x549,0x53e,0x533,0x527,0x51c,0x510,0x505,0x4fa,0x4ee,0x4e3,
		0x4d8,0x4cc,0x4c1,0x4b5,0x4aa,0x49f,0x493,0x488,0x47d,0x471,
		0x466,0x45a,0x44f,0x444,0x438,0x42d,0x422,0x416,0x40b,0x400,
		0x3f4,0x3e9,0x3dd,0x3d2,0x3c7,0x3bb,0x3b0,0x3a5,0x399,0x38e,
		0x382,0x377,0x36c,0x360,0x355,0x34a,0x33e,0x333,0x327,0x31c,
		0x311,0x305,0x2fa,0x2ef,0x2e3,0x2d8,0x2cc,0x2c1,0x2b6,0x2aa,
		0x29f,0x294,0x288,0x27d,0x271,0x266,0x25b,0x24f,0x244,0x239,
		0x22d,0x222,0x216,0x20b,0x200,0x1f4,0x1e9,0x1de,0x1d2,0x1c7,
		0x1bc,0x1b0,0x1a5,0x199,0x18e,0x183,0x177,0x16c,0x161,0x155,
		0x14a,0x13e,0x133,0x128,0x11c,0x111,0x106,0xfa,0xef,0xe3,
		0xd8,0xcd,0xc1,0xb6,0xab,0x9f,0x94,0x88,0x7d,0x72,
		0x66,0x5b,0x50,0x44,0x39,0x2d,0x22,0x17,0xb,0x0,
};

const short int x1_table[] = {
		0x7,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,

};
const short int x2_table[] = {
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,
		0xfff,0xfff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0,

};