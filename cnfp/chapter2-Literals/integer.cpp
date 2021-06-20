#include <bitset>
#include <iostream>

int main()
{
    // decimal-literal
    int d = 42;

    // octal-literal
    int o = 052;

    // hex-literal
    int x = 0x2a;

    // binary-literal c++14
    int b = 0b101010;

    std::cout << std::dec << d << std::endl;
    std::cout << std::hex << x << std::endl;
    std::cout << std::oct << o << std::endl;
    std::cout << std::bitset<sizeof(b) * 8>{b} << std::endl;

}