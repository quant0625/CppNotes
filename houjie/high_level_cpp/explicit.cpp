#include <iostream>

// logic definition 
// class converted to others

class Fraction
{
    public:
        explicit Fraction(int num, int den=1): numerator_(num), denominator_(den) {}
        
        operator double() const
        {
            return double(numerator_) / double(denominator_);
        }
    
        Fraction operator+ (const Fraction& frac)
        {
            return Fraction(this->numerator_ + frac.denominator_, this->denominator_ + frac.denominator_);
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

    // Fraction fract = frac + 4.; // explicit 禁止将4转成Fraction

    // 如果不加 explicit 则会有歧义两种用法，
    // 1.Fraction to double 2. double + double  3. double to Fraction 
    // 1.double to Fraction  2.Fraction + Fraction 


}