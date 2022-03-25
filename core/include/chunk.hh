#pragma once

union Chunk
{
    uint8_t data;
    struct info
    {
        uint8_t pixel1 : 2;
        uint8_t pixel2 : 2;
        uint8_t pixel3 : 2;
        uint8_t pixel4 : 2;
    } lsb;
};