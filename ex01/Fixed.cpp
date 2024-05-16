#include <Fixed.hpp>

const int Fixed::_fractBits = 8;

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other) : _value(other._value) {
    std::cout << "Copy constructor called\n";
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignation operator called\n";
    if (this != &other) {
        this->_value = other._value;
    }
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called\n";
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}


Fixed::Fixed(const int value) : _value(value << _fractBits) {
    std::cout << "Int constructor called\n";
}
// init _value with shift left << by _fractBits position
// convert int to fixed point.

Fixed::Fixed(const float value) : _value(roundf(value * (1 << _fractBits))) {
    std::cout << "Float constructor called\n";
}
// (1 << _fractBits) is a bit shift operation that multiplies value by
// 2^_fractBits, effectively scaling it to the fixed-point representation.

int Fixed::toInt() const {
    return _value >> _fractBits;
}
// "Const" at the end, indicates that this function does not modify the state of the object
// _fractBits righ shitf >> on _value
// shifts out the fractional part of the fixed-point value, leaving only the integer part

float Fixed::toFloat() const {
    return static_cast<float>(_value) / (1 << _fractBits);
}
// _value divided by (1 << _fractBits) performs the division operation, effectively 
// scaling down the fixed-point value to the appropriate floating-point range.

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}