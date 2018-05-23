#!/usr/bin/env python3
import math
class Rectange(object):
    def __init__(self, latitude = 1, longitude = 1):
        self.latitude = latitude
        self.longitude = longitude
    def perimeter(self):
        return 2 * (self.latitude + self.longitude)
    def area(self):
        return self.latitude * self.longitude
r = Rectange(14,13)
print("Area      of Rectangle: cm^2 = ",(r.area()))
print("Parimeter of Rectangle: cm   = ",(r.perimeter()))
