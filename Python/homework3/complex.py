#!/usr/bin/env python3
import math
class Complex(object):
    def __init__(self, a, b):
        self.a = a
        self.b = b
    def __str__(self):
        if self.a == 0 and self.b == 0:
            return "0"
        elif self.a == 0:
            return "[" + str(self.b) + "i]"
        elif self.b == 0:
            return "[" + str(self.a) + "]"
        else:
            if(self.b < 0):
                return "[" + str(self.a) + str(self.b) + "i]"
            else:
                return "[" + str(self.a) + "+" + str(self.b) + "i]"
    def __add__(self, other):
        return Complex(self.a + other.a,self.b + other.b)
    def __sub__(self, other):
        return Complex(self.a - other.a,self.b - other.b)
    def __mul__(self, other):
        return Complex(self.a * other.a - self.b * other.b,self.a * other.b + self.b * other.a)
    def __truediv__(self, other):
        if other.a == 0 or other.b == 0:
            return "Error"
        else:
            return Complex((self.a * other.a + self.b * other.b) / other.a ** 2 + other.b ** 2,(self.b * other.a - self.a * other.b) / other.a ** 2 + other.b ** 2)
    def abs(self):
        return (self.a ** 2 + self.b ** 2) ** (1/2)
    def __eq__(self, other):
        return self.a == other.a and self.b == other.b
    def __ne__(self, other):
        return not (self.a == other.a and self.b == other.b)
    def __lt__(self, other):
        return self.abs() < other.abs()
    def __gt__(self, other):
        return self.abs() > other.abs()
    def __le__(self, other):
        return self.abs() <= other.abs()
    def __ge__(self, other):
        return self.abs() >= other.abs()
    def __iadd__(self, other):
        self.a += other.a
        self.b += other.b
        return Complex(self.a, self.b)
    def __isub__(self, other):
        self.a -= other.a
        self.b -= other.b
        return Complex(self.a, self.b)
    def __imul__(self, other):
        self.a = self.a * other.a - self.b * other.b
        self.b = self.a * other.b + self.b * other.a
        return Complex(self.a, self.b)
    def __idiv__(self, other):
        self.a = (self.a * other.a + self.b * other.b) / (other.a ** 2 + other.b ** 2)
        self.b = (self.b * other.a - self.a * other.b) / (other.a ** 2 + other.b ** 2)
        return Complex(self.a, self.b)
    def inverse(self):
        return Complex(self.a / self.abs(), - (self.b / self.abs()))
origin = Complex(13,10)
master = Complex(2,6)
print("{0} = {1}".format("master",master))
print("{0} = {1}".format("origin",master + origin))
print("START----------------------------------------------------")
print("{0} = {1}".format("master + origin",master + origin))
print("{0} = {1}".format("master - origin",master - origin))
print("{0} = {1}".format("master * origin",master * origin))
print("{0} = {1}".format("master / origin",master / origin))
print("---------------------------------------------------------")
print("{0} => {1}".format("master > origin ?",master > origin))
print("{0} => {1}".format("master >= origin ?",master >= origin))
print("{0} => {1}".format("master < origin ?",master < origin))
print("{0} => {1}".format("master <= origin ?",master <= origin))
print("{0} => {1}".format("master == origin ?",master == origin))
print("{0} => {1}".format("master != origin ?",master != origin))
print("---------------------------------------------------------")
master += origin
print("{0} => {1}".format("master = master + origin",master))
master -= origin
print("{0} => {1}".format("master = master - origin",master))
master *= origin
print("{0} => {1}".format("master = master * origin",master))
master /= origin
print("{0} => {1}".format("master = master / origin",master))
print("---------------------------------------------------------")
print("{0} = {1}".format("inverse origin",origin.inverse()))
print("{0} = {1}".format("inverse master",master.inverse()))
print("------------------------------------------------------END")
