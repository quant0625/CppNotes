#include <iostream>

// logic definition 
// class converted to others

class Fraction
{
    public:
        Fraction(int num, int den=1): numerator_(num), denominator_(den) {}

        operator double() const
        {
            return double(numerator_) / double(denominator_);
        }
    
    private:
        int numerator_;
        int denominator_;
};


int main()
{
    Fraction frac(2, 7);
    double sum = 1. + frac;

    std::cout << sum << std::endl;
}