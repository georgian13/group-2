#include <iostream>
#include "line.cpp"
#include <cmath>
class Rectangle: public Point {
    private:
        Point b;
    public:
        Rectangle(Point a, Point b)
            : Point(a)
            , b(b)
            {}
        Rectangle(Rectangle& r) 
            :Point(r)
            ,b(r.b)
            {

            }
            ~Rectangle() {}
        void setA(Point a) {
            Point::setX(a.getX());
            Point::setY(a.getY());
        }
        Point getA() {
            return Point(Point::getX(), Point::getY());
        }
        void setB(float b) {
            this->b = b;
        }
        Point getB() {
            return b;
        }
        float length() {
            return std::abs(Point::getX() - b.getX());
        }
        float width() {
            return std::abs(Point::getY() - b.getY());
        }
        virtual float getP() {
            return 2 * (length() + width());
        }
        virtual float getS() {
            return length() * width();
        }
        void print() {
            for (int i = 0; i < length(); ++i) {
                for (int j = 0; j <width(); ++j) {
                    std::cout <<"* ";
                }
                std::cout <<'\n';
            }
        }
        virtual void foo() {
            std::cout << "Rectangle foo\n";
        }
        virtual void boo() {
            std::cout << "Rectangle boo\n";
        }
        virtual std::string shape() {
            return "#This is Rectangle\n";
        }
};
