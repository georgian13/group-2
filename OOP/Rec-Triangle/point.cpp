#ifndef Point
#define Point
#include <iostream>
#include <cmath>
#include "point.cpp"
class Point {
    private:
        float x, y;
    public:
        Point(float x=0, float y=0)
            :x(x)
            ,y(y) {}
        Point(const Point& p)
            :x(p.x)
            ,y(p.y) {}
        ~Point() {}
        void setX(float x) {
            this->x = x;
        }
        float getX() {
            return x;
        }
        void setY(float y) {
            this->y = y;
        }
        float getY() {
            return y;
        }
        void print() {
            std::cout << "Point( " << x << ", " << y << " )" <<'\n';
        }
        float distance(Point z) {
            return std::sqrt(std::pow(z.x - this->x, 2) + std::pow(z.y - this->y, 2));
        }
};
#endif
