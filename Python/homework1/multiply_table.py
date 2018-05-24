#!/usr/bin/env python3
number = input("Enter to unsigned integer number")
for i in range(1,11):
    print("{0} * {1} = {2}".format(i,number,int(number)*i))
