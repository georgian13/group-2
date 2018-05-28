#!/usr/bin/env python3
'''
    This Code divided List1 all
    element in a List2
'''
try:
    a = float(input("Enter A number: "))
    b = float(input("Enter B number: "))
    c = a / b
except ZeroDivisionError:
    print("Can't divide by zero")
