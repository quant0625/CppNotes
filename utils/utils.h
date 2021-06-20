#include <iostream>
#include <bitset>
#include <type_traits>
#include <limits>

namespace cpp
{
    template<typename T>
    inline void print_bin(T n)
    {
        static_assert(std::is_integral<T>::value, "type should be integral!");
        std::cout << std::bitset<sizeof(T) * std::numeric_limits<unsigned char>::digits>(n) << std::endl; 
    };
};