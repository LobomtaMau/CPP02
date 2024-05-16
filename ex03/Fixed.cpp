/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:03:59 by struf             #+#    #+#             */
/*   Updated: 2024/05/06 15:09:15 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
// #include <Point.hpp>

const int Fixed::_fractBits = 8;

Fixed::Fixed() : _value(0) {
    // std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other) : _value(other._value) {
    // std::cout << "Copy constructor called\n";
}

Fixed::~Fixed() {
    // std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &other) {
    // std::cout << "Copy assignation operator called\n";
    if (this != &other) {
        this->_value = other.getRawBits();
    }
    return *this;
}
// corrigido!///

int Fixed::getRawBits() const {
    // std::cout << "getRawBits member function called\n";
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

Fixed::Fixed(const int value) : _value(value << _fractBits) {
    // std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << _fractBits))) {
    // std::cout << "Float constructor called\n";
}

int Fixed::toInt() const {
    return _value >> _fractBits;
}

float Fixed::toFloat() const {
    return static_cast<float>(_value) / (1 << _fractBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}

// Comparison //
bool Fixed::operator>(const Fixed &other) const {
    return this->_value > other._value;
}

bool Fixed::operator<(const Fixed &other) const {
    return this->_value < other._value;
}

bool Fixed::operator>=(const Fixed &other) const {
    return this->_value >= other._value;
}

bool Fixed::operator<=(const Fixed &other) const {
    return this->_value <= other._value;
}

bool Fixed::operator==(const Fixed &other) const {
    return this->_value == other._value;
}

bool Fixed::operator!=(const Fixed &other) const {
    return this->_value != other._value;
}

// Arithmetic //
Fixed Fixed::operator+(const Fixed &other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const {
    return Fixed(this->toFloat() / other.toFloat());
}

// Increment/decrement //
Fixed Fixed::operator++() {
    this->_value++;
    return *this;
}

Fixed Fixed::operator--() {
    this->_value--;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    operator--();
    return tmp;
}

//static member min/max //
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

Fixed &Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}

Fixed &Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

