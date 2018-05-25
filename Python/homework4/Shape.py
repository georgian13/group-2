#!/usr/bin/env python3
import math
class Shape(object):
    def __lt__(self, other):
        return self.circum() < other.circum()
    def __eq__(self, other):
        return self.area() == other.area()

class Rectangle(Shape):
    def __init__(self, length, width):
        self.length = length
        self.width = width
    def __str__(self):
        return "This is Rectangle: " + str(self.length * self.width)
    def circum(self):
        return 2 * (self.length + self.width)
    def area(self):
        return self.length * self.width

class Square(Rectangle):
    def __init__(self, side):
        Rectangle.__init__(self, side, side)
        self.side = side
    def __str__(self):
        return "This is Square: " + str(self.side)

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius
    def __str__(self):
        return "This is Circle: " + str(self.radius * 2)
    def __lt__(self, other):
        return self.radius < other.radius
    def circum(self):
        return 2 * math.pi * self.radius;
    def area(self):
        return self.radius * self.radius * math.pi

square1 = Square(1)
print(square1.circum())

square2 = Square(4)
print(square1 > square2)

rectangle1 = Rectangle(3, 3)
print(square2 == rectangle1)

circle1 = Circle(13)
print(square1 < circle1)
