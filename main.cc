#include <iostream>

#include "core/include/decoder.hh"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "\n[----------------- RAW Decoder -----------------]\n";
    Decoder decoder("../assets/image.raw", 3280, 2464);
    decoder.decode();

    return 0;
}