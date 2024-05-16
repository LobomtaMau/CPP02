#include <Fixed.hpp>

int main( void ) {
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    /*std::cout << "More tests" << std::endl;
    a.setRawBits(1234);
    b.setRawBits(5678);

    std::cout << "After setting raw bits:" << std::endl;
    std::cout << "a: " << a.getRawBits() << std::endl;
    std::cout << "b: " << b.getRawBits() << std::endl;
    std::cout << "c: " << c.getRawBits() << std::endl;

    c = a;
    std::cout << "After assignment:" << std::endl;
    std::cout << "a: " << a.getRawBits() << std::endl;
    std::cout << "b: " << b.getRawBits() << std::endl;
    std::cout << "c: " << c.getRawBits() << std::endl;*/

    return 0;
}