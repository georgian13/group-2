#ifndef point
#define point
#include <iostream>
#include <cmath>
class Shape {
    public:
        virtual std::string shape() = 0;
        virtual void foo() = 0;
        virtual void boo() = 0;
        virtual float getS() = 0;
        virtual float getP() = 0;
};
void printS(Shape* obj) {
    std::cout << obj->getS();
}

void printP(Shape* obj) {
    std::cout << obj->getP();
}

class Point: public Shape {
    private:
        float x;
        float y;
    public:
        Point(float x = 0, float y = 0) : x(x), y(y) {}
        ~Point() {}
        void setX(float x) {
            this->x = x;
        }
        void setY(float y) {
            this->y = y;
        }
        float getX() {
            return x;
        }
        float getY() {
            return y;
        }
        float distance(Point b) {
            return std::sqrt(pow(b.getX() - this->getX(), 2) + pow(b.getY() - this->getY(), 2));
        }
        void print() {
            std::cout << "Point (" << x << ',' << y << ")\n";
        }
        virtual void foo() {
            std::cout << "Point foo\n";
        }
        virtual void boo() {
            std::cout << "Point boo\n";
        }
        virtual std::string shape() {
            return "#This is Point \n";
        }
};

#endif
