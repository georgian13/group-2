#!/usr/bin/env python3
'''
    This Code find Number
    Prime or NOT Prime
'''
def isPrime(num):
    if num == 1 or num == 2:
        return True
    else:
        for i in range(2,int(num**0.5)+1):
            if num % i == 0:
                return False
        return True
