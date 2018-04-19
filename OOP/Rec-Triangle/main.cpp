#include <iostream>
#include "circle.cpp"
#include "line.cpp"
#include "rectangle.cpp"
#include "triangle.cpp"
int main() {
    Point p(4,5);
    p.print();
    p.setX(3);
    p.setY(5);
    std::cout << p.getX() << ' ' <<p.getY() << '\n';
    Circle c(1,2,3);
    c.print();
    Point* a = &c;
    Circle* b = (Circle*) a;
    b->setX(4);
    b->setY(9);
    b->setR(11);
    b->print();
    Point k(9,7);
    Line l(k,p);
    Line u = l;
    l.print();
    l.cordinates();
    std::cout << "The length of line " << l.length() << std :: endl;
    Rectangle t(p,k);
    Rectangle w = t;
    std::cout << "\nParagic = " << w.getP() << "\nMakeres = " << w.getS() << std::endl;
    w.print();
    Rectangle* r = &t;
    r->print();
    Point po(18, 34);
    Triangle tr(p, k, po);
    tr.print();
    std::cout << "Virtual\n";
    Point *pi = &l;
    pi->print();
    Point z;
    printS(&z);
    printP(&z);

    return 0;
}
