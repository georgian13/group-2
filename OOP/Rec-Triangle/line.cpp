#ifndef Line
#define Line
#include <iostream>
#include <cmath>
class Line : public Point {
    private:
        Point a;
    public:
        Line(Point a,Point b)
        :Point(b) {
            this->a = a;
        }
        Line(const Line& l) {}
        ~Line() {}
        void setA(Point a) {
            this->a = a;
        }
        Point getA() {
            return a;
        }
        float getLength() {
            return Point::distance(b);
        }
        void PrintCoord(){
            float k = (a.getY() - Point::getY()) / (a.getX() - Point::getX());
            float b = (Point::getY() - Point::getX()) * k;
                for (int x = Point::getX() + 1; i < a.getX(); i++){
                    std::cout << "(" << x << "," << k * x  + b << ")\n";
                }
        }
};
#endif
