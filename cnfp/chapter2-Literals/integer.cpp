#include <bitset>
#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    // decimal-literal
    int d = 42;

    // octal-literal
    int o = 052;

    // hex-literal 0x 0X
    int x = 0x2a;

    // binary-literal c++14
    int b = 0b101010;

    std::cout << std::dec << d << std::endl;
    std::cout << std::hex << x << std::endl;
    std::cout << std::oct << o << std::endl;
    std::cout << std::bitset<sizeof(b) * 8>(b) << std::endl;


    // unsigned-literal "u U" 
    // long long suffix 'll LL'

    unsigned long long l1 = 18123123123123uLL;
    unsigned long long l2 = 18'1231'2312'3123uLL;

    std::cout << std::dec << l1 << std::endl;
    std::cout << std::dec << l2 << std::endl;
}

