#ifndef TRIANGLE
#define TRIANGLE
#include <iostream>
#include "point.cpp"
class Triangle : public Point {
    private:
        Point b;
        Point c;
    public:
        Triangle(Point a, Point b, Point c) 
            : Point(a)
            , b(b)
            , c(c)
            {}
        Triangle(const Triangle& t)
            : Point(t)
            , b(t.b)
            , c(t.c)
            {
                std::cout << "Triangle Coppy Constructor";
            }
        void setA(Point a) {
            Point::setX(a.getX());
            Point::setY(a.getY());
        }
        void setB() {
            this->b = b;
        }
        void setC() {
            this->c = c;
        }
        Point getA() {
            return Point(Point::getX(), Point::getY());
        }
        Point getB() {
            return b;
        }
        Point getC() {
            return c;
        }
        virtual float getP() {
            return Point::distance(b) + b.distance(c) + c.distance(Point(Point::getX(), Point::getY()));
        }
        virtual float getS() {
            float p = P() / 2;
            float ab = Point::distance(b);
            float bc = b.distance(c);
            float ca = c.distance(Point(Point::getX(), Point::getY()));
            return sqrt(p * (p - ab) * (p - bc) * (p - ca));
        }
        void print() {
            std::cout << "Print Triangle\n";
        }
        virtual void foo() {
            std::cout << "Point foo\n";
        }
        virtual void boo() {
            std::cout << "Point boo\n";
        }
        virtual std::string shape() {
            return "#This is Triangle\n";
        }
};
#endif
