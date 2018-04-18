#include <iostream>
#include <cmath>
#include "circle.cpp"
#include "line.cpp"
#include "rectangle.cpp"
#include "triangle.cpp"
int main() {
    std::cout << "Input x1 : ";
    float x1;
    std::cin >> x1;
    std::cout << "Input y1 : ";
    float y1;
    std::cin >> y1;
    Point p1(x1, y1);
    p1.print();
    std::cout << "Input R : ";
    unsigned ra;
    std::cin >> ra;
    Circle c(p1,ra);
    c.print();
    std::cout << "Input x2 : ";
    float x2;
    std::cin >> x2;
    std::cout << "Input y2 : ";
    float y2;
    std::cin >> y2;
    Point p2(x2,y2);
    Rectangle r(p1,p2);
    std::cout << "Rectangle S = " << r.Rectangle_S() << std::endl;
    std::cout << "Rectangle P = " << r.Rectangle_P() << std::endl;
    r.print();
    std::cout << "Input x3 : ";
    float x3;
    std::cin >> x3;
    std::cout << "Input y3 : ";
    float y3;
    std::cin >> y3;
    Point p3(x3,y3);
    Triangle t(p1,p2,p3);
    std::cout << "Triangle S = " << t.Triangle_S() << std::endl;
    std::cout << "Triangle P = " << t.Triangle_P() << std::endl;
    return 0;
}
