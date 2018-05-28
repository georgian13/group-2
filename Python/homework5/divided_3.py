#!/usr/bin/env python3
'''
    This Code divided number as 3
'''
try:
    number = input("Enter a number: ")
except ValueError:
    print("The number must be an integer")
else:
    if int(number) % 3 != 0:
        raise TypeError("Number must be divisible by 3")
    else:
        print("Cool")
