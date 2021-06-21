#include <cstddef>
#include <iostream>


#if defined(__clang__)

;

#elif defined(__GNUC__) || defined(__GNUG__)

#define __FUNC__ __PRETTY_FUNCTION__

#elif defined(_MSC_VER)

#define __FUNC__ __FUNCSIG__

#endif

// nullptr is a fundamental type known as std::nullptr_t
// NULL is value 
// template not allowed type conversion 

void f(int *p) 
{
    std::cout << __FUNC__ << std::endl;
};


void f(int p) 
{
    std::cout << __FUNC__ << std::endl;
};

void h(std::nullptr_t p) 
{
    std::cout << __FUNC__ << std::endl;

};

template<typename T>
void g(T *p) 
{
    std::cout << __FUNC__ << std::endl;
};

int main()
{
    f(nullptr);
    // g(nullptr); // error: template deduction work: no conversion take place, nullptr_t is not a pointer type
    h(nullptr);

    // f(NULL); // error: call of overloaded ‘f(NULL)’ is ambiguous
    // g(NULL);
    h(NULL);
}



