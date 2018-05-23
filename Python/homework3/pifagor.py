#!/usr/bin/env python3
import math
last = 30
itog = []
for a in range(1, last):
    for b in range(a+1, last):
        nerq = math.sqrt(a**2 + b**2)
        c = int(nerq)
        if c**2 == a**2 + b**2 and c < last:
            itog.append((a, b, c))
print("{0} = {1}".format("pifagor triangle is ",itog))
