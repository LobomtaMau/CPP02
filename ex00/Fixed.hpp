#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int _value;
        static const int _fractBits;

    public:
        Fixed();
        Fixed(const Fixed &other);
        ~Fixed();

        Fixed &operator=(const Fixed &other);
        
        int getRawBits() const;
        void setRawBits(int const raw);
};


#endif