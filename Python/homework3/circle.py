#!/usr/bin/env python3
import math
class Circle(object):
    def __init__(self, radius = 1):
        self.radius = radius
    def perimeter(self):
        return 2 * math.pi * self.radius
    def area(self):
        return math.pi * (self.radius ** 2)
r = Circle(2)
print("Area      of Rectangle: cm^2 = ",(r.area()))
print("Parimeter of Rectangle: cm   = ",(r.perimeter()))
