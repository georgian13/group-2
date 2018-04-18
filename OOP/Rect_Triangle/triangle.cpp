#include <iostream>
//#include "point.cpp"
#include <cmath>
class Triangle//: public Point
{
    private:
        float ea, eb;
        unsigned int ank_ab;
    Triangle(float ea = 1, float eb = 1, unsigned int ank_ab = 90) {
        this->ea = ea;
        this->eb = eb;
        this->ank_ab = ank_ab;
    }
    ~Triangle() {}
    void setA(float ea) {
        this->ea = ea;
    }
    float getA() {
        return ea;
                     }
    void setB(float eb) {
        this->eb = eb;
    }
    float getB() {
        return eb;
    }
    void setC(unsigned int ank_ab) {
        this->ank_ab = ank_ab;
    }
    float getC() {
        return ank_ab;
    }
    float getS() {
        float S = (ea * eb * std::sin(ank_ab * M_PI / 180))/2;
        return S;
    }
    float getL() {
        float ec = std::sqrt(std::pow(ea, 2) + std::pow(eb, 2) - 2 * ea * eb * std::cos(ank_ab * M_PI / 180));
        double large = ea + eb + ec;
        return large;
    }
    void print() {
        std::cout << "Triangle  " << ea << " & " << eb << "  and "<< ank_ab <<"Radius\n";
    }
};
int main() {
    Triangle T;
    T.print();
    return 0;
}
