#pragma once

#ifndef FONT16X16
#define FONT16X16

uint8_t font16x16_size = 32;
uint8_t font16x16_width = 16;
uint8_t font16x16_height = 16;

uint8_t font16x16_data[128][32] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0000 (nul)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0001
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0002
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0003
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0004
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0005
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0006
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0007
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0008
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0009
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0010
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0011
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0012
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0013
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0014
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0015
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0016
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0017
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0018
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0019
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //  <Space>
    {0x00, 0x00, 0x00, 0x00, 0xF8, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x73, 0x73, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // !
    {0x00, 0x00, 0x00, 0x00, 0x1E, 0x3E, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x3E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // "
    {0x00, 0x30, 0x30, 0x30, 0xFE, 0xFE, 0x30, 0x30, 0x00, 0x0C, 0x0C, 0x0C, 0x7F, 0x7F, 0x0C, 0x0C, 0x30, 0x30, 0xFE, 0xFE, 0x30, 0x30, 0x30, 0x00, 0x0C, 0x0C, 0x7F, 0x7F, 0x0C, 0x0C, 0x0C, 0x00}, // #
    {0x00, 0x00, 0x00, 0xF0, 0xF8, 0x98, 0xFE, 0x98, 0x00, 0x00, 0x00, 0x18, 0x19, 0x19, 0x7F, 0x19, 0x98, 0xFE, 0x98, 0x98, 0x18, 0x00, 0x00, 0x00, 0x19, 0x7F, 0x19, 0x1F, 0x0F, 0x00, 0x00, 0x00}, // $
    {0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x38, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x0E, 0x07, 0x03, 0xC0, 0xE0, 0x70, 0x38, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00}, // %
    {0x00, 0x00, 0x00, 0x38, 0xFC, 0xC4, 0xC4, 0xFC, 0x00, 0x00, 0x00, 0x1E, 0x3F, 0x21, 0x21, 0x33, 0x38, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x3F, 0x1E, 0x1E, 0x37, 0x23, 0x00, 0x00, 0x00}, // &
    {0x00, 0x00, 0x00, 0x00, 0x20, 0x3C, 0x3C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // '
    {0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xF0, 0x38, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0F, 0x1C, 0x1C, 0x0C, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x38, 0x30, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00}, // (
    {0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x0C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x30, 0x38, 0x38, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x0F, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00}, // )
    {0x00, 0x00, 0x80, 0x88, 0x90, 0xE0, 0xE0, 0xFC, 0x00, 0x00, 0x01, 0x11, 0x09, 0x07, 0x07, 0x3F, 0xFC, 0xE0, 0xE0, 0x90, 0x88, 0x80, 0x00, 0x00, 0x3F, 0x07, 0x07, 0x09, 0x11, 0x01, 0x00, 0x00}, // *
    {0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x0F, 0xF0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00}, // +
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x78, 0x78, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // ,
    {0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00}, // -
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // .
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x30, 0x38, 0x1C, 0x0E, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x00, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00}, // /
    {0x00, 0x00, 0x00, 0xF8, 0xFC, 0xFC, 0x04, 0x84, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x3F, 0x2E, 0x27, 0xE4, 0x74, 0xFC, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x21, 0x20, 0x3F, 0x3F, 0x1F, 0x00, 0x00, 0x00}, // 0
    {0x00, 0x00, 0x00, 0x60, 0x60, 0x60, 0xF0, 0xFC, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x3F, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00}, // 1
    {0x00, 0x00, 0x00, 0x18, 0x1C, 0x1C, 0x04, 0x04, 0x00, 0x00, 0x00, 0x30, 0x38, 0x3C, 0x2E, 0x27, 0x84, 0xCC, 0xFC, 0x78, 0x30, 0x00, 0x00, 0x00, 0x23, 0x21, 0x38, 0x38, 0x38, 0x00, 0x00, 0x00}, // 2
    {0x00, 0x00, 0x00, 0x18, 0x1C, 0x1C, 0x84, 0x84, 0x00, 0x00, 0x00, 0x18, 0x38, 0x38, 0x21, 0x21, 0x84, 0xCC, 0x7C, 0x78, 0x30, 0x00, 0x00, 0x00, 0x21, 0x33, 0x3E, 0x1E, 0x0C, 0x00, 0x00, 0x00}, // 3
    {0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x23, 0x23, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x23, 0x23, 0x00, 0x00, 0x00}, // 4
    {0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0x84, 0x84, 0x00, 0x00, 0x00, 0x19, 0x39, 0x39, 0x21, 0x21, 0x84, 0x84, 0x84, 0x04, 0x04, 0x00, 0x00, 0x00, 0x21, 0x33, 0x3F, 0x1F, 0x0E, 0x00, 0x00, 0x00}, // 5
    {0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF8, 0x9C, 0x8C, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x3F, 0x21, 0x21, 0x84, 0x84, 0x84, 0x80, 0x00, 0x00, 0x00, 0x00, 0x21, 0x21, 0x3F, 0x3F, 0x1F, 0x00, 0x00, 0x00}, // 6
    {0x00, 0x00, 0x00, 0x3C, 0x3C, 0x3C, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x3C, 0x04, 0x04, 0x84, 0xFC, 0xFC, 0x7C, 0x00, 0x00, 0x3E, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00}, // 7
    {0x00, 0x00, 0x00, 0x78, 0x7C, 0xFC, 0xC4, 0xC4, 0x00, 0x00, 0x00, 0x1E, 0x3E, 0x3F, 0x21, 0x21, 0x84, 0x84, 0xFC, 0x7C, 0x78, 0x00, 0x00, 0x00, 0x23, 0x23, 0x3F, 0x3E, 0x1E, 0x00, 0x00, 0x00}, // 8
    {0x00, 0x00, 0x00, 0xF8, 0xFC, 0xFC, 0x84, 0x84, 0x00, 0x00, 0x00, 0x00, 0x01, 0x21, 0x21, 0x21, 0x84, 0x84, 0xFC, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x31, 0x39, 0x1F, 0x0F, 0x07, 0x00, 0x00, 0x00}, // 9
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x0E, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // :
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1E, 0x1E, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // ;
    {0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0E, 0x1C, 0x1C, 0x0E, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x38, 0x70, 0x60, 0x40, 0x00, 0x00, 0x00, 0x00}, // <
    {0x00, 0x00, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00}, // =
    {0x00, 0x00, 0x00, 0x02, 0x06, 0x0E, 0x1C, 0x38, 0x00, 0x00, 0x00, 0x40, 0x60, 0x70, 0x38, 0x1C, 0x70, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00}, // >
    {0x00, 0x00, 0x00, 0x18, 0x1C, 0x0C, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x86, 0xCE, 0xFC, 0x7C, 0x38, 0x00, 0x00, 0x00, 0x73, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // ?
    {0x00, 0x00, 0x00, 0xFC, 0xFE, 0xFE, 0x02, 0x02, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x7F, 0x60, 0x60, 0xC2, 0xC2, 0xC2, 0xFE, 0xFE, 0xFC, 0x00, 0x00, 0x63, 0x63, 0x63, 0x63, 0x43, 0x03, 0x00, 0x00}, // @
    {0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF8, 0x1C, 0x0C, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x02, 0x02, 0x0C, 0x1C, 0xF8, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x02, 0x02, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00}, // A
    {0x00, 0x00, 0x00, 0x04, 0xFC, 0xFC, 0xFC, 0x84, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x3F, 0x3F, 0x21, 0x84, 0x84, 0xFC, 0xFC, 0x78, 0x00, 0x00, 0x00, 0x21, 0x21, 0x3F, 0x3F, 0x1E, 0x00, 0x00, 0x00}, // B
    {0x00, 0x00, 0x00, 0xF0, 0xF8, 0xFC, 0x0C, 0x04, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x3F, 0x30, 0x20, 0x04, 0x04, 0x1C, 0x1C, 0x18, 0x00, 0x00, 0x00, 0x20, 0x20, 0x38, 0x38, 0x18, 0x00, 0x00, 0x00}, // C
    {0x00, 0x00, 0x00, 0x04, 0xFC, 0xFC, 0xFC, 0x04, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x3F, 0x3F, 0x20, 0x04, 0x0C, 0xFC, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x20, 0x30, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00}, // D
    {0x00, 0x00, 0x00, 0x04, 0xFC, 0xFC, 0xFC, 0x84, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x3F, 0x3F, 0x21, 0x84, 0x84, 0xC4, 0xCC, 0x1C, 0x00, 0x00, 0x00, 0x21, 0x21, 0x23, 0x33, 0x38, 0x00, 0x00, 0x00}, // E
    {0x00, 0x00, 0x00, 0x04, 0xFC, 0xFC, 0xFC, 0x84, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x3F, 0x3F, 0x21, 0x84, 0x84, 0xC4, 0xCC, 0x1C, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00}, // F
    {0x00, 0x00, 0x00, 0xF0, 0xF8, 0xFC, 0x0C, 0x04, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x3F, 0x30, 0x20, 0x04, 0x04, 0x3C, 0x3C, 0x38, 0x00, 0x00, 0x00, 0x22, 0x22, 0x3E, 0x3E, 0x3E, 0x00, 0x00, 0x00}, // G
    {0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0x80, 0x80, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x01, 0x01, 0x80, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x01, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00}, // H
    {0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x3F, 0x3F, 0xFC, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00}, // I
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x1E, 0x1E, 0x3E, 0x20, 0x20, 0x20, 0x04, 0xFC, 0xFC, 0xFC, 0x04, 0x04, 0x00, 0x00, 0x20, 0x3F, 0x3F, 0x1F, 0x00, 0x00, 0x00, 0x00}, // J
    {0x00, 0x00, 0x00, 0x04, 0xFC, 0xFC, 0xFC, 0xC0, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x3F, 0x3F, 0x03, 0xE0, 0x70, 0x3C, 0x1C, 0x0C, 0x00, 0x00, 0x00, 0x07, 0x0E, 0x3C, 0x38, 0x30, 0x00, 0x00, 0x00}, // K
    {0x00, 0x00, 0x00, 0x04, 0xFC, 0xFC, 0xFC, 0x04, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x3F, 0x3F, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x30, 0x38, 0x3C, 0x00, 0x00, 0x00}, // L
    {0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0x78, 0xF0, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0xE0, 0xF0, 0x78, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x01, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00}, // M
    {0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0x70, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0xC0, 0x80, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x01, 0x03, 0x07, 0x3F, 0x3F, 0x3F, 0x00, 0x00}, // N
    {0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF8, 0x1C, 0x0C, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x1F, 0x38, 0x30, 0x0C, 0x0C, 0x1C, 0xF8, 0xF0, 0xE0, 0x00, 0x00, 0x30, 0x30, 0x38, 0x1F, 0x0F, 0x07, 0x00, 0x00}, // O
    {0x00, 0x00, 0x00, 0x04, 0xFC, 0xFC, 0xFC, 0x84, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x3F, 0x3F, 0x21, 0x84, 0x84, 0xFC, 0xFC, 0x78, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00}, // P
    {0x00, 0x00, 0x00, 0xE0, 0xF8, 0xF8, 0x1C, 0x0C, 0x00, 0x00, 0x00, 0x07, 0x1F, 0x1F, 0x18, 0x18, 0x04, 0x0C, 0x1C, 0xF8, 0xF8, 0xE0, 0x00, 0x00, 0x5C, 0x5E, 0x7E, 0x7F, 0x7F, 0x47, 0x00, 0x00}, // Q
    {0x00, 0x00, 0x00, 0x04, 0xFC, 0xFC, 0xFC, 0x84, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x3F, 0x3F, 0x01, 0x84, 0x84, 0xFC, 0xFC, 0x78, 0x00, 0x00, 0x00, 0x01, 0x03, 0x3F, 0x3F, 0x3C, 0x00, 0x00, 0x00}, // R
    {0x00, 0x00, 0x00, 0x78, 0xFC, 0xFC, 0x84, 0x84, 0x00, 0x00, 0x00, 0x1C, 0x3C, 0x3D, 0x21, 0x21, 0x84, 0x84, 0xBC, 0x3C, 0x38, 0x00, 0x00, 0x00, 0x21, 0x21, 0x3F, 0x3F, 0x1E, 0x00, 0x00, 0x00}, // S
    {0x00, 0x00, 0x00, 0x1C, 0x0C, 0x04, 0x04, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x3F, 0xFC, 0xFC, 0x04, 0x04, 0x0C, 0x1C, 0x00, 0x00, 0x3F, 0x3F, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00}, // T
    {0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x3F, 0x20, 0x20, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x3F, 0x1F, 0x00, 0x00, 0x00, 0x00}, // U
    {0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x1F, 0x38, 0x30, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x38, 0x1F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00}, // V
    {0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x3F, 0x3C, 0x3C, 0x80, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x0F, 0x3C, 0x3C, 0x3F, 0x0F, 0x03, 0x00, 0x00}, // W
    {0x00, 0x00, 0x00, 0x1C, 0x3C, 0x7C, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x38, 0x3C, 0x3E, 0x07, 0x03, 0xE0, 0x7C, 0x3C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x07, 0x3E, 0x3C, 0x38, 0x00, 0x00, 0x00, 0x00}, // X
    {0x00, 0x00, 0x00, 0x7C, 0xFC, 0xFC, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x21, 0x3F, 0x3F, 0x80, 0xFC, 0xFC, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x21, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00}, // Y
    {0x00, 0x00, 0x00, 0x3C, 0x1C, 0x0C, 0x04, 0x84, 0x00, 0x00, 0x00, 0x38, 0x3C, 0x3E, 0x27, 0x23, 0xC4, 0xE4, 0x7C, 0x3C, 0x1C, 0x00, 0x00, 0x00, 0x21, 0x20, 0x30, 0x38, 0x3C, 0x00, 0x00, 0x00}, // Z
    {0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00}, // [
    {0x00, 0x00, 0x00, 0x1C, 0x38, 0x70, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0E, 0x1C, 0x18, 0x30, 0x20, 0x20}, // <Backslash>
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x04, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00}, // ]
    {0x00, 0x00, 0x00, 0x20, 0x30, 0x38, 0x1C, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x1C, 0x38, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // ^
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0}, // _
    {0x00, 0x00, 0x00, 0x0C, 0x0C, 0x3C, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // '
    {0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x1C, 0x3E, 0x3E, 0x22, 0x22, 0x40, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x22, 0x3F, 0x1F, 0x3F, 0x20, 0x00, 0x00, 0x00}, // a
    {0x00, 0x00, 0x00, 0x04, 0xFC, 0xFC, 0xFC, 0x40, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x1F, 0x3F, 0x20, 0x40, 0x40, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x20, 0x20, 0x3F, 0x3F, 0x1F, 0x00, 0x00, 0x00}, // b
    {0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x40, 0x40, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x3F, 0x20, 0x20, 0x40, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x20, 0x39, 0x39, 0x19, 0x00, 0x00, 0x00, 0x00}, // c
    {0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x40, 0x40, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x3F, 0x20, 0x20, 0x44, 0xFC, 0xFC, 0xFC, 0x04, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x1F, 0x3F, 0x20, 0x00, 0x00, 0x00}, // d
    {0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x40, 0x40, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x3F, 0x22, 0x22, 0x40, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x22, 0x3B, 0x3B, 0x1B, 0x00, 0x00, 0x00, 0x00}, // e
    {0x00, 0x00, 0x00, 0x80, 0x80, 0xF8, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x21, 0x21, 0x3F, 0x3F, 0x3F, 0x84, 0x9C, 0x9C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x21, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00}, // f
    {0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x40, 0x40, 0x00, 0x00, 0x00, 0x47, 0xCF, 0xDF, 0x98, 0x98, 0x40, 0xC0, 0x80, 0xC0, 0x40, 0x00, 0x00, 0x00, 0x98, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00}, // g
    {0x00, 0x00, 0x00, 0x04, 0xFC, 0xFC, 0xFC, 0x80, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x3F, 0x3F, 0x01, 0x40, 0x40, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00}, // h
    {0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0xDC, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x3F, 0xDC, 0xDC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00}, // i
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, 0x20, 0x60, 0xE0, 0x80, 0x80, 0x40, 0xDC, 0xDC, 0xDC, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00}, // j
    {0x00, 0x00, 0x00, 0x04, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x3F, 0x3F, 0x02, 0x00, 0x80, 0xC0, 0xC0, 0x40, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x3D, 0x38, 0x30, 0x00, 0x00, 0x00}, // k
    {0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x3F, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00}, // l
    {0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x40, 0x40, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0xC0, 0x40, 0x40, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00}, // m
    {0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x40, 0x40, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x40, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00}, // n
    {0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x40, 0x40, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x3F, 0x20, 0x20, 0x40, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x3F, 0x1F, 0x00, 0x00, 0x00, 0x00}, // o
    {0x00, 0x00, 0x00, 0x40, 0xC0, 0x80, 0xC0, 0x40, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0x90, 0x40, 0x40, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x1F, 0x0F, 0x00, 0x00, 0x00}, // p
    {0x00, 0x00, 0x80, 0xC0, 0xC0, 0x40, 0x40, 0x40, 0x00, 0x00, 0x0F, 0x1F, 0x1F, 0x10, 0x10, 0x90, 0xC0, 0x80, 0xC0, 0x40, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00}, // q
    {0x00, 0x00, 0x00, 0x40, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x3F, 0x3F, 0x21, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00}, // r
    {0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x40, 0x40, 0x00, 0x00, 0x00, 0x19, 0x3B, 0x23, 0x26, 0x26, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x26, 0x3C, 0x3D, 0x19, 0x00, 0x00, 0x00, 0x00}, // s
    {0x00, 0x00, 0x00, 0x40, 0x40, 0xE0, 0xF0, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x3F, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x20, 0x38, 0x38, 0x18, 0x00, 0x00, 0x00, 0x00}, // t
    {0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x3F, 0x20, 0x20, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x1F, 0x3F, 0x20, 0x00, 0x00, 0x00}, // u
    {0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x1F, 0x38, 0x30, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x38, 0x1F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00}, // v
    {0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x3F, 0x38, 0x38, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x0E, 0x38, 0x38, 0x3F, 0x0F, 0x07, 0x00, 0x00}, // w
    {0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x39, 0x3F, 0x0F, 0x0F, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x39, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00}, // x
    {0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x80, 0x87, 0x8F, 0x9F, 0xD8, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0xF8, 0x78, 0x3F, 0x0F, 0x07, 0x00, 0x00, 0x00}, // y
    {0x00, 0x00, 0x00, 0xC0, 0xC0, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x31, 0x38, 0x3C, 0x2E, 0x27, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x31, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00}, // z
    {0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0x78, 0x7C, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x1E, 0x3E, 0x3C, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x3C, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00}, // {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // |
    {0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x3C, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x7C, 0x78, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x3E, 0x1E, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00}, // }
    {0x00, 0x00, 0x38, 0x3C, 0x3C, 0x04, 0x0C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x30, 0x20, 0x3C, 0x3C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}  // ~
};

#endif /* FONT16X16 */
