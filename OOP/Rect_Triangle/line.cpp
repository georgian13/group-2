#ifndef Line
#define Line
#include <iostream>
#include "point.cpp"
#include <math.h>
class Line : public Point {
    private:
        Point a;
    public:
        Line(Point a,Point x,Point y)
            :a(a) {
            this->x = x;
            this->y = y;
        }
        Line(const Line& L) {}
        ~Line() {}
        void setPoint(Point a) {
            this->a = a;
        }
        float getPoint() {
            return a;
        }
        float getLength() {
            return sqrt(pow((getPoint() - a.getX()), 2) + pow((getPoint() - a.getY()), 2));
        }
        void print() {
            float k = (Point::getY() - a.getY()) / (Point::getX() - a.getPoint());
            float b = Point::getY() - a.getPoint() * k;
            for(int x = a.getPoint() + 1; x < Point::getX(); ++x) {
                std::cout << x <<"  "<< k * x + b <<'\n';
            }
};
#endif
