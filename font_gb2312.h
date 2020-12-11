#ifndef __FONT
#define __FONT

typedef struct _font_gb2312
{
	char *p;
	char font[24];
} font_gb2312;

font_gb2312 font_12[] =
{
	{
		.p = "测",
		.font = 
		{
			0x0,0x20,0xbe,0x20,0x62,0xa0,0x2a,0xa0,0x2a,0xa0,0xaa,0xa0,
			0x6a,0xa0,0x2a,0xa0,0x2a,0xa0,0x48,0x20,0x94,0x20,0x22,0x60,
		},
	},
	{
		.p = "量",
		.font = 
		{
			0x7f,0xc0,0x44,0x40,0x42,0x40,0xff,0xe0,0x44,0x40,0x7f,0xc0,
			0x44,0x40,0x7f,0xc0,0x4,0x0,0x7f,0xc0,0x4,0x0,0xff,0xe0,
		},
	},
	{
		.p = "参",
		.font = 
		{
			0x10,0x0,0x20,0x80,0x7f,0xc0,0x8,0x0,0xff,0xe0,0x22,0x80,
			0x4c,0x40,0xb1,0x20,0x6,0x0,0x78,0x40,0x3,0x80,0x7c,0x0,
		},
	},
	{
		.p = "数",
		.font = 
		{
			0x11,0x0,0x55,0x0,0x11,0x0,0xfd,0xe0,0x32,0x40,0x59,0x40,
			0x95,0x40,0x21,0x40,0xf9,0x40,0x48,0x80,0x31,0x40,0xca,0x20,
		},
	},
	{
		.p = "报",
		.font = 
		{
			0x20,0x0,0x27,0xe0,0x24,0x20,0xf4,0x20,0x24,0xc0,0x24,0x0,
			0x37,0xe0,0xe5,0x20,0x25,0x40,0x24,0x80,0x25,0x40,0x66,0x20,
		},
	},
	{
		.p = "警",
		.font = 
		{
			0x49,0x0,0xfd,0xe0,0x4a,0x40,0x7d,0x40,0xd4,0x80,0x75,0x40,
			0xa,0x20,0xff,0xe0,0x0,0x0,0x7f,0xc0,0x20,0x80,0x3f,0x80,
		},
	},
	{
		.p = "信",
		.font = 
		{
			0x22,0x0,0x21,0x0,0x5f,0xe0,0x40,0x0,0xcf,0xc0,0x40,0x0,
			0x4f,0xc0,0x40,0x0,0x4f,0xc0,0x48,0x40,0x4f,0xc0,0x48,0x40,
		},
	},
	{
		.p = "息",
		.font = 
		{
			0x8,0x0,0x7f,0xc0,0x40,0x40,0x7f,0xc0,0x40,0x40,0x7f,0xc0,
			0x40,0x40,0x7f,0xc0,0x4,0x0,0x52,0x40,0x50,0xa0,0x8f,0xa0,
		},
	},
	{
		.p = "故",
		.font = 
		{
			0x22,0x0,0x22,0x0,0x22,0x0,0xfb,0xe0,0x24,0x40,0x22,0x40,
			0xfa,0x40,0x8a,0x40,0x8a,0x80,0x89,0x0,0xfa,0x80,0x8c,0x60,
		},
	},
	{
		.p = "障",
		.font = 
		{
			0x1,0x0,0xf7,0xc0,0x92,0x80,0x9f,0xe0,0xa4,0x40,0xa7,0xc0,
			0x94,0x40,0x97,0xc0,0x91,0x0,0xef,0xe0,0x81,0x0,0x81,0x0,
		},
	},
	{
		.p = "记",
		.font = 
		{
			0x40,0x0,0x27,0xc0,0x0,0x40,0x0,0x40,0xe0,0x40,0x27,0xc0,
			0x24,0x0,0x24,0x0,0x2c,0x0,0x34,0x20,0x24,0x20,0x3,0xe0,
		},
	},
	{
		.p = "录",
		.font = 
		{
			0x7f,0x80,0x0,0x80,0x3f,0x80,0x0,0x80,0xff,0xe0,0x4,0x0,
			0x44,0x40,0x2e,0x80,0x15,0x0,0x24,0x80,0xc4,0x60,0xc,0x0,
		},
	},
	{
		.p = "运",
		.font = 
		{
			0x40,0x0,0x27,0xc0,0x0,0x0,0x0,0x0,0xef,0xe0,0x21,0x0,
			0x22,0x0,0x24,0x40,0x2f,0xe0,0x20,0x20,0x50,0x0,0x8f,0xe0,
		},
	},
	{
		.p = "行",
		.font = 
		{
			0x10,0x0,0x27,0xc0,0x40,0x0,0x90,0x0,0x2f,0xe0,0x60,0x80,
			0xa0,0x80,0x20,0x80,0x20,0x80,0x20,0x80,0x20,0x80,0x23,0x80,
		},
	},
	{
		.p = "系",
		.font = 
		{
			0x3,0xc0,0x7c,0x0,0x8,0x0,0x10,0x80,0x3f,0x0,0x6,0x0,
			0x18,0x40,0x7f,0xe0,0x4,0x20,0x24,0x80,0x44,0x40,0x8c,0x20,
		},
	},
	{
		.p = "统",
		.font = 
		{
			0x21,0x0,0x20,0x80,0x47,0xe0,0x91,0x0,0xe2,0x40,0x24,0x20,
			0x47,0xe0,0xf2,0xa0,0x2,0x80,0x32,0x80,0xc4,0xa0,0x8,0x60,
		},
	},
	{
		.p = "保",
		.font = 
		{
			0x10,0x0,0x17,0xc0,0x24,0x40,0x24,0x40,0x67,0xc0,0xa1,0x0,
			0x2f,0xe0,0x21,0x0,0x23,0x80,0x25,0x40,0x29,0x20,0x21,0x0,
		},
	},
	{
		.p = "护",
		.font = 
		{
			0x21,0x0,0x20,0x80,0x27,0xe0,0xf4,0x20,0x24,0x20,0x24,0x20,
			0x37,0xe0,0xe4,0x20,0x24,0x0,0x24,0x0,0x24,0x0,0x68,0x0,
		},
	},
	{
		.p = "启",
		.font = 
		{
			0x4,0x0,0x2,0x0,0x3f,0xe0,0x20,0x20,0x20,0x20,0x3f,0xe0,
			0x20,0x0,0x3f,0xe0,0x30,0x20,0x50,0x20,0x5f,0xe0,0x90,0x20,
		},
	},
	{
		.p = "动",
		.font = 
		{
			0x1,0x0,0x71,0x0,0x1,0x0,0x3,0xe0,0xf9,0x20,0x21,0x20,
			0x41,0x20,0x51,0x20,0x89,0x20,0xfa,0x20,0x2,0x20,0x4,0xc0,
		},
	},
	{
		.p = "可",
		.font = 
		{
			0x0,0x0,0xff,0xe0,0x0,0x40,0x0,0x40,0x7e,0x40,0x42,0x40,
			0x42,0x40,0x42,0x40,0x7e,0x40,0x40,0x40,0x0,0x40,0x1,0xc0,
		},
	},
	{
		.p = "编",
		.font = 
		{
			0x41,0x0,0x4f,0xe0,0x88,0x20,0xaf,0xe0,0xc8,0x0,0x4f,0xe0,
			0x8a,0xa0,0xda,0xa0,0xf,0xe0,0x2a,0xa0,0xca,0xa0,0x8,0x60,
		},
	},
	{
		.p = "程",
		.font = 
		{
			0x17,0xc0,0xe4,0x40,0x24,0x40,0x27,0xc0,0xf0,0x0,0x27,0xc0,
			0x71,0x0,0x69,0x0,0xa7,0xc0,0x21,0x0,0x21,0x0,0x2f,0xe0,
		},
	},
	{
		.p = "设",
		.font = 
		{
			0x47,0x80,0x24,0x80,0x4,0x80,0x4,0x80,0xe8,0x60,0x20,0x0,
			0x2f,0xc0,0x24,0x40,0x22,0x80,0x31,0x0,0x22,0x80,0xc,0x60,
		},
	},
	{
		.p = "置",
		.font = 
		{
			0x7f,0xc0,0x4a,0x40,0x7f,0xc0,0x4,0x0,0xff,0xe0,0x4,0x0,
			0x3f,0x80,0x20,0x80,0x20,0x80,0x24,0x80,0x24,0x80,0xff,0xe0,
		},
	},
	{
		.p = "事",
		.font = 
		{
			0x4,0x0,0xff,0xe0,0x24,0x80,0x3f,0x80,0x4,0x0,0x7f,0xc0,
			0x4,0x40,0xff,0xe0,0x4,0x40,0x7f,0xc0,0x4,0x0,0xc,0x0,
		},
	},
	{
		.p = "件",
		.font = 
		{
			0x21,0x0,0x29,0x0,0x49,0x0,0x4f,0xe0,0xd1,0x0,0x41,0x0,
			0x41,0x0,0x5f,0xe0,0x41,0x0,0x41,0x0,0x41,0x0,0x41,0x0,
		},
	},
	{
		.p = "清",
		.font = 
		{
			0x2,0x0,0xbf,0xe0,0x42,0x0,0x1f,0xc0,0x2,0x0,0xbf,0xe0,
			0x50,0x40,0x1f,0xc0,0x10,0x40,0x5f,0xc0,0x90,0x40,0x10,0xc0,
		},
	},
	{
		.p = "楚",
		.font = 
		{
			0x20,0x80,0xfb,0xe0,0x20,0x80,0x71,0xc0,0xaa,0xa0,0x20,0x80,
			0xff,0xe0,0x4,0x20,0x24,0x0,0x27,0xc0,0x54,0x0,0x8f,0xe0,
		},
	},
	{
		.p = "额",
		.font = 
		{
			0x13,0xe0,0xfc,0x80,0xa5,0x0,0x7b,0xe0,0xca,0x20,0x32,0xa0,
			0x4a,0xa0,0x86,0xa0,0x7a,0xa0,0x48,0x80,0x79,0x40,0x4a,0x20,
		},
	},
	{
		.p = "定",
		.font = 
		{
			0x8,0x0,0x4,0x0,0xff,0xe0,0x80,0x20,0x0,0x0,0xff,0xe0,
			0x4,0x0,0x24,0x0,0x27,0xc0,0x24,0x0,0x54,0x0,0x8f,0xe0,
		},
	},
	{
		.p = "电",
		.font = 
		{
			0x8,0x0,0x8,0x0,0xff,0x80,0x88,0x80,0x88,0x80,0xff,0x80,
			0x88,0x80,0x88,0x80,0xff,0x80,0x88,0x20,0x8,0x20,0x7,0xe0,
		},
	},
	{
		.p = "流",
		.font = 
		{
			0x2,0x0,0x81,0x0,0x5f,0xe0,0x4,0x0,0x8,0x40,0x9f,0xe0,
			0x40,0x20,0xa,0x80,0xa,0x80,0x4a,0xa0,0x92,0xa0,0x22,0x60,
		},
	},
	{
		.p = "压",
		.font = 
		{
			0x0,0x0,0x7f,0xe0,0x40,0x0,0x42,0x0,0x42,0x0,0x42,0x0,
			0x5f,0xc0,0x42,0x0,0x42,0x80,0x42,0x40,0x42,0x0,0xbf,0xe0,
		},
	},
	{
		.p = "功",
		.font = 
		{
			0x2,0x0,0x2,0x0,0xfa,0x0,0x27,0xe0,0x22,0x20,0x22,0x20,
			0x22,0x20,0x22,0x20,0x3c,0x20,0xc4,0x20,0x8,0x20,0x10,0xc0,
		},
	},
	{
		.p = "率",
		.font = 
		{
			0x4,0x0,0xff,0xe0,0x8,0x0,0x51,0x40,0x3e,0x80,0x4,0x0,
			0x2a,0x80,0x5f,0x40,0x4,0x0,0xff,0xe0,0x4,0x0,0x4,0x0,
		},
	},
	{
		.p = "频",
		.font = 
		{
			0x13,0xe0,0x5c,0x80,0x51,0x0,0x53,0xe0,0xfe,0x20,0x12,0xa0,
			0x52,0xa0,0x56,0xa0,0x8a,0xa0,0x10,0x80,0x21,0x40,0xc2,0x20,
		},
	},
	{
		.p = "机",
		.font = 
		{
			0x20,0x0,0x27,0x80,0x24,0x80,0xf4,0x80,0x24,0x80,0x74,0x80,
			0x6c,0x80,0xa4,0x80,0x24,0x80,0x24,0xa0,0x28,0xa0,0x30,0x60,
		},
	},
	{
		.p = "类",
		.font = 
		{
			0x4,0x0,0x24,0x80,0x15,0x0,0xff,0xe0,0x15,0x0,0x24,0x80,
			0x40,0x40,0x4,0x0,0xff,0xe0,0xa,0x0,0x31,0x80,0xc0,0x60,
		},
	},
	{
		.p = "型",
		.font = 
		{
			0x0,0x20,0x7e,0xa0,0x24,0xa0,0x24,0xa0,0xfe,0xa0,0x24,0xa0,
			0x44,0x20,0x80,0x60,0x4,0x0,0x7f,0xc0,0x4,0x0,0xff,0xe0,
		},
	},
	{
		.p = "高",
		.font = 
		{
			0x4,0x0,0xff,0xe0,0x0,0x0,0x3f,0x80,0x20,0x80,0x3f,0x80,
			0x0,0x0,0xff,0xe0,0x80,0x20,0x9f,0x20,0x91,0x20,0x9f,0x60,
		},
	},
	{
		.p = "速",
		.font = 
		{
			0x82,0x0,0x5f,0xe0,0x2,0x0,0x1f,0xc0,0xd2,0x40,0x52,0x40,
			0x5f,0xc0,0x47,0x0,0x4a,0x80,0x52,0x40,0x42,0x0,0xbf,0xe0,
		},
	},
	{
		.p = "接",
		.font = 
		{
			0x22,0x0,0x21,0x0,0x2f,0xe0,0xf4,0x40,0x22,0x80,0x2f,0xe0,
			0x31,0x0,0xef,0xe0,0x22,0x40,0x26,0x40,0x21,0x80,0x6e,0x60,
		},
	},
	{
		.p = "线",
		.font = 
		{
			0x21,0x40,0x21,0x20,0x41,0xe0,0x97,0x0,0xe1,0x0,0x21,0xe0,
			0x47,0x0,0xf1,0x40,0x1,0x80,0x31,0x20,0xc2,0xa0,0xc,0x60,
		},
	},
	{
		.p = "方",
		.font = 
		{
			0x8,0x0,0x4,0x0,0xff,0xe0,0x10,0x0,0x10,0x0,0x1f,0xc0,
			0x10,0x40,0x10,0x40,0x20,0x40,0x20,0x40,0x40,0x40,0x83,0x80,
		},
	},
	{
		.p = "式",
		.font = 
		{
			0x1,0x40,0x1,0x20,0x1,0x0,0xff,0xe0,0x1,0x0,0x1,0x0,
			0x7d,0x0,0x11,0x0,0x10,0x80,0x10,0xa0,0x1e,0x60,0xe0,0x20,
		},
	},
	{
		.p = "变",
		.font = 
		{
			0x4,0x0,0xff,0xe0,0x11,0x0,0x51,0x40,0x91,0x20,0x0,0x0,
			0x7f,0x80,0x20,0x80,0x11,0x0,0xe,0x0,0x31,0x80,0xc0,0x60,
		},
	},
	{
		.p = "比",
		.font = 
		{
			0x42,0x0,0x42,0x0,0x42,0x20,0x42,0x40,0x7a,0x80,0x43,0x0,
			0x42,0x0,0x42,0x0,0x4a,0x0,0x52,0x20,0x62,0x20,0x41,0xe0,
		},
	},
	{
		.p = "选",
		.font = 
		{
			0x41,0x0,0x25,0x0,0x7,0xc0,0x9,0x0,0xe1,0x0,0x2f,0xe0,
			0x22,0x80,0x22,0x80,0x24,0xa0,0x28,0x60,0x50,0x0,0x8f,0xe0,
		},
	},
	{
		.p = "择",
		.font = 
		{
			0x2f,0xc0,0x24,0x40,0x22,0x80,0xf1,0x0,0x22,0x80,0x2d,0x60,
			0x31,0x0,0xe7,0xc0,0x21,0x0,0x2f,0xe0,0x21,0x0,0x61,0x0,
		},
	},
	{
		.p = "通",
		.font = 
		{
			0x9f,0x80,0x44,0x80,0x3,0x0,0x1f,0xc0,0xd2,0x40,0x5f,0xc0,
			0x52,0x40,0x5f,0xc0,0x52,0x40,0x52,0xc0,0x40,0x0,0xbf,0xe0,
		},
	},
	{
		.p = "讯",
		.font = 
		{
			0x40,0x0,0x2f,0x80,0x4,0x80,0x4,0x80,0xe4,0x80,0x2f,0x80,
			0x24,0x80,0x24,0x80,0x24,0x80,0x34,0xa0,0x24,0x60,0x4,0x20,
		},
	},
	{
		.p = "漏",
		.font = 
		{
			0x3f,0xe0,0xa0,0x20,0x7f,0xe0,0x20,0x0,0x3f,0xe0,0xa1,0x0,
			0x6f,0xe0,0x29,0x20,0x2d,0xa0,0x69,0x20,0xad,0xa0,0x49,0x60,
		},
	},
	{
		.p = "送",
		.font = 
		{
			0x88,0x80,0x45,0x0,0x0,0x0,0x1f,0xc0,0xc2,0x0,0x42,0x0,
			0x7f,0xe0,0x42,0x0,0x45,0x0,0x48,0x80,0x50,0x40,0xbf,0xe0,
		},
	},
	{
		.p = "语",
		.font = 
		{
			0x9f,0xe0,0x42,0x0,0xf,0xc0,0x4,0x40,0xc4,0x40,0x5f,0xe0,
			0x40,0x0,0x4f,0xc0,0x48,0x40,0x68,0x40,0x4f,0xc0,0x8,0x40,
		},
	},
	{
		.p = "言",
		.font = 
		{
			0x8,0x0,0x4,0x0,0xff,0xe0,0x0,0x0,0x7f,0xc0,0x0,0x0,
			0x7f,0xc0,0x0,0x0,0x7f,0xc0,0x40,0x40,0x7f,0xc0,0x40,0x40,
		},
	},
	{
		.p = "背",
		.font = 
		{
			0x12,0x40,0xf3,0x80,0x12,0x20,0x31,0xe0,0xd0,0x0,0x3f,0x80,
			0x20,0x80,0x3f,0x80,0x20,0x80,0x3f,0x80,0x20,0x80,0x21,0x80,
		},
	},
	{
		.p = "光",
		.font = 
		{
			0x4,0x0,0x44,0x40,0x24,0x80,0x15,0x0,0x4,0x0,0xff,0xe0,
			0x11,0x0,0x11,0x0,0x11,0x0,0x21,0x20,0x41,0x20,0x80,0xe0,
		},
	},
	{
		.p = "液",
		.font = 
		{
			0x4,0x0,0x82,0x0,0x5f,0xe0,0xa,0x0,0xb,0xc0,0x92,0x40,
			0x55,0x40,0x34,0x80,0x1a,0x80,0x51,0x0,0x92,0x80,0x14,0x60,
		},
	},
	{
		.p = "晶",
		.font = 
		{
			0x3f,0x80,0x20,0x80,0x3f,0x80,0x20,0x80,0x3f,0x80,0x0,0x0,
			0xfb,0xe0,0x8a,0x20,0xfb,0xe0,0x8a,0x20,0xfb,0xe0,0x8a,0x20,
		},
	},
	{
		.p = "对",
		.font = 
		{
			0x0,0x40,0x0,0x40,0xf8,0x40,0xb,0xe0,0x8,0x40,0x88,0x40,
			0x52,0x40,0x51,0x40,0x21,0x40,0x50,0x40,0x48,0x40,0x89,0xc0,
		},
	},
	{
		.p = "度",
		.font = 
		{
			0x2,0x0,0x7f,0xe0,0x48,0x80,0x7f,0xe0,0x48,0x80,0x4f,0x80,
			0x40,0x0,0x5f,0xc0,0x48,0x40,0x44,0x80,0x43,0x0,0x9c,0xe0,
		},
	},
	{
		.p = "密",
		.font = 
		{
			0x4,0x0,0xff,0xe0,0x88,0x20,0x5,0x0,0x52,0x40,0x54,0xa0,
			0x8f,0xa0,0x30,0x0,0x4,0x0,0x44,0x40,0x44,0x40,0x7f,0xc0,
		},
	},
	{
		.p = "码",
		.font = 
		{
			0xf,0xc0,0xf0,0x40,0x24,0x40,0x24,0x40,0x44,0x40,0x77,0xe0,
			0xd0,0x20,0x50,0x20,0x5f,0xa0,0x70,0x20,0x50,0x20,0x0,0xc0,
		},
	},
	{
		.p = "时",
		.font = 
		{
			0x0,0x40,0xf0,0x40,0x90,0x40,0x97,0xe0,0x90,0x40,0xf0,0x40,
			0x92,0x40,0x91,0x40,0x91,0x40,0xf0,0x40,0x90,0x40,0x1,0xc0,
		},
	},
	{
		.p = "间",
		.font = 
		{
			0x4f,0xe0,0x20,0x20,0x0,0x20,0x5f,0xa0,0x50,0xa0,0x50,0xa0,
			0x5f,0xa0,0x50,0xa0,0x50,0xa0,0x5f,0xa0,0x40,0x20,0x40,0xe0,
		},
	},
	{
		.p = "主",
		.font = 
		{
			0x8,0x0,0x4,0x0,0x0,0x0,0x7f,0xc0,0x4,0x0,0x4,0x0,
			0x4,0x0,0x7f,0xc0,0x4,0x0,0x4,0x0,0x4,0x0,0xff,0xe0,
		},
	},
	{
		.p = "界",
		.font = 
		{
			0x7f,0xc0,0x44,0x40,0x7f,0xc0,0x44,0x40,0x7f,0xc0,0x4,0x0,
			0x1b,0x0,0xe0,0xe0,0x11,0x0,0x11,0x0,0x21,0x0,0x41,0x0,
		},
	},
	{
		.p = "面",
		.font = 
		{
			0x0,0x0,0xff,0xe0,0x4,0x0,0x8,0x0,0x7f,0xe0,0x49,0x20,
			0x4f,0x20,0x49,0x20,0x4f,0x20,0x49,0x20,0x7f,0xe0,0x40,0x20,
		},
	},
	{
		.p = "索",
		.font = 
		{
			0x4,0x0,0x7f,0xc0,0x4,0x0,0xff,0xe0,0x88,0x20,0x11,0x0,
			0x3e,0x0,0x8,0x80,0x7f,0xc0,0x4,0x0,0x24,0x80,0x4c,0x40,
		},
	},
	{
		.p = "引",
		.font = 
		{
			0x0,0x40,0x7c,0x40,0x4,0x40,0x4,0x40,0x7c,0x40,0x40,0x40,
			0x40,0x40,0x7c,0x40,0x4,0x40,0x4,0x40,0x4,0x40,0x38,0x40,
		},
	},
	{
		.p = "软",
		.font = 
		{
			0x22,0x0,0x22,0x0,0xf3,0xe0,0x44,0x20,0x64,0x40,0xa9,0x0,
			0xf1,0x0,0x21,0x0,0x32,0x80,0xe2,0x80,0x24,0x40,0x28,0x20,
		},
	},
	{
		.p = "版",
		.font = 
		{
			0x10,0x60,0x57,0x80,0x54,0x0,0x54,0x0,0x7f,0xe0,0x45,0x20,
			0x45,0x20,0x75,0x40,0x55,0x40,0x54,0x80,0x59,0x40,0x92,0x20,
		},
	},
	{
		.p = "本",
		.font = 
		{
			0x4,0x0,0x4,0x0,0xff,0xe0,0x4,0x0,0xe,0x0,0x15,0x0,
			0x15,0x0,0x24,0x80,0x44,0x40,0xbf,0xa0,0x4,0x0,0x4,0x0,
		},
	},
	{
		.p = "恢",
		.font = 
		{
			0x24,0x0,0x24,0x0,0x2f,0xe0,0xb4,0x0,0xa4,0x80,0xa4,0xa0,
			0xaa,0xc0,0x2a,0x80,0x28,0x80,0x29,0x40,0x32,0x40,0x24,0x20,
		},
	},
	{
		.p = "复",
		.font = 
		{
			0x3f,0xe0,0x40,0x0,0xbf,0xc0,0x20,0x40,0x3f,0xc0,0x20,0x40,
			0x3f,0xc0,0x10,0x0,0x3f,0xc0,0x50,0x80,0xf,0x0,0x70,0xe0,
		},
	},
	{
		.p = "出",
		.font = 
		{
			0x4,0x0,0x44,0x40,0x44,0x40,0x44,0x40,0x7f,0xc0,0x4,0x0,
			0x4,0x0,0x84,0x20,0x84,0x20,0x84,0x20,0xff,0xe0,0x0,0x20,
		},
	},
	{
		.p = "厂",
		.font = 
		{
			0x0,0x0,0x7f,0xe0,0x40,0x0,0x40,0x0,0x40,0x0,0x40,0x0,
			0x40,0x0,0x40,0x0,0x40,0x0,0x40,0x0,0x40,0x0,0x80,0x0,
		},
	},
	{
		.p = "普",
		.font = 
		{
			0x10,0x80,0x7f,0xe0,0x9,0x0,0x29,0x40,0x19,0x80,0xff,0xe0,
			0x0,0x0,0x3f,0xc0,0x20,0x40,0x3f,0xc0,0x20,0x40,0x3f,0xc0,
		},
	},
	{
		.p = "增",
		.font = 
		{
			0x24,0x40,0x2f,0xe0,0x29,0x20,0x2d,0x60,0xf9,0x20,0x2f,0xe0,
			0x20,0x0,0x27,0xc0,0x24,0x40,0x37,0xc0,0xc4,0x40,0x7,0xc0,
		},
	},
	{
		.p = "安",
		.font = 
		{
			0x8,0x0,0x4,0x0,0xff,0xe0,0x88,0x20,0x8,0x0,0xff,0xe0,
			0x10,0x80,0x20,0x80,0x39,0x0,0x6,0x0,0x19,0x80,0xe0,0x40,
		},
	},
	{
		.p = "基",
		.font = 
		{
			0x20,0x80,0xff,0xe0,0x20,0x80,0x3f,0x80,0x20,0x80,0x3f,0x80,
			0x20,0x80,0xff,0xe0,0x44,0x40,0xbf,0xa0,0x4,0x0,0xff,0xe0,
		},
	},
	{
		.p = "波",
		.font = 
		{
			0x1,0x0,0x81,0x0,0x5f,0xe0,0x11,0x20,0x11,0x0,0x9f,0xc0,
			0x54,0x40,0x14,0x40,0x12,0x80,0x51,0x0,0x92,0x80,0x2c,0x60,
		},
	},
	{
		.p = "值",
		.font = 
		{
			0x22,0x0,0x2f,0xe0,0x42,0x0,0x4f,0xc0,0xc8,0x40,0x4f,0xc0,
			0x48,0x40,0x4f,0xc0,0x48,0x40,0x4f,0xc0,0x48,0x40,0x5f,0xe0,
		},
	},
	{
		.p = "全",
		.font = 
		{
			0x4,0x0,0xa,0x0,0x11,0x0,0x20,0x80,0xc0,0x60,0x3f,0x80,
			0x4,0x0,0x4,0x0,0x7f,0xc0,0x4,0x0,0x4,0x0,0xff,0xe0,
		},
	},
	{
		.p = "开",
		.font = 
		{
			0x0,0x0,0x7f,0xc0,0x11,0x0,0x11,0x0,0x11,0x0,0x11,0x0,
			0xff,0xe0,0x11,0x0,0x11,0x0,0x21,0x0,0x21,0x0,0x41,0x0,
		},
	},
	{
		.p = "关",
		.font = 
		{
			0x20,0x80,0x11,0x0,0x0,0x0,0x7f,0xc0,0x4,0x0,0x4,0x0,
			0xff,0xe0,0x4,0x0,0xa,0x0,0x11,0x0,0x20,0x80,0xc0,0x60,
		},
	},
	{
		.p = "中",
		.font = 
		{
			0x4,0x0,0x4,0x0,0x4,0x0,0x7f,0xc0,0x44,0x40,0x44,0x40,
			0x44,0x40,0x7f,0xc0,0x44,0x40,0x4,0x0,0x4,0x0,0x4,0x0,
		},
	},
	{
		.p = "文",
		.font = 
		{
			0x8,0x0,0x4,0x0,0xff,0xe0,0x20,0x80,0x20,0x80,0x11,0x0,
			0x11,0x0,0xa,0x0,0x4,0x0,0xa,0x0,0x31,0x80,0xc0,0x60,
		},
	},
	{
		.p = "英",
		.font = 
		{
			0x11,0x0,0xff,0xe0,0x11,0x0,0x4,0x0,0x7f,0xc0,0x44,0x40,
			0x44,0x40,0x44,0x40,0xff,0xe0,0xa,0x0,0x31,0x80,0xc0,0x60,
		},
	},
	{
		.p = "是",
		.font = 
		{
			0x3f,0x80,0x20,0x80,0x3f,0x80,0x20,0x80,0x3f,0x80,0x0,0x0,
			0xff,0xe0,0x4,0x0,0x27,0xc0,0x24,0x0,0x54,0x0,0x8f,0xe0,
		},
	},
	{
		.p = "否",
		.font = 
		{
			0xff,0xe0,0x4,0x0,0xd,0x80,0x34,0x40,0xc4,0x20,0x4,0x0,
			0x0,0x0,0x7f,0xc0,0x40,0x40,0x40,0x40,0x7f,0xc0,0x40,0x40,
		},
	},
	{
		.p = "常",
		.font = 
		{
			0x24,0x80,0x15,0x0,0xff,0xe0,0x80,0x20,0x3f,0x80,0x20,0x80,
			0x3f,0x80,0x4,0x0,0x7f,0xc0,0x44,0x40,0x44,0xc0,0x4,0x0,
		},
	},
	{
		.p = "闭",
		.font = 
		{
			0x40,0x0,0x27,0xe0,0x0,0x20,0x42,0x20,0x42,0x20,0x5f,0xa0,
			0x42,0x20,0x46,0x20,0x4a,0x20,0x52,0x20,0x46,0x20,0x40,0xe0,
		},
	},
	{
		.p = "地",
		.font = 
		{
			0x21,0x0,0x21,0x0,0x25,0x60,0x25,0xa0,0xf7,0x20,0x2d,0x20,
			0x25,0x20,0x25,0x60,0x25,0x0,0x34,0x20,0xc4,0x20,0x3,0xe0,
		},
	},
	{
		.p = "址",
		.font = 
		{
			0x20,0x80,0x20,0x80,0x20,0x80,0x24,0x80,0xf4,0xe0,0x24,0x80,
			0x24,0x80,0x24,0x80,0x24,0x80,0x34,0x80,0xc4,0x80,0xf,0xe0,
		},
	},
	{
		.p = "特",
		.font = 
		{
			0x21,0x0,0x21,0x0,0xa7,0xc0,0xf1,0x0,0xaf,0xe0,0x20,0x80,
			0x37,0xe0,0xe0,0x80,0x24,0x80,0x22,0x80,0x20,0x80,0x23,0x80,
		},
	},
	{
		.p = "校",
		.font = 
		{
			0x22,0x0,0x21,0x0,0x2f,0xe0,0xf0,0x0,0x22,0x80,0x74,0x40,
			0x6a,0xa0,0xa2,0x80,0x22,0x80,0x21,0x0,0x22,0x80,0x2c,0x60,
		},
	},
	{
		.p = "验",
		.font = 
		{
			0x1,0x0,0xe1,0x0,0x22,0x80,0xa4,0x40,0xa8,0x20,0xa7,0xc0,
			0xf0,0x0,0x12,0x40,0x39,0x40,0xd5,0x40,0x14,0x80,0x6f,0xe0,
		},
	},
	{
		.p = "位",
		.font = 
		{
			0x22,0x0,0x21,0x0,0x40,0x0,0x5f,0xe0,0xc0,0x0,0x48,0x40,
			0x48,0x40,0x44,0x40,0x44,0x80,0x44,0x80,0x41,0x0,0x5f,0xe0,
		},
	},
	{
		.p = "停",
		.font = 
		{
			0x11,0x0,0x1f,0xe0,0x20,0x0,0x27,0xc0,0x64,0x40,0xa7,0xc0,
			0x20,0x0,0x2f,0xe0,0x28,0x20,0x27,0xc0,0x21,0x0,0x23,0x0,
		},
	},
	{
		.p = "止",
		.font = 
		{
			0x2,0x0,0x2,0x0,0x2,0x0,0x22,0x0,0x23,0xc0,0x22,0x0,
			0x22,0x0,0x22,0x0,0x22,0x0,0x22,0x0,0x22,0x0,0xff,0xe0,
		},
	},
	{
		.p = "满",
		.font = 
		{
			0x8,0x80,0xbf,0xe0,0x48,0x80,0x0,0x0,0x3f,0xe0,0x85,0x0,
			0x7f,0xe0,0x25,0x20,0x25,0x20,0x6a,0xa0,0xa0,0x20,0x20,0x60,
		},
	},
	{
		.p = "体",
		.font = 
		{
			0x22,0x0,0x22,0x0,0x42,0x0,0x5f,0xc0,0xc2,0x0,0x47,0x0,
			0x4a,0x80,0x52,0x40,0x62,0x20,0x4f,0x80,0x42,0x0,0x42,0x0,
		},
	},
	{
		.p = "号",
		.font = 
		{
			0x3f,0x80,0x20,0x80,0x20,0x80,0x3f,0x80,0x0,0x0,0xff,0xe0,
			0x10,0x0,0x20,0x0,0x3f,0xc0,0x0,0x40,0x0,0x40,0x1,0x80,
		},
	},
	{
		.p = "继",
		.font = 
		{
			0x20,0x80,0x24,0x80,0x46,0xa0,0x95,0xc0,0xe4,0x80,0x27,0xe0,
			0x44,0x80,0xf5,0xc0,0x6,0xa0,0x34,0x80,0xc4,0x80,0x7,0xe0,
		},
	},
	{
		.p = "器",
		.font = 
		{
			0x7b,0xc0,0x4a,0x40,0x7b,0xc0,0x4,0x80,0x4,0x40,0xff,0xe0,
			0xa,0x0,0x31,0x80,0xc0,0x60,0x7b,0xc0,0x4a,0x40,0x7b,0xc0,
		},
	},
	{
		.p = "错",
		.font = 
		{
			0x42,0x40,0x42,0x40,0x77,0xe0,0x82,0x40,0xef,0xe0,0x40,0x0,
			0x47,0xe0,0xf4,0x20,0x47,0xe0,0x54,0x20,0x67,0xe0,0x44,0x20,
		},
	},
	{
		.p = "误",
		.font = 
		{
			0x8f,0x80,0x48,0x80,0x8,0x80,0xf,0x80,0xc0,0x0,0x5f,0xc0,
			0x42,0x0,0x7f,0xe0,0x42,0x0,0x65,0x0,0x48,0x80,0x10,0x60,
		},
	},
	{
		.p = "模",
		.font = 
		{
			0x22,0x80,0x2f,0xe0,0x22,0x80,0xf7,0xc0,0x24,0x40,0x67,0xc0,
			0x74,0x40,0xa7,0xc0,0x21,0x0,0x2f,0xe0,0x22,0x80,0x2c,0x60,
		},
	},
	{
		.p = "手",
		.font = 
		{
			0x3,0xc0,0x7c,0x0,0x4,0x0,0x4,0x0,0x7f,0xc0,0x4,0x0,
			0x4,0x0,0xff,0xe0,0x4,0x0,0x4,0x0,0x4,0x0,0x1c,0x0,
		},
	},
	{
		.p = "双",
		.font = 
		{
			0x0,0x0,0xfb,0xe0,0xa,0x20,0xa,0x20,0x8a,0x20,0x51,0x40,
			0x51,0x40,0x20,0x80,0x20,0x80,0x51,0x40,0x52,0x40,0x84,0x20,
		},
	},
	{
		.p = "步",
		.font = 
		{
			0x4,0x0,0x24,0x0,0x27,0xc0,0x24,0x0,0x24,0x0,0xff,0xe0,
			0x0,0x0,0x14,0x40,0x24,0x80,0x47,0x0,0xc,0x0,0x70,0x0,
		},
	},
	{
		.p = "星",
		.font = 
		{
			0x7f,0xc0,0x40,0x40,0x7f,0xc0,0x40,0x40,0x7f,0xc0,0x4,0x0,
			0x44,0x0,0x7f,0xc0,0x84,0x0,0x3f,0x80,0x4,0x0,0xff,0xe0,
		},
	},
	{
		.p = "三",
		.font = 
		{
			0x0,0x0,0x7f,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
			0x3f,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xe0,
		},
	},
	{
		.p = "角",
		.font = 
		{
			0x20,0x0,0x3f,0x0,0x41,0x0,0x82,0x0,0x7f,0xc0,0x44,0x40,
			0x7f,0xc0,0x44,0x40,0x7f,0xc0,0x44,0x40,0x44,0x40,0x80,0xc0,
		},
	},
	{
		.p = "自",
		.font = 
		{
			0x4,0x0,0x8,0x0,0x7f,0xc0,0x40,0x40,0x40,0x40,0x7f,0xc0,
			0x40,0x40,0x40,0x40,0x7f,0xc0,0x40,0x40,0x40,0x40,0x7f,0xc0,
		},
	},
	{
		.p = "耦",
		.font = 
		{
			0x27,0xc0,0x25,0x40,0xf7,0xc0,0x25,0x40,0x75,0x40,0x27,0xc0,
			0xf1,0x0,0x2f,0xe0,0x79,0x20,0xab,0xa0,0x28,0xa0,0x28,0x60,
		},
	},
	{
		.p = "降",
		.font = 
		{
			0x2,0x0,0xf3,0xc0,0x96,0x40,0x91,0x80,0xa6,0x60,0xa1,0x0,
			0x97,0xc0,0x91,0x0,0x95,0x0,0xe7,0xe0,0x81,0x0,0x81,0x0,
		},
	},
	{
		.p = "控",
		.font = 
		{
			0x42,0x0,0x41,0x0,0x4f,0xe0,0xe8,0x20,0x42,0x80,0x44,0x40,
			0x68,0x20,0xc7,0xc0,0x41,0x0,0x41,0x0,0x41,0x0,0xcf,0xe0,
		},
	},
	{
		.p = "制",
		.font = 
		{
			0x10,0x20,0x50,0x20,0x7d,0x20,0x91,0x20,0xff,0x20,0x11,0x20,
			0x7d,0x20,0x55,0x20,0x55,0x20,0x54,0x20,0x5c,0x20,0x10,0xe0,
		},
	},
	{
		.p = "权",
		.font = 
		{
			0x20,0x0,0x2f,0xc0,0x24,0x40,0xf4,0x40,0x24,0x40,0x64,0x40,
			0x72,0x80,0xa2,0x80,0x21,0x0,0x22,0x80,0x24,0x40,0x28,0x20,
		},
	},
	{
		.p = "限",
		.font = 
		{
			0xf7,0xc0,0x94,0x40,0x94,0x40,0xa7,0xc0,0xa4,0x40,0x94,0x40,
			0x97,0xc0,0x95,0x20,0x95,0x40,0xe4,0x80,0x86,0x40,0x84,0x20,
		},
	},
	{
		.p = "板",
		.font = 
		{
			0x20,0x60,0x27,0x80,0x24,0x0,0xf4,0x0,0x27,0xe0,0x75,0x20,
			0x6d,0x20,0xa5,0x40,0x25,0x40,0x24,0x80,0x29,0x40,0x32,0x20,
		},
	},
	{
		.p = "就",
		.font = 
		{
			0x42,0x0,0x22,0x80,0xfa,0x40,0x7,0xe0,0xfa,0x80,0x8a,0x80,
			0x8a,0x80,0xfa,0x80,0x22,0x80,0xb2,0xa0,0xaa,0xa0,0x64,0x60,
		},
	},
	{
		.p = "远",
		.font = 
		{
			0x80,0x0,0x4f,0xc0,0x0,0x0,0x0,0x0,0x1f,0xe0,0xc4,0x80,
			0x44,0x80,0x44,0x80,0x48,0xa0,0x50,0x60,0x40,0x0,0xbf,0xe0,
		},
	},
	{
		.p = "热",
		.font = 
		{
			0x22,0x0,0x22,0x0,0xf7,0x80,0x22,0x80,0x36,0x80,0xe2,0xa0,
			0x25,0xa0,0x24,0x60,0x68,0x20,0x0,0x0,0x52,0x40,0x89,0x20,
		},
	},
	{
		.p = "容",
		.font = 
		{
			0x4,0x0,0xff,0xe0,0x91,0x20,0x24,0x80,0xa,0x0,0x31,0x80,
			0xc0,0x60,0x3f,0x80,0x20,0x80,0x20,0x80,0x3f,0x80,0x20,0x80,
		},
	},
	{
		.p = "状",
		.font = 
		{
			0x21,0x0,0x21,0x40,0xa1,0x20,0x61,0x0,0x2f,0xe0,0x21,0x0,
			0x22,0x80,0x62,0x80,0xa2,0x80,0x24,0x40,0x24,0x40,0x28,0x20,
		},
	},
	{
		.p = "态",
		.font = 
		{
			0x4,0x0,0x4,0x0,0xff,0xe0,0xa,0x0,0x11,0x0,0x24,0x80,
			0xc2,0x60,0x4,0x0,0x52,0x40,0x52,0x20,0x90,0xa0,0xf,0x80,
		},
	},
	{
		.p = "注",
		.font = 
		{
			0x4,0x0,0x82,0x0,0x40,0x0,0x1f,0xc0,0x2,0x0,0x82,0x0,
			0x42,0x0,0x1f,0xc0,0x2,0x0,0x42,0x0,0x82,0x0,0x3f,0xe0,
		},
	},
};

#endif