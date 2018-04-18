#ifndef Triangle
#define Triangle
#include <iostream>
#include <cmath>
#include "point.cpp"
class Triangle: public Point {
    private:
        Point c;
    public:
        Triangle(Point a, Point b, Point c)
        :Point(a)
        ,Point(b)
        {
            this->c = c;
        }
        ~Triangle() {}
        void setC(Point c) {
            this->c = c;
        }
        Point getC() {
            return c;
        }
        float Triangle_S() {
            float p = (Point::distance(a) + Point::distance(b) + c.distance(a)) / 2;
            return std::sqrt(p * (p - Point::distance(a)) * (p - Point::distance(b)) * (p - c.distance(c)));
        }
        float Triangle_P() {
            return Point::distance(a) + Point::distance(b) + c.distance(a);
        }
};
#endif
