#include <iostream>
#include "line.cpp"
#include <math.h>
class Rectangle: public Point {
    private:
        float a, b;
        Point h;
        Point z;
        Point t;
        Point k;
    public:
        Rectangle(float a = 5, float b = 5)
        : a(a)
        , b(b) 
        , h(0, 0)
        , z(a, 0)
        , t(a, b)
        , k(0, b)
        {}
        Rectangle(const Rectangle& R) 
            :a(R.a)
            ,b(R.b) {}
            ~Rectangle() {}
        void setA(float a) {
            this->a = a;
        }
        float getA() {
            return a;
        }
        void setB(float b) {
            this->b = b;
        }
        float getB() {
            return b;
        }
        float Rec_Par(float a, float b) {
            return 2 * (a + b);
        }
        float Rec_Area(float a, float b) {
            return a * b;
        }
        void print() {
            std::cout << "Rectangle \n";
            h.print();
            z.print();
            t.print();
            k.print();
       }
  };