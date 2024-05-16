#include "Point.hpp"

int main() {
    const Point a(0, 0);
    const Point b(5.15646f, 0);
    const Point c(0, 5);
    const Point point(1, 1);

    // std::cout << "The point( x= " << point.getX() << "\ty= " << point.getY() << ")\n" <<
	// "\ta( x= " << a.getX() << "\ty= " << a.getY() << ")\n" <<
	// "\tb( x= " << b.getX() << "\ty= " << b.getY() << ")\n" <<
	// "\tc( x= " << c.getX() << "\ty= " << c.getY() << ")\n" << std::endl;

    if (bsp(a, b, c, point) == true) 
        std::cout << "The point is INSIDE the triangle.\n";
    else
        std::cout << "The point is OUTSIDE the triangle.\n";
    
    return 0;
}