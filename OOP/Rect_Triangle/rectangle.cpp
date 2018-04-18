#include <iostream>
#include <cmath>
class Point {
    private:
        float x, y;
    public:
        Point(float x=0, float y=0)
            :x(x)
            ,y(y) {}
        Point(const Point& P)
            :x(P.x)
            ,y(P.y) {}
        ~Point() {}
        Point(const Point& p)
           :x(p.x)
           ,y(p.y) {}
        void setX(float x) {
            this->x = x;
        }
        float getX() {
            return x;
        }
        void setY(float y) {
            this->y = y;
        }
        float getY() {
            return y;
        }
        void print() {
            std::cout << "Point( " << x << ", " << y << " )" <<'\n';
        }
        float distance(Point z) {
            return std::sqrt(std::pow(z.x - this->x, 2) + std::pow(z.y - this->y, 2));
        }

};
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
        float Rec_S() {
            return lenght() * width();
        }
        float Rec_P() {
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
class Triangle: public Point {
    private:
        float a, b, c;
    public:
        Triangle(float a=4, float b=4, float c=4)
        :a(a)
        ,b(b)
        ,c(c)
        {
            Point(0, 0);
       Point(a, 0);
        Point(a/2, b);
     }
  ~Triangle() {}
      void set_A(float a) {
   this->a = a;
        }
   void set_B(float b) {
        this->b = b;
      }
          void set_C(float c) {
       this->c = c;
    }
        float get_A() {
     return a;
         }
     float get_B() {
          return b;
       }
    float get_C() {
        return c;
     }
         float Triangle_S(float a, float b, float c) {
       float p = (a + b + c) / 2;
        return sqrt(p * (p-a) * (p-b) * (p-c));
    }
         float Triangle_P(float a, float b, float c) {
      return a + b + c; 
           }
};

int main() {
    std::cout << "Input x1 : ";
    float x1;
    std::cin >> x1;
    std::cout << "Input y1 : ";
    float y1;
    std::cin >> y1;
    Point p1(x1, y1);
    std::cout << "Input x2 : ";
    float x2;
    std::cin >> x2;
    std::cout << "Input y2 : ";
    float y2;
    std::cin >> y2;
    Point p2(x2,y2);
    Rectangle R(p1,p2);
    std::cout << " S = " << R.Rec_S() << std::endl;
    std::cout << " P = " << R.Rec_P() << std::endl;
    R.print();
    return 0;
}
