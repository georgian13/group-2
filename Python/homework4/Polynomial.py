#!/usr/bin/env python3
import math
class Polynomial(object):
    def __init__(self,a=1,b=1,c=1):
        self.a = a
        self.b = b
        self.c = c
    def __str__(self):
        a = self.a
        b = self.b
        c = self.c
        return "{0}{1}{2} = 0".format(str(a) + "x^2" if int(a) != 0 else "", "" if int(b) == 0 else "+" + str(b) +"x" if int(b) > 0 and int(a) != 0 else str(b) + "x", "" if int(c) == 0 else "+" + str(c) if int(c) > 0 else srt(c) )
    def z_value(self):
        if self.a == 0:
            print("ERROR A = 0")
        else:
            D = (self.b ** 2) - 4 * self.a * self.c
            if D < 0:
                return "Error"
            elif D == 0:
                x = -self.b/(2 * self.a)
                return "x = " + x
            else:
                x1 = (-self.b + math.sqrt(D))/(2 * self.a)
                x2 = (-self.b - math.sqrt(D))/(2 * self.a)
                return "x1 = " + str(x1) + "  x2 = " + str(x2)
    def x_value(self,x):
        return "ax^2+bx+c = " + str(self.a * x**2 + self.b * x + self.c)
    def __add__(self,other):
        a = self.a + other.a
        b = self.b + other.b
        c = self.c + other.c
        return Polynomial(a,b,c)
    def __sub__(self,other):
        a = self.a - other.a
        b = self.b - other.b
        c = self.c - other.c
        return Polynomial(a,b,c)
    def __mul__(self,other):
        a = str(self.a * other.a)
        b = str(self.a * other.b + self.b * other.a)
        c = str(self.a * other.c + self.b * other.b + self.c * other.a)
        d = str(self.b * other.c + self.c * other.b)
        e = str(self.c * other.c)
        return "{0} {1} {2} {3} {4} = 0".format(a + "x^4" if int(a) != 0 else "", "" if int(b) == 0 else "+" + b +"x^3" if int(b) > 0 and int(a) != 0 else b + "x^3","" if int(c) == 0 else "+" + c + "x^2" if int(c) > 0 else c + "x^2", "" if int(d) == 0 else "+" + d + "x" if int(d) > 0 else d + "x","" if int(e) == 0 else "+" + e if int(e) > 0 else e)
p1 = Polynomial(2,5,3)
p2 = Polynomial(1,0,2)

print(p1)
print(p1.z_value())
print(p1.x_value(4))
print(p1+p2)
print(p1-p2)
print(p1*p2)
