/*
 * fnt8x8.c - a font in standard format
 *
 * Automatically generated by txtfnt.c
 */


#include "portab.h"
#include "fontdef.h"

extern UWORD off_f8x8[], dat_f8x8[];

struct font_head f8x8 ={
    00001,  /* WORD font_id */
    00009,  /* WORD point */
    "8x8 system font",  /*   BYTE name[32]	*/
    0,  /* WORD first_ade */
    255,  /* WORD last_ade */
    6,  /* UWORD top */
    6,  /* UWORD ascent */
    4,  /* UWORD half */
    1,  /* UWORD descent */
    1,  /* UWORD bottom */
    7,  /* UWORD max_char_width */
    8,  /* UWORD max_cell_width */
    1,  /* UWORD left_offset */
    3,  /* UWORD right_offset */
    1,  /* UWORD thicken */
    1,  /* UWORD ul_size */
    0x5555, /* UWORD lighten */
    0x5555, /* UWORD skew */
    F_STDFORM | F_MONOSPACE | F_DEFAULT,  /* UWORD flags	*/
    0,			/*   UBYTE *hor_table	*/
    off_f8x8,		/*   UWORD *off_table	*/
    dat_f8x8,		/*   UWORD *dat_table	*/
    00256,  /* UWORD form_width */
    00008,  /* UWORD form_height */
    0,  /* struct font * next_font */
    0   /* UWORD next_seg */
}

UWORD off_f8x8[257] =
{
    0x0000, 0x0008, 0x0010, 0x0018, 0x0020, 0x0028, 0x0030, 0x0038, 
    0x0040, 0x0048, 0x0050, 0x0058, 0x0060, 0x0068, 0x0070, 0x0078, 
    0x0080, 0x0088, 0x0090, 0x0098, 0x00a0, 0x00a8, 0x00b0, 0x00b8, 
    0x00c0, 0x00c8, 0x00d0, 0x00d8, 0x00e0, 0x00e8, 0x00f0, 0x00f8, 
    0x0100, 0x0108, 0x0110, 0x0118, 0x0120, 0x0128, 0x0130, 0x0138, 
    0x0140, 0x0148, 0x0150, 0x0158, 0x0160, 0x0168, 0x0170, 0x0178, 
    0x0180, 0x0188, 0x0190, 0x0198, 0x01a0, 0x01a8, 0x01b0, 0x01b8, 
    0x01c0, 0x01c8, 0x01d0, 0x01d8, 0x01e0, 0x01e8, 0x01f0, 0x01f8, 
    0x0200, 0x0208, 0x0210, 0x0218, 0x0220, 0x0228, 0x0230, 0x0238, 
    0x0240, 0x0248, 0x0250, 0x0258, 0x0260, 0x0268, 0x0270, 0x0278, 
    0x0280, 0x0288, 0x0290, 0x0298, 0x02a0, 0x02a8, 0x02b0, 0x02b8, 
    0x02c0, 0x02c8, 0x02d0, 0x02d8, 0x02e0, 0x02e8, 0x02f0, 0x02f8, 
    0x0300, 0x0308, 0x0310, 0x0318, 0x0320, 0x0328, 0x0330, 0x0338, 
    0x0340, 0x0348, 0x0350, 0x0358, 0x0360, 0x0368, 0x0370, 0x0378, 
    0x0380, 0x0388, 0x0390, 0x0398, 0x03a0, 0x03a8, 0x03b0, 0x03b8, 
    0x03c0, 0x03c8, 0x03d0, 0x03d8, 0x03e0, 0x03e8, 0x03f0, 0x03f8, 
    0x0400, 0x0408, 0x0410, 0x0418, 0x0420, 0x0428, 0x0430, 0x0438, 
    0x0440, 0x0448, 0x0450, 0x0458, 0x0460, 0x0468, 0x0470, 0x0478, 
    0x0480, 0x0488, 0x0490, 0x0498, 0x04a0, 0x04a8, 0x04b0, 0x04b8, 
    0x04c0, 0x04c8, 0x04d0, 0x04d8, 0x04e0, 0x04e8, 0x04f0, 0x04f8, 
    0x0500, 0x0508, 0x0510, 0x0518, 0x0520, 0x0528, 0x0530, 0x0538, 
    0x0540, 0x0548, 0x0550, 0x0558, 0x0560, 0x0568, 0x0570, 0x0578, 
    0x0580, 0x0588, 0x0590, 0x0598, 0x05a0, 0x05a8, 0x05b0, 0x05b8, 
    0x05c0, 0x05c8, 0x05d0, 0x05d8, 0x05e0, 0x05e8, 0x05f0, 0x05f8, 
    0x0600, 0x0608, 0x0610, 0x0618, 0x0620, 0x0628, 0x0630, 0x0638, 
    0x0640, 0x0648, 0x0650, 0x0658, 0x0660, 0x0668, 0x0670, 0x0678, 
    0x0680, 0x0688, 0x0690, 0x0698, 0x06a0, 0x06a8, 0x06b0, 0x06b8, 
    0x06c0, 0x06c8, 0x06d0, 0x06d8, 0x06e0, 0x06e8, 0x06f0, 0x06f8, 
    0x0700, 0x0708, 0x0710, 0x0718, 0x0720, 0x0728, 0x0730, 0x0738, 
    0x0740, 0x0748, 0x0750, 0x0758, 0x0760, 0x0768, 0x0770, 0x0778, 
    0x0780, 0x0788, 0x0790, 0x0798, 0x07a0, 0x07a8, 0x07b0, 0x07b8, 
    0x07c0, 0x07c8, 0x07d0, 0x07d8, 0x07e0, 0x07e8, 0x07f0, 0x07f8, 
    0x0000, 
};

UWORD dat_f8x8[] =
{
    0x0001, 0x7c7c, 0x000e, 0x3c3c, 0x3c66, 0x7c66, 0x0060, 0x0000, 
    0x0018, 0x0c66, 0x0c00, 0x3434, 0x6600, 0x0000, 0x003c, 0x0038, 
    0x0003, 0xc6c6, 0x001c, 0x6666, 0x6666, 0x6666, 0xc060, 0x0000, 
    0x3c66, 0x1800, 0x1818, 0x5858, 0x001e, 0x3e1c, 0x0018, 0x7e6c, 
    0x0006, 0xc6c6, 0x0018, 0x6e66, 0x6e66, 0x663c, 0x607c, 0x7c66, 
    0x6600, 0x7e66, 0x0000, 0x003c, 0xe60c, 0x360c, 0x763c, 0x0038, 
    0x008c, 0x007c, 0x0018, 0x763c, 0x6a7e, 0x7c18, 0x3066, 0x663c, 
    0x603c, 0x6066, 0x3c18, 0x3c66, 0x6606, 0x360c, 0xdc66, 0x7e00, 
    0x00d8, 0xc6c6, 0x0018, 0x6666, 0x6e66, 0x603c, 0x0066, 0x6618, 
    0x667e, 0x7c66, 0x0630, 0x0666, 0x6606, 0x360c, 0xc866, 0x0000, 
    0x0070, 0xc6c6, 0x001c, 0x6666, 0x6066, 0x6066, 0x0066, 0x663c, 
    0x3c60, 0x603e, 0x7e60, 0x7e66, 0xf606, 0x1c0c, 0xdc3c, 0x7e00, 
    0x0020, 0x7c7c, 0x000e, 0x3c3c, 0x3e66, 0x6066, 0x0066, 0x7c66, 
    0x083c, 0x7e06, 0x3e66, 0x3e66, 0x0600, 0x000c, 0x7618, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6000, 
    0x3800, 0x007c, 0x003c, 0x003c, 0x1c00, 0x0000, 0x003c, 0x0000, 
    0x187e, 0x067c, 0x1870, 0x183c, 0x183c, 0x3c66, 0x0018, 0x0000, 
    0x6666, 0x0066, 0x0c00, 0x3466, 0xf600, 0x0000, 0x1c00, 0x1838, 
    0x3cc3, 0x06c6, 0x1838, 0x3866, 0x3c18, 0x6666, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x1800, 0x5800, 0x667e, 0x363e, 0x363c, 0x187c, 
    0x66d3, 0x06c6, 0x1818, 0x1866, 0x6618, 0x6666, 0x3c38, 0x3e66, 
    0x003c, 0x7e3c, 0x0000, 0x0000, 0x6636, 0x3606, 0x6666, 0x7e38, 
    0xc3d3, 0x007c, 0x1818, 0x183e, 0x6618, 0x663c, 0x0618, 0x6666, 
    0x6666, 0x1b66, 0x383e, 0x3c00, 0x6636, 0x3606, 0x7c7e, 0x1800, 
    0xe7db, 0x0606, 0x1818, 0x1806, 0x7e18, 0x7618, 0x3e18, 0x6666, 
    0x667e, 0x7f66, 0x1830, 0x6600, 0x6636, 0x3606, 0x6666, 0x1800, 
    0x24c3, 0x0606, 0x0038, 0x180c, 0x6618, 0x6c18, 0x6618, 0x663e, 
    0x6660, 0xd866, 0x1830, 0x6600, 0xf636, 0x7e06, 0x6666, 0x0000, 
    0x24c3, 0x067c, 0x1870, 0x7e38, 0x663c, 0x3618, 0x3e3c, 0x3e06, 
    0x3e3c, 0x7e3c, 0x3c30, 0x3c00, 0x0600, 0x0006, 0x7c3c, 0x7e00, 
    0x3c7e, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x067c, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x1c00, 0x0000, 0x6000, 0x0000, 
    0x3c18, 0x7c00, 0x6600, 0x3c00, 0x7c06, 0x7c7e, 0x6018, 0x0000, 
    0x0c30, 0x3f66, 0x0c00, 0x020c, 0x0060, 0x0000, 0x0000, 0x3000, 
    0x243c, 0x0600, 0x6666, 0x6618, 0x6606, 0x6606, 0x6000, 0x0000, 
    0x1818, 0x7800, 0x1800, 0x3c18, 0x666e, 0x7efe, 0xfe3c, 0x1800, 
    0x243c, 0x063c, 0x663c, 0x0618, 0x6606, 0x660c, 0x7c18, 0x7c7e, 
    0x0000, 0xd866, 0x0000, 0x6630, 0x7666, 0x6666, 0x6666, 0x0c00, 
    0xe73c, 0x7c06, 0x00ff, 0x0c00, 0x7c06, 0x7c18, 0x6618, 0x660c, 
    0x3c3c, 0xde66, 0x3c7c, 0x6e00, 0x3c66, 0x7666, 0x6266, 0x1800, 
    0xc37e, 0xc07e, 0x003c, 0x1818, 0x6606, 0x6c30, 0x6618, 0x6018, 
    0x7e7e, 0xf866, 0x660c, 0x7600, 0x6e66, 0x0666, 0x6066, 0x3018, 
    0x6610, 0xc066, 0x0066, 0x3018, 0x6666, 0x6660, 0x6618, 0x6030, 
    0x6060, 0xd866, 0x660c, 0x6600, 0x667e, 0x7e7e, 0x6024, 0x0018, 
    0x3c38, 0x7c3c, 0x0000, 0x7e00, 0x7c3c, 0x667e, 0x7c18, 0x607e, 
    0x3c3c, 0xdf3e, 0x3c0c, 0x3c00, 0x0000, 0x0000, 0x6066, 0x7e00, 
    0x1810, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0070, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x4000, 0x0000, 0x0000, 0xf800, 0x0000, 
    0x1818, 0x7c78, 0x0000, 0x7e00, 0x3c66, 0x3c1e, 0x0060, 0x000e, 
    0x1866, 0x1818, 0x0cc6, 0x0000, 0x0000, 0x0000, 0x001c, 0x0c00, 
    0x1c1c, 0x0660, 0x6c18, 0x0c18, 0x666c, 0x6618, 0x0060, 0x0018, 
    0x6600, 0x6618, 0x18cc, 0x0210, 0x7c3c, 0x667e, 0x0036, 0x1800, 
    0xf616, 0x0678, 0xfe18, 0x1818, 0x6078, 0x6018, 0x3c66, 0x3e18, 
    0x0000, 0x003c, 0x00d8, 0x3c38, 0x0c0c, 0x6666, 0xfe78, 0x300f, 
    0x8310, 0x7c60, 0x6c7e, 0x0c00, 0x6070, 0x3c18, 0x606c, 0x6030, 
    0x3c38, 0x3c60, 0x6636, 0x6e10, 0x0c0c, 0x3c76, 0x6cdc, 0x1818, 
    0x8310, 0x067e, 0x6c18, 0x0618, 0x6078, 0x0618, 0x6078, 0x3c18, 
    0x0618, 0x6660, 0x666b, 0x7610, 0x0c00, 0x0e06, 0x6ccc, 0x0cd8, 
    0xf670, 0x0618, 0xfe18, 0x6618, 0x666c, 0x6618, 0x606c, 0x0618, 
    0x7e18, 0x663c, 0x66c3, 0x6610, 0x7e00, 0x7e06, 0x6cec, 0x0070, 
    0x1cf0, 0x7c1e, 0x6c00, 0x3c30, 0x3c66, 0x3c1e, 0x3c66, 0x7c0e, 
    0x3e3c, 0x3c18, 0x3e86, 0x3c00, 0x0000, 0x0006, 0x6c78, 0x7e30, 
    0x1860, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0018, 0x000f, 0x4000, 0x0000, 0x0000, 0x4800, 0x0000, 
    0x18f0, 0xc607, 0x1800, 0x0c06, 0x7860, 0x7e40, 0x0638, 0x0018, 
    0x6618, 0x661c, 0x34c6, 0x007a, 0x0000, 0x0000, 0xfe0c, 0x0038, 
    0x38c0, 0xc60f, 0x3e00, 0x1c0c, 0x6c60, 0x1860, 0x0618, 0x1818, 
    0x0066, 0x003a, 0x58cc, 0x00ca, 0x1e3e, 0x3e36, 0x6618, 0x0e6c, 
    0x6ffe, 0xc61f, 0x6000, 0x3c18, 0x6660, 0x1830, 0x3e18, 0x7e18, 
    0x3c00, 0x0030, 0x00d8, 0x7eca, 0x0606, 0x0636, 0x3038, 0x1b6c, 
    0xc1d8, 0x7c18, 0x3c00, 0x6c30, 0x6660, 0x1818, 0x6618, 0x1818, 
    0x0638, 0x3c7c, 0x7c36, 0xdbca, 0x0e06, 0x361c, 0x1854, 0x1b6c, 
    0xc1de, 0x0618, 0x0600, 0x7e18, 0x6660, 0x180c, 0x6618, 0x1818, 
    0x3e18, 0x6630, 0x666e, 0xdf7a, 0x1e06, 0x360c, 0x3054, 0x186c, 
    0x6f18, 0x0610, 0x7c30, 0x0c0c, 0x6c60, 0x1806, 0x6618, 0x1818, 
    0x6618, 0x6630, 0x66d6, 0xd80a, 0x363e, 0x340c, 0x6638, 0x1800, 
    0x3818, 0x061e, 0x1830, 0x0c06, 0x787e, 0x1802, 0x3e3c, 0x0e18, 
    0x3e3c, 0x3c7e, 0x669f, 0x7e0a, 0x0000, 0x300c, 0xfe30, 0x1800, 
    0x1800, 0x0017, 0x0060, 0x0000, 0x0000, 0x0000, 0x0000, 0x0018, 
    0x0000, 0x0000, 0x0006, 0x000a, 0x0000, 0x0000, 0x0060, 0x1800, 
    0x3cf0, 0x7cf0, 0x0000, 0x7e00, 0x7ec6, 0x6678, 0x0000, 0x0070, 
    0x3060, 0x3066, 0x3400, 0x7f7e, 0x0060, 0x000e, 0x0000, 0x1838, 
    0x99c0, 0xc0f8, 0x6600, 0x6000, 0x60ee, 0x6618, 0x0000, 0x0018, 
    0x1830, 0x1866, 0x5818, 0xd8c3, 0x7e7e, 0x781b, 0x1e10, 0x186c, 
    0xc3df, 0xc0ec, 0x6c00, 0x7c7e, 0x60fe, 0x6618, 0x3cec, 0x6618, 
    0x0000, 0x003c, 0x0000, 0xd8bd, 0x0c06, 0x0c3c, 0x387c, 0x1818, 
    0xe7db, 0x7c04, 0x187e, 0x0600, 0x7cd6, 0x6618, 0x66fe, 0x660c, 
    0x3c38, 0x3c18, 0x6618, 0xdeb1, 0x0c06, 0x0c66, 0x6cd6, 0x1830, 
    0xc3ff, 0x0604, 0x3000, 0x0600, 0x60c6, 0x6618, 0x7ed6, 0x6618, 
    0x0618, 0x663c, 0x7618, 0xd8b1, 0x0c06, 0x0c66, 0x6cd6, 0xd87c, 
    0x991e, 0x0604, 0x6600, 0x667e, 0x60c6, 0x6618, 0x60c6, 0x6618, 
    0x7e18, 0x6618, 0x6e18, 0xd8bd, 0x0c0e, 0x0c3c, 0x6cd6, 0xd800, 
    0x3c1b, 0x7c3c, 0x4600, 0x3c00, 0x7ec6, 0x3e78, 0x3cc6, 0x3e70, 
    0x3e3c, 0x3c18, 0x6618, 0x7fc3, 0x0000, 0x00d8, 0x387c, 0x7000, 
    0x0000, 0x0054, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0018, 0x007e, 0x0000, 0x0070, 0x0010, 0x0000, 
    0xff05, 0x7c11, 0x3800, 0x3c60, 0x7e66, 0x6610, 0x1c00, 0x0000, 
    0x1866, 0x181c, 0x001b, 0x307e, 0x0000, 0x0000, 0x003e, 0x1878, 
    0xff05, 0xc00b, 0x6c00, 0x6030, 0x6076, 0x6638, 0x3000, 0x0060, 
    0x1800, 0x6636, 0x3c36, 0x18c3, 0x7c6c, 0xd610, 0x0070, 0x180c, 
    0xfe05, 0xc00d, 0x3800, 0x6018, 0x607e, 0x666c, 0x7c7c, 0x66f2, 
    0x0018, 0x0066, 0x066c, 0x00bd, 0x063e, 0xd638, 0x6c60, 0x0038, 
    0xfc0d, 0x7c06, 0x7000, 0x7c0c, 0x7c7e, 0x66c6, 0x3066, 0x669e, 
    0x3c3c, 0x667c, 0x3ed8, 0x18a5, 0x6666, 0xd66c, 0x6c7e, 0x7e0c, 
    0xf90d, 0xc607, 0xde00, 0x6618, 0x606e, 0x6600, 0x3066, 0x660c, 
    0x0666, 0x6666, 0x666c, 0x3cb9, 0x6666, 0xd6c6, 0x6c60, 0x0078, 
    0xf319, 0xc62e, 0xcc18, 0x6630, 0x6066, 0x3c00, 0x3066, 0x3c00, 
    0x7e7e, 0x6666, 0x3e36, 0x66ad, 0x666e, 0xfe82, 0x6c70, 0x1800, 
    0xe779, 0x7c39, 0x7618, 0x3c60, 0x6066, 0x1800, 0x3066, 0x1800, 
    0x3e66, 0x3e7c, 0x001b, 0x7ec3, 0x0000, 0x0000, 0x7f3e, 0x1800, 
    0x0071, 0x0038, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0060, 0x3c00, 0x667e, 0x0000, 0x0000, 0xc000, 0x0000, 
    0xe7a0, 0x7c04, 0x1802, 0x7e3c, 0x3e3c, 0xc600, 0x0000, 0x0000, 
    0x0018, 0x301e, 0x00d8, 0x34f1, 0x0000, 0x0066, 0x003c, 0x0000, 
    0xc3a0, 0x0628, 0x1806, 0x0666, 0x6066, 0xc600, 0x0000, 0x0018, 
    0x0000, 0x1830, 0x3c6c, 0x585b, 0x1c1c, 0x7cf7, 0x0066, 0x32fe, 
    0x99a0, 0x06d8, 0x180c, 0x0c06, 0x6066, 0xc600, 0x3e3c, 0xc618, 
    0x3c18, 0x007c, 0x6636, 0x005f, 0x0c0c, 0x6c99, 0x7e66, 0x4c00, 
    0x3cb0, 0x0028, 0x0018, 0x180c, 0x6e66, 0xd600, 0x6666, 0xc634, 
    0x603c, 0x6630, 0x661b, 0x1855, 0x0c0c, 0x6c99, 0x1866, 0x0000, 
    0x99b0, 0x06d0, 0x0030, 0x3018, 0x6666, 0xfe00, 0x6666, 0xd634, 
    0x6066, 0x6630, 0x6636, 0x3c51, 0x0c0c, 0x6cef, 0x1866, 0x3200, 
    0xc398, 0x0610, 0x0060, 0x3000, 0x6666, 0xee00, 0x3e66, 0x7c62, 
    0x3c7e, 0x6630, 0x3c6c, 0x6600, 0x0c3c, 0xec66, 0x1866, 0x4c00, 
    0xe79e, 0x06e0, 0x0040, 0x3018, 0x3e3c, 0xc6fe, 0x063c, 0x6c7e, 
    0x0866, 0x3e60, 0x00d8, 0x7e00, 0x0000, 0x0000, 0x1866, 0x0000, 
    0x008e, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x7c00, 0x0000, 
    0x1800, 0x0000, 0x3c00, 0x6600, 0x0000, 0x0000, 0x1000, 0x0000, 
    
};
