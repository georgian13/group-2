#ifndef CIRCLE
#define CIRCLE
#include <iostream>
#include <cmath>
#include "point.cpp"
class Circle : public Point {
    private:
        Point a;
        unsigned r;
    public:
        Circle(Point a, unsigned r = 1)
        :Point(a)
        ,r(r)
        {}
        Circle(const Circle& c)
           :Point(c)
           ,r(c.r) {}
        void setR(unsigned r) {
            this->r = r;
        }
        float getR() {
            return r;
        }
        float getL() {
            return 2 * M_PI * r;
        }
        float getS() {
            return M_PI * r * r;
        }
        double operator* (double k) {
            double z = r * k;
            return z;
        void print() {
            std::cout << "Circle (" << a.getX() << ", " << a.getY() << " )\n";
            std::cout << "  r = " << r << std::endl;
        }
        float R() {
            return std::sqrt(pow(r.getX() - Point::getX(), 2) + pow(r.getY() - Point::getY(), 2));
        }
};

#endif
