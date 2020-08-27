// This is the 'classic' fixed-space bitmap font for Adafruit_GFX since 1.0.
// See gfxfont.h for newer custom bitmap font info.

// Modified to show the Lily58 logo instead of the qmk logo
#include "progmem.h"

// Standard ASCII 5x7 font
const unsigned char font[] PROGMEM = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x5b, 0x4f, 0x5b, 0x3e, 0x00, 0x3e, 0x6b, 0x4f, 0x6b, 
0x3e, 0x00, 0x1c, 0x3e, 0x7c, 0x3e, 0x1c, 0x00, 0x18, 0x3c, 0x7e, 0x3c, 0x18, 0x00, 0x1c, 0x57, 
0x7d, 0x57, 0x1c, 0x00, 0x1c, 0x5e, 0x7f, 0x5e, 0x1c, 0x00, 0x00, 0x18, 0x3c, 0x18, 0x00, 0x00, 
0xff, 0xe7, 0xc3, 0xe7, 0xff, 0x00, 0x00, 0x18, 0x24, 0x18, 0x00, 0x00, 0xff, 0xe7, 0xdb, 0xe7, 
0xff, 0x00, 0x30, 0x48, 0x3a, 0x06, 0x0e, 0x00, 0x26, 0x29, 0x79, 0x29, 0x26, 0x00, 0x40, 0x7f, 
0x05, 0x05, 0x07, 0x00, 0x40, 0x7f, 0x05, 0x25, 0x3f, 0x00, 0x5a, 0x3c, 0xe7, 0x3c, 0x5a, 0x00, 
0x7f, 0x3e, 0x1c, 0x1c, 0x08, 0x00, 0x08, 0x1c, 0x1c, 0x3e, 0x7f, 0x00, 0x14, 0x22, 0x7f, 0x22, 
0x14, 0x00, 0x5f, 0x5f, 0x00, 0x5f, 0x5f, 0x00, 0x06, 0x09, 0x7f, 0x01, 0x7f, 0x00, 0x00, 0x66, 
0x89, 0x95, 0x6a, 0x00, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00, 0x94, 0xa2, 0xff, 0xa2, 0x94, 0x00, 
0x08, 0x04, 0x7e, 0x04, 0x08, 0x00, 0x10, 0x20, 0x7e, 0x20, 0x10, 0x00, 0x08, 0x08, 0x2a, 0x1c, 
0x08, 0x00, 0x08, 0x1c, 0x2a, 0x08, 0x08, 0x00, 0x1e, 0x10, 0x10, 0x10, 0x10, 0x00, 0x0c, 0x1e, 
0x0c, 0x1e, 0x0c, 0x00, 0x30, 0x38, 0x3e, 0x38, 0x30, 0x00, 0x06, 0x0e, 0x3e, 0x0e, 0x06, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x07, 
0x00, 0x00, 0x14, 0x7f, 0x14, 0x7f, 0x14, 0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12, 0x00, 0x23, 0x13, 
0x08, 0x64, 0x62, 0x00, 0x36, 0x49, 0x56, 0x20, 0x50, 0x00, 0x00, 0x08, 0x07, 0x03, 0x00, 0x00, 
0x00, 0x1c, 0x22, 0x41, 0x00, 0x00, 0x00, 0x41, 0x22, 0x1c, 0x00, 0x00, 0x2a, 0x1c, 0x7f, 0x1c, 
0x2a, 0x00, 0x08, 0x08, 0x3e, 0x08, 0x08, 0x00, 0x00, 0x80, 0x70, 0x30, 0x00, 0x00, 0x08, 0x08, 
0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x20, 0x10, 0x08, 0x04, 0x02, 0x00, 
0x3e, 0x51, 0x49, 0x45, 0x3e, 0x00, 0x00, 0x42, 0x7f, 0x40, 0x00, 0x00, 0x72, 0x49, 0x49, 0x49, 
0x46, 0x00, 0x21, 0x41, 0x49, 0x4d, 0x33, 0x00, 0x18, 0x14, 0x12, 0x7f, 0x10, 0x00, 0x27, 0x45, 
0x45, 0x45, 0x39, 0x00, 0x3c, 0x4a, 0x49, 0x49, 0x31, 0x00, 0x41, 0x21, 0x11, 0x09, 0x07, 0x00, 
0x36, 0x49, 0x49, 0x49, 0x36, 0x00, 0x46, 0x49, 0x49, 0x29, 0x1e, 0x00, 0x00, 0x00, 0x14, 0x00, 
0x00, 0x00, 0x00, 0x40, 0x34, 0x00, 0x00, 0x00, 0x00, 0x08, 0x14, 0x22, 0x41, 0x00, 0x14, 0x14, 
0x14, 0x14, 0x14, 0x00, 0x00, 0x41, 0x22, 0x14, 0x08, 0x00, 0x02, 0x01, 0x59, 0x09, 0x06, 0x00, 
0x3e, 0x41, 0x5d, 0x59, 0x4e, 0x00, 0x7c, 0x12, 0x11, 0x12, 0x7c, 0x00, 0x7f, 0x49, 0x49, 0x49, 
0x36, 0x00, 0x3e, 0x41, 0x41, 0x41, 0x22, 0x00, 0x7f, 0x41, 0x41, 0x41, 0x3e, 0x00, 0x7f, 0x49, 
0x49, 0x49, 0x41, 0x00, 0x7f, 0x09, 0x09, 0x09, 0x01, 0x00, 0x3e, 0x41, 0x41, 0x51, 0x73, 0x00, 
0x7f, 0x08, 0x08, 0x08, 0x7f, 0x00, 0x00, 0x41, 0x7f, 0x41, 0x00, 0x00, 0x20, 0x40, 0x41, 0x3f, 
0x01, 0x00, 0x7f, 0x08, 0x14, 0x22, 0x41, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x00, 0x7f, 0x02, 
0x1c, 0x02, 0x7f, 0x00, 0x7f, 0x04, 0x08, 0x10, 0x7f, 0x00, 0x3e, 0x41, 0x41, 0x41, 0x3e, 0x00, 
0x7f, 0x09, 0x09, 0x09, 0x06, 0x00, 0x3e, 0x41, 0x51, 0x21, 0x5e, 0x00, 0x7f, 0x09, 0x19, 0x29, 
0x46, 0x00, 0x26, 0x49, 0x49, 0x49, 0x32, 0x00, 0x03, 0x01, 0x7f, 0x01, 0x03, 0x00, 0x3f, 0x40, 
0x40, 0x40, 0x3f, 0x00, 0x1f, 0x20, 0x40, 0x20, 0x1f, 0x00, 0x3f, 0x40, 0x38, 0x40, 0x3f, 0x00, 
0x63, 0x14, 0x08, 0x14, 0x63, 0x00, 0x03, 0x04, 0x78, 0x04, 0x03, 0x00, 0x61, 0x59, 0x49, 0x4d, 
0x43, 0x00, 0x00, 0x7f, 0x41, 0x41, 0x41, 0x00, 0x02, 0x04, 0x08, 0x10, 0x20, 0x00, 0x00, 0x41, 
0x41, 0x41, 0x7f, 0x00, 0x04, 0x02, 0x01, 0x02, 0x04, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 
0x00, 0x03, 0x07, 0x08, 0x00, 0x00, 0x20, 0x54, 0x54, 0x78, 0x40, 0x00, 0x7f, 0x28, 0x44, 0x44, 
0x38, 0x00, 0x38, 0x44, 0x44, 0x44, 0x28, 0x00, 0x38, 0x44, 0x44, 0x28, 0x7f, 0x00, 0x38, 0x54, 
0x54, 0x54, 0x18, 0x00, 0x00, 0x08, 0x7e, 0x09, 0x02, 0x00, 0x18, 0xa4, 0xa4, 0x9c, 0x78, 0x00, 
0x7f, 0x08, 0x04, 0x04, 0x78, 0x00, 0x00, 0x44, 0x7d, 0x40, 0x00, 0x00, 0x20, 0x40, 0x40, 0x3d, 
0x00, 0x00, 0x7f, 0x10, 0x28, 0x44, 0x00, 0x00, 0x00, 0x41, 0x7f, 0x40, 0x00, 0x00, 0x7c, 0x04, 
0x78, 0x04, 0x78, 0x00, 0x7c, 0x08, 0x04, 0x04, 0x78, 0x00, 0x38, 0x44, 0x44, 0x44, 0x38, 0x00, 
0xfc, 0x18, 0x24, 0x24, 0x18, 0x00, 0x18, 0x24, 0x24, 0x18, 0xfc, 0x00, 0x7c, 0x08, 0x04, 0x04, 
0x08, 0x00, 0x48, 0x54, 0x54, 0x54, 0x24, 0x00, 0x04, 0x04, 0x3f, 0x44, 0x24, 0x00, 0x3c, 0x40, 
0x40, 0x20, 0x7c, 0x00, 0x1c, 0x20, 0x40, 0x20, 0x1c, 0x00, 0x3c, 0x40, 0x30, 0x40, 0x3c, 0x00, 
0x44, 0x28, 0x10, 0x28, 0x44, 0x00, 0x4c, 0x90, 0x90, 0x90, 0x7c, 0x00, 0x44, 0x64, 0x54, 0x4c, 
0x44, 0x00, 0x00, 0x08, 0x36, 0x41, 0x00, 0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 0x41, 
0x36, 0x08, 0x00, 0x00, 0x02, 0x01, 0x02, 0x04, 0x02, 0x00, 0x3c, 0x26, 0x23, 0x26, 0x3c, 0x00, 
0xff, 0x00, 0xfc, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0xe0, 0x00, 0x00, 0x80, 
0x40, 0x20, 0x10, 0x10, 0xe0, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xf0, 0x00, 
0x00, 0x00, 0x7c, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x18, 0xfc, 0xfc, 0xfc, 0xfc, 0xf0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xe0, 0xf0, 
0xf0, 0xf0, 0xe0, 0xec, 0xee, 0xf7, 0xf3, 0x70, 0x20, 0x00, 0x7c, 0x7c, 0x7c, 0x7e, 0x00, 0x7e, 
0x7e, 0x7e, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0x7e, 0x5b, 0x4f, 0x5b, 0xfe, 0xc0, 
0x00, 0x00, 0xc0, 0x00, 0xdc, 0xd7, 0xde, 0xde, 0xde, 0xd7, 0xdc, 0x00, 0xc0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xff, 0x00, 0x31, 0x30, 0x48, 0x48, 0x48, 0x84, 0xfc, 0x84, 0x02, 0x00, 0x38, 0x41, 0x41, 0x20, 
0x10, 0x08, 0x04, 0x04, 0xf9, 0x00, 0x09, 0x89, 0x49, 0x49, 0x49, 0x49, 0x49, 0x89, 0x09, 0x00, 
0x00, 0x00, 0x87, 0x48, 0x48, 0x26, 0xe1, 0x21, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xe0, 0xe0, 0x80, 0x00, 0x00, 0x80, 
0x80, 0xe0, 0xf8, 0xff, 0xff, 0x87, 0x80, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe0, 
0xe0, 0xe0, 0xf0, 0xf0, 0xf0, 0xf8, 0xf8, 0xf8, 0xfc, 0xfc, 0xbc, 0xff, 0x00, 0x00, 0x0f, 0x1f, 
0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x3f, 0x1e, 0x0c, 0x00, 0x1f, 0x1f, 0x1f, 0x3f, 0x00, 0x3f, 
0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0x00, 0x30, 0x7b, 0x7f, 0x78, 0x30, 0x20, 0x20, 0x30, 0x78, 0x7f, 
0x3b, 0x00, 0x03, 0x00, 0x0f, 0x7f, 0x0f, 0x0f, 0x0f, 0x7f, 0x0f, 0x00, 0x03, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xff, 0x00, 0x7c, 0x40, 0x40, 0x40, 0x78, 0x40, 0x40, 0x40, 0x7d, 0x00, 0x0c, 0x0c, 0x12, 0x12, 
0x12, 0x21, 0x3f, 0x21, 0x40, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 
0x00, 0x00, 0x78, 0x41, 0x41, 0x72, 0x43, 0x42, 0x44, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x0c, 
0x0c, 0x0c, 0x0c, 0x0c, 0x6c, 0x0c, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0c, 0x1c, 0x3c, 0x34, 0x14, 
0x14, 0x14, 0x1c, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3f, 0x3f, 
0x3f, 0x3e, 0x3e, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x1f, 0x1f, 0x1f, 
0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x0f, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};