#!/usr/bin/env python3
import unittest
import code_prime
class CodeTest(unittest.TestCase):
    def test_assertTrue(self):
        '''
            True returns a value
        '''
        self.assertTrue(code_prime.isPrime(13),'This test is TRUE')
    def test_assertFalse(self):
        '''
            False returns a value
        '''
        self.assertFalse(code_prime.isPrime(14),'This test is FALSE')
    def test_zero(self):
        '''
            Zero returns a value
        '''
        self.assertEqual(code_prime.isPrime(0),'Zero is not Prime number')

    def test_signed(self):
        '''
            Singned returns a value
        '''
        self.assertFalse(code_prime.isPrime(-1),"This number is signed")
if __name__ == '__main__':
    unittest.main()
    assertLessEqual
