#include <iostream>
#include <cmath>
class Circle {
    double pi = 3.14;
    private:
        unsigned int r;
        float x, y;
        char *name;
    public:
        Circle(char* name = "Lilit", float x = 0, float y = 0, unsigned r = 5)
            : name(name), x(x), y(y), r(r) {}
        ~Circle() {}
        float getX() {
            return x;
        }
        float getY() {
            return y;
        }
        unsigned int getR() {
            return r;
        }

        char getName() {
            return *name;
        }
        void setX(float x) {
            this->x = x;
        }
        void setY(float y) {
            this->y= y;
        }
        void setR(unsigned int r) {
            this->r = r;
        }
        void setName(char* name) {
            (*this).name = name;
        }
        float Circle_L(unsigned int r) {
            return 2 * pi * r;
        }
        float Circle_S(unsigned int r) {
            return pi * r * r;
        }
        float operator*(int a) {
            return  r * a;
        }
};
