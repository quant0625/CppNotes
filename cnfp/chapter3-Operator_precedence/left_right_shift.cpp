#include <iostream>
#include <cassert>
#include <limits>
#include "../../utils/utils.h"

using namespace std;
using namespace cpp;


int main()
{

    int a0 = 1;
    int a1 = 1;

    auto num = std::numeric_limits<int>::digits;
    
    while(num)
    {
        print_bin(a0);
        a0 <<= 1;
        a1 *= 2;

        assert(a0 == a1);
        num--; 
    }

    a0 = a1 = 0x80000001;

    num = std::numeric_limits<int>::digits;

    while(num)
    {
        print_bin(a0);

        a0 >>= 1;
        a1 /= 2;
        cout << a0 << endl;
        cout << a1 << endl;

        num--; 
    }


    return 0;
}