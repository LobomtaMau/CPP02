#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
    private:
        const Fixed x;
        const Fixed y;

    public:
        Point();
        Point(const Fixed x_val, const Fixed y_val);
        Point(const Point &other);
        ~Point();

        Point &operator=(const Point &other);

        const Fixed& getX() const;
        const Fixed& getY() const;
    
};

bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif