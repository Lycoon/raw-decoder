#pragma once

#include <fstream>
#include <iostream>

class Decoder
{
public:
    Decoder(std::string filename, unsigned int width, unsigned int height)
        : width_(width)
        , height_(height)
    {
        file = std::ifstream(filename);
    }

    void decode();

private:
    std::ifstream file;
    unsigned int width_;
    unsigned int height_;
};