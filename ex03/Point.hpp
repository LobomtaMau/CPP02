#ifndef POINT_HPP
#define POINT_HPP

#include <Fixed.hpp>

class Point {
    private:
        const Fixed x;
        const Fixed y;

    public:
        Point();
        Point(const float x_value, const float y_value);
        Point(const Point &other);
        Point &operator=(const Point &other);
        ~Point();

        Fixed getX() const;
        Fixed getY() const;
    
};

std::ostream &operator << (std::ostream &out, const Point &point);


#endif