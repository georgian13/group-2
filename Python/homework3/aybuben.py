#!/usr/bin/env python3
string = input("Type a word  ")
s = [i for i in string if i == "a" or i == "e" or i == "i" or i == "o" or i == "u"]
print("".join(s))

