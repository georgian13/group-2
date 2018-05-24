#!/usr/bin/env python3
lis_t = []
for i in range(1500,2700):
    if i % 5 == 0 and i % 7 == 0:
        lis_t.append(i)
print("{0} = {1}".format("this number's divided 5 and 7",lis_t))
