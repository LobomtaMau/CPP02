#include "Point.hpp"

static float compute(const Point p1, const Point p2, const Point p3) {
    float triangle;
    // triangle=((x1​⋅(y2​−y3​))+(x2​⋅(y3​−y1​))+(x3​⋅(y1​−y2​)))/2
    //where xixi​ and yiyi​ are the coordinates of the ii-th point.
    triangle =  ((p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()))
                + (p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()))
                + (p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat()))) / 2;

    if (triangle >= 0)
        return triangle;
    else
        return triangle* -1;
}


bool bsp(Point const a, Point const b, Point const c, Point const point) {
    float d0, d1, d2, d3;
    
    d0 = compute(a, b, c);
    d1 = compute(point, a, b);
    d2 = compute(point, b, c);
    d3 = compute(point, a, c);

    if (d1 == 0 || d2 == 0 || d3 == 0)
        return false;
    else if( d1 + d2 +d3 == d0)
        return true;
    
    return false;  
}
