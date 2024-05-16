#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int _value;
        static const int _fractBits;

    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &other);
        ~Fixed();

        Fixed &operator=(const Fixed &other);

        int getRawBits() const;
        void setRawBits(int const raw);

        float toFloat() const;
        int toInt() const;

        // Comparison
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;

        //Arithmetic
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;

        // +/- operators
        Fixed operator++();    //pre
        Fixed operator--();
        Fixed operator++(int);  //post
        Fixed operator--(int);

        //static member
        static const Fixed &min(const Fixed &a, const Fixed &b);// conts objs
        static Fixed& min(Fixed& a, Fixed& b);                  // non-const objs
        static const Fixed &max(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed& a, Fixed& b);
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif