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

};

class Triangle: public Point {
		private:
			float a, b, c;
		public:
			Triangle(float a=4, float b=4, float c=4)
				:a(a)
				,b(b)
				,c(c)
			{	Point(0, 0);
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
	Triangle T;
	std::cout << "Input a : ";
	float a;
	std::cin >> a;
	std::cout << "Input b : ";
	float b;
	std::cin >> b;
	std::cout << "Input c : ";
	float c;
	std::cin >> c;
	std::cout << "S = " << T.Triangle_S(a, b, c) << std::endl;
	std::cout << "P = " << T.Triangle_P(a, b, c) << std::endl;
	return 0;
}
