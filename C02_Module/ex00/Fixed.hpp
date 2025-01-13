#ifndef FIXED_HPP
#define FIXED_CPP

#include <iostream>
#include <string>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed& other);
        Fixed& operator = (const Fixed& other);
        ~Fixed();
        int  getRawBits(void) const;
        void  setRawBits(int const raw);
    private:
        int _value;
        static const int _fractionalBits;
};

#endif