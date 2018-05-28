#!/usr/bin/env python3
'''
    This Code divided List1 all
    element in a List2
'''
try:
    lis_t1 = [13,8,4,2,3]
    lis_t2 = [ 2,5,'h',4,6]
    for i in range(len(lis_t1)):
        s = lis_t1[i] / lis_t2[i]
        print(s)
except IndexError:
    print("Index Error:No seach index")
except ZeroDivisionError:
    print("Zero  Error:Can't divided in 0 ")
except TypeError:
    print("Type Error:")
