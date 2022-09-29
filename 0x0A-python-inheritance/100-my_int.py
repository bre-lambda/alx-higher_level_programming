#!/usr/bin/python3
''' module for Int class'''


class int:

    def __init__(self):
        return 0


'''Module for MyInt class.'''


class MyInt(int):
    def __eq__(self, other):
        '''Override equals, inverting it.'''
        return int(self) != int(other)

    def __ne__(self, other):
        '''Override not-equals, inverting it.'''
        return int(self) == int(other)
