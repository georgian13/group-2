#ifndef circle
#define circle

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
        void setR(float r) {
            this->r = r;
        }
        float getR() {
            return r;
        }
        virtual float getP() {
            return 2 * M_PI * r;
        }
        virtual float getS() {
            return M_PI * r * r;
        }
        void print() {
            std::cout << "Circle (" << getX() << "," << getY() << ')' << "  r = " << r << std::endl;
        }
        virtual void foo() {
            std::cout << "Circle foo\n";
        }
        virtual void boo() {
            std::cout << "Circle boo\n";
        }
        virtual std::string shape() {
            return "#This is Circle\n";
        }

};

#endif
