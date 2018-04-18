#ifndef Rectangle
#define Rectangle
#include <iostream>
#include <cmath>
#include "point.cpp"
class Rectangle: public Point {
    private:
        Point a;
    public:
        Rectangle(Point a,Point b)
        :Point(b)
    {
        this->a = a;
    }
    ~Rectangle() {}
    void setA(Point a) {
        this->a = a;
    }
    Point getA() {
        return a;
    }
    float lenght() {
        return  std::abs(a.getX() - Point::getX());
    }
    float width() {
        return  std::abs(a.getY() - Point::getY());
    }
    float Rectangle_S() {
        return lenght() * width();
    }
    float Rectangle_P() {
        return 2 * (lenght() + width());
    }
    void print() {
        for (int i = 0; i < lenght(); ++i) {
            for (int i = 0; i < width(); ++i) {
                std::cout <<"* ";
            }
            std::cout <<'\n';;
        }
    }
};
#endif


