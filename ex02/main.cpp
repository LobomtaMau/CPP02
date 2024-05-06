#include <Fixed.hpp>

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    /*Fixed a(10.0f);
    Fixed b(5.0f);
    Fixed c;

    // Comparison operators
    std::cout << "a > b : " << (a > b) << std::endl;
    std::cout << "a < b : " << (a < b) << std::endl;
    std::cout << "a >= b : " << (a >= b) << std::endl;
    std::cout << "a <= b : " << (a <= b) << std::endl;
    std::cout << "a == b : " << (a == b) << std::endl;
    std::cout << "a != b : " << (a != b) << std::endl;

    // Arithmetic operators
    c = a + b;
    std::cout << "a + b : " << c << std::endl;
    c = a - b;
    std::cout << "a - b : " << c << std::endl;
    c = a * b;
    std::cout << "a * b : " << c << std::endl;
    c = a / b;
    std::cout << "a / b : " << c << std::endl;

    // Increment/decrement operators
    std::cout << "Pre-increment ++a : " << ++a << std::endl;
    std::cout << "Post-increment a++ : " << a++ << std::endl;
    std::cout << "a after post-increment : " << a << std::endl;
    std::cout << "Pre-decrement --a : " << --a << std::endl;
    std::cout << "Post-decrement a-- : " << a-- << std::endl;
    std::cout << "a after post-decrement : " << a << std::endl;

    // Static member functions min and max
    Fixed minVal = Fixed::min(a, b);
    std::cout << "Min value between a and b : " << minVal << std::endl;
    Fixed maxVal = Fixed::max(a, b);
    std::cout << "Max value between a and b : " << maxVal << std::endl;*/
    
    return 0;
}
