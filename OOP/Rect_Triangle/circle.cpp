#ifndef CIRCLE
#define CIRCLE

#include <iostream>
#include "point.cpp"
#include <math.h>
class Circle : public Point {
    private:
        float r;
    public:
        Circle(float x, float y, float r)
        :Point(x,y)
            ,r(r)
            {}
            Circle(const Circle& C) 
            :x(C.x)
            ,y(C.y)
            ,r(C.r) {}
        void setR(float r) {
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
        void print() {
            std::cout << "Circle (" << getX() << "," << getY() << ')\n';
            std::cout << "  r = " << r << std::endl;
        }
};

#endif
