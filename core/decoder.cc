#include "include/decoder.hh"

#include "include/chunk.hh"

void Decoder::decode()
{
    if (!file.is_open())
        return;

    std::string line;
    float y = 0;
    while (std::getline(file, line))
    {
        const char *buf = line.c_str();
        for (int x = 0; x < width_; x += 5)
        {
            const auto offset = buf + x;
            Chunk chunk = { static_cast<uint8_t>(offset[4]) };

            uint8_t pixel1 = offset[0] << 2 + chunk.lsb.pixel1;
            uint8_t pixel2 = offset[1] << 2 + chunk.lsb.pixel2;
            uint8_t pixel3 = offset[2] << 2 + chunk.lsb.pixel3;
            uint8_t pixel4 = offset[3] << 2 + chunk.lsb.pixel4;
        }
        y++;
    }
}