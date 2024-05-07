/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:02:48 by mbaptist          #+#    #+#             */
/*   Updated: 2024/05/07 17:04:54 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

Point::Point() : x(0), y(0) {}

Point::Point(const float x_value, const float y_value) : x(x_value), y(y_value) {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

Point &Point::operator=(const Point &other) {
    if (this != &other) {
        const_cast<Fixed&>(this->x) = Fixed(other.x.toFloat());./
        const_cast<Fixed&>(this->y) = Fixed(other.y.toFloat());
        std::cout << "AQUI= " << other.y << other.x << std::endl;
    }
    return *this;
}
        
Point::~Point() {}

Fixed Point::getX() const {
    return x;
}

Fixed Point::getY() const {
    return y;
}

std::ostream &operator << (std::ostream &out, const Point &point) {
    out << "(" << point.getX() << ", " << point.getY() << ")";
    return out;
}