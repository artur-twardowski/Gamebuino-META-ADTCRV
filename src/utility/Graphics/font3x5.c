/*
 * (C) Copyright 2014 Aurélien Rodot. All rights reserved.
 *
 * This file is part of the Gamebuino Library (http://gamebuino.com)
 *
 * The Gamebuino Library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

#ifndef FONT3X5_C
#define FONT3X5_C

#include <stdint.h>

//standard ascii 3x5 font
const uint8_t font3x5[] = {
	3,5, //width and height
    0x3F, 0x21, 0x3F, // 0
    0x12, 0x08, 0x12, // 1
    0x0A, 0x10, 0x0A, // 2
    0x0E, 0x1C, 0x0E, // 3
    0x0C, 0x1E, 0x0C, // 4
    0x14, 0x1A, 0x14, // 5
    0x16, 0x1F, 0x16, // 6
    0x1E, 0x13, 0x1E, // 7
    0x1E, 0x1B, 0x1E, // 8
    0x1E, 0x1F, 0x1E, // 9
    0x3F, 0x21, 0x3F, // 10
    0x3A, 0x2F, 0x3A, // 11
    0x17, 0x3D, 0x17, // 12
    0x3F, 0x21, 0x3F, // 13
    0x18, 0x1F, 0x02, // 14
    0x04, 0x0A, 0x04, // 15
    0x1F, 0x0E, 0x04, // 16
    0x04, 0x0E, 0x1F, // 17
    0x0A, 0x1F, 0x0A, // 18
    0x0E, 0x0E, 0x1F, // 19
    0x04, 0x11, 0x0E, // 20
    0x2E, 0x25, 0x2E, // 21
    0x2F, 0x2A, 0x2E, // 22
    0x25, 0x25, 0x25, // 23
    0x02, 0x1F, 0x02, // 24
    0x08, 0x1F, 0x08, // 25
    0x15, 0x0E, 0x04, // 26
    0x04, 0x0E, 0x15, // 27
    0x0E, 0x15, 0x15, // 28
    0x1B, 0x15, 0x1B, // 29
    0x04, 0x06, 0x04, // 30
    0x04, 0x0C, 0x04, // 31
    0x00, 0x00, 0x00, // 32
    0x00, 0x17, 0x00, // 33
    0x03, 0x00, 0x03, // 34
    0x1F, 0x0A, 0x1F, // 35
    0x16, 0x37, 0x1A, // 36
    0x19, 0x04, 0x13, // 37
    0x0A, 0x15, 0x3A, // 38
    0x00, 0x03, 0x00, // 39
    0x00, 0x0E, 0x11, // 40
    0x11, 0x0E, 0x00, // 41
    0x0A, 0x04, 0x0A, // 42
    0x04, 0x0E, 0x04, // 43
    0x00, 0x30, 0x00, // 44
    0x04, 0x04, 0x04, // 45
    0x00, 0x10, 0x00, // 46
    0x18, 0x04, 0x03, // 47
    0x1F, 0x11, 0x1F, // 48
    0x12, 0x1F, 0x10, // 49
    0x1D, 0x15, 0x17, // 50
    0x11, 0x15, 0x1F, // 51
    0x07, 0x04, 0x1F, // 52
    0x17, 0x15, 0x1D, // 53
    0x1F, 0x14, 0x1C, // 54
    0x01, 0x01, 0x1F, // 55
    0x1F, 0x15, 0x1F, // 56
    0x07, 0x05, 0x1F, // 57
    0x00, 0x0A, 0x00, // 58
    0x00, 0x32, 0x00, // 59
    0x04, 0x0A, 0x11, // 60
    0x0A, 0x0A, 0x0A, // 61
    0x11, 0x0A, 0x04, // 62
    0x01, 0x15, 0x02, // 63
    0x0E, 0x11, 0x17, // 64
    0x1E, 0x05, 0x1E, // 65
    0x1F, 0x15, 0x0A, // 66
    0x0E, 0x11, 0x0A, // 67
    0x1F, 0x11, 0x0E, // 68
    0x1F, 0x15, 0x11, // 69
    0x1F, 0x05, 0x01, // 70
    0x0E, 0x11, 0x1D, // 71
    0x1F, 0x04, 0x1F, // 72
    0x11, 0x1F, 0x11, // 73
    0x08, 0x10, 0x0F, // 74
    0x1F, 0x04, 0x1B, // 75
    0x1F, 0x10, 0x10, // 76
    0x1F, 0x06, 0x1F, // 77
    0x1E, 0x04, 0x0F, // 78
    0x0E, 0x11, 0x0E, // 79
    0x1F, 0x05, 0x02, // 80
    0x0E, 0x11, 0x2E, // 81
    0x1F, 0x05, 0x1A, // 82
    0x12, 0x15, 0x09, // 83
    0x01, 0x1F, 0x01, // 84
    0x1F, 0x10, 0x1F, // 85
    0x0F, 0x18, 0x0F, // 86
    0x1F, 0x0C, 0x1F, // 87
    0x1B, 0x04, 0x1B, // 88
    0x03, 0x1C, 0x03, // 89
    0x19, 0x15, 0x13, // 90
    0x00, 0x1F, 0x11, // 91
    0x03, 0x04, 0x18, // 92
    0x11, 0x1F, 0x00, // 93
    0x02, 0x01, 0x02, // 94
    0x20, 0x20, 0x20, // 95
    0x00, 0x01, 0x02, // 96
    0x0C, 0x12, 0x1E, // 97
    0x1F, 0x12, 0x0C, // 98
    0x0C, 0x12, 0x12, // 99
    0x0C, 0x12, 0x1F, // 100
    0x0C, 0x1A, 0x14, // 101
    0x04, 0x1E, 0x05, // 102
    0x24, 0x2A, 0x1E, // 103
    0x1F, 0x02, 0x1C, // 104
    0x14, 0x1D, 0x10, // 105
    0x20, 0x20, 0x1D, // 106
    0x1F, 0x08, 0x14, // 107
    0x11, 0x1F, 0x10, // 108
    0x1E, 0x04, 0x1E, // 109
    0x1E, 0x02, 0x1C, // 110
    0x0C, 0x12, 0x0C, // 111
    0x3E, 0x0A, 0x04, // 112
    0x0C, 0x12, 0x3E, // 113
    0x1E, 0x04, 0x02, // 114
    0x14, 0x16, 0x0A, // 115
    0x02, 0x0F, 0x12, // 116
    0x0E, 0x10, 0x1E, // 117
    0x0E, 0x10, 0x0E, // 118
    0x1E, 0x08, 0x1E, // 119
    0x12, 0x0C, 0x12, // 120
    0x26, 0x28, 0x1E, // 121
    0x12, 0x1A, 0x16, // 122
    0x04, 0x0E, 0x11, // 123
    0x00, 0x1F, 0x00, // 124
    0x11, 0x0E, 0x04, // 125
    0x01, 0x02, 0x01, // 126
    0x3F, 0x21, 0x3F, // 127
    
    0x00, 0x00, 0x00,
    0x00, 0x1D, 0x00,
    0x0E, 0x1F, 0x0A,
    0x14, 0x1E, 0x15,
    0x0A, 0x04, 0x0A,
    0x0B, 0x1C, 0x0B,
    0x00, 0x1B, 0x00,
    0x16, 0x1B, 0x0D,
    
    0x01, 0x00, 0x01,
    0x13, 0x0D, 0x0D,
    0x07, 0x07, 0x06,
    0x04, 0x0A, 0x00,
    0x04, 0x04, 0x0C,
    0x00, 0x00, 0x00,
    0x11, 0x19, 0x17,
    0x01, 0x01, 0x01,
    
    0x00, 0x03, 0x03,
    0x0A, 0x0F, 0x0A,
    0x01, 0x07, 0x04,
    0x05, 0x07, 0x02,
    0x00, 0x02, 0x01,
    0x1E, 0x08, 0x06,
    0x02, 0x07, 0x1F,
    0x00, 0x04, 0x00,
    
    0x10, 0x18, 0x00,
    0x05, 0x07, 0x04,
    0x04, 0x07, 0x07,
    0x00, 0x0A, 0x04,
    0x01, 0x18, 0x18,
    0x01, 0x08, 0x10,
    0x01, 0x1B, 0x18,
    0x08, 0x15, 0x10,
    
    0x1D, 0x0A, 0x1C,
    0x1C, 0x0A, 0x1D,
    0x1D, 0x0B, 0x1D,
    0x1E, 0x0B, 0x1D,
    0x1D, 0x0A, 0x1D,
    0x1C, 0x0B, 0x1C,
    0x1E, 0x1F, 0x15,
    0x2E, 0x31, 0x11,
    
    0x1F, 0x16, 0x12,
    0x1E, 0x16, 0x13,
    0x1F, 0x17, 0x13,
    0x1F, 0x16, 0x13,
    0x13, 0x1E, 0x12,
    0x12, 0x1E, 0x13,
    0x13, 0x1F, 0x13,
    0x13, 0x1E, 0x13,
    
    0x1F, 0x15, 0x0E,
    0x1D, 0x09, 0x1F,
    0x0D, 0x12, 0x0C,
    0x0C, 0x12, 0x0D,
    0x0D, 0x13, 0x0D,
    0x0E, 0x13, 0x0D,
    0x0D, 0x12, 0x0D,
    0x0A, 0x04, 0x0A,
    
    0x0E, 0x15, 0x0E,
    0x1D, 0x10, 0x1C,
    0x1C, 0x10, 0x1D,
    0x1D, 0x11, 0x1D,
    0x1D, 0x10, 0x1D,
    0x04, 0x18, 0x05,
    0x1F, 0x0E, 0x0E,
    0x1E, 0x15, 0x0A,
    
    0x09, 0x14, 0x1C,
    0x08, 0x14, 0x1D,
    0x09, 0x15, 0x1D,
    0x0A, 0x15, 0x1D,
    0x09, 0x14, 0x1D,
    0x08, 0x15, 0x1C,
    0x18, 0x1C, 0x0C,
    0x2C, 0x32, 0x12,
    
    0x0D, 0x1A, 0x14,
    0x0C, 0x1A, 0x15,
    0x0D, 0x1B, 0x15,
    0x0D, 0x1A, 0x15,
    0x15, 0x1C, 0x10,
    0x14, 0x1C, 0x11,
    0x15, 0x1D, 0x11,
    0x15, 0x1C, 0x11,
    
    0x1D, 0x1B, 0x0E,
    0x1E, 0x05, 0x19,
    0x09, 0x14, 0x08,
    0x08, 0x14, 0x09,
    0x09, 0x15, 0x09,
    0x0A, 0x15, 0x09,
    0x09, 0x14, 0x09,
    0x04, 0x15, 0x04,
    
    0x14, 0x4E, 0x05,
    0x0D, 0x10, 0x1C,
    0x0C, 0x10, 0x1D,
    0x0D, 0x11, 0x1D,
    0x0D, 0x10, 0x1D,
    0x14, 0x18, 0x0D,
    0x1F, 0x0E, 0x04,
    0x25, 0x28, 0x1D,
};
	
#endif
