#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const Fixed x_val, const Fixed y_val) : x(x_val), y(y_val) {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

Point &Point::operator=(const Point &other) {
    if (this != &other) {
        const_cast<Fixed&>(x) = other.x;
        const_cast<Fixed&>(y) = other.y;
    }
    return *this;
}
        
Point::~Point() {}

const Fixed &Point::getX() const {
    return this->x;
}

const Fixed &Point::getY() const {
    return this->y;
}
