#!/usr/bin/env python3
import unittest
import code_add
class CodeTest(unittest.TestCase):
    def test_assertEqual(self):
        '''
            A and B summa returns a value
        '''
        self.assertEqual(code_add.add(2,3),5,"Test add(a, b) is OK")
if __name__ == '__main__':
    unittest.main()
    assertLessEqual
