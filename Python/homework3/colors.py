#!/usr/bin/env python3
colours = [ "red", "green", "yellow", "blue" ]
things = [ "house", "car", "tree" ]
s = [(i,j) for i in colours for j in things]
print("{0} = {1}".format("colors and things ",s))
