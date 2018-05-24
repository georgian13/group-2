#!/usr/bin/env python3
lis_t = [0]
i = 1
num = 1
while num < 50:
    i = i + 1
    lis_t.append(num)
    num = lis_t[i-1] + lis_t[i-2]
print("{0} = {1}".format("1 - 50 fibonachi number ",lis_t))

