#include <iostream>

#include "../../utils/utils.h"


template<typename T>
T remove_right_most(T n)
{
    static_assert(std::is_integral<T>::value && !std::is_signed<T>::value, "type should be unsigned");
    
    // n 0bxxxx10..00, n - 1 0bxxxx011..11, 
    
    return n & (n-1);
}

void set_all_bits()
{
    char x = -1;
    cpp::print_bin(x);

    short y = -1;
    cpp::print_bin(y);

    unsigned char z = -1;
    cpp::print_bin(z);
}

void toggling_bits()
{
    // 0 xor 0 0
    // 1 xor 1 0
    // 1 xor 0 1
    
    // x xor 0 

    // 1.toggling a bit
    char x = 25;
    cpp::print_bin(x);
    
    x ^= 1ll << 0; // position start at 0
    

    // 2.toggling all bits
    x = 25;
    x = ~x;

    cpp::print_bin(x);

}


void check_a_bit()
{
    auto pos = 3u;
    auto x = 25;
    auto bit = (x >> pos) & 1ll;
    
    std::cout << "x:" << x << std::endl;
    cpp::print_bin(x);
    
    std::cout << "bit at " << pos << ": "<< bit << std::endl;
    cpp::print_bin(bit);

    // inplace bit
    cpp::print_bin(x & (1 << pos));

}


void counting_bits_set()
{
    constexpr auto raw_int = 1234u;
    auto value = raw_int;
    auto nbits = 0;

    std::cout << "value:" << cpp::to_bitset(value) << std::endl;

    for(nbits = 0; value; value >>= 1)
        nbits += value & 1;

    std::cout << nbits << std::endl;

    
    value = raw_int;        
    for(nbits = 0; value; nbits++)
        value &= value - 1;

    std::cout << nbits << std::endl;

    value = raw_int;
    std::cout << __builtin_popcount(value) << std::endl;
}


int main()
{
    counting_bits_set();

    return 0;
}