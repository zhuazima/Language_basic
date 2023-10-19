#!/usr/bin/env python3
# -*- coding: utf-8 -*-


    # command 
    # cd C:\Users\Wankunpeng\Desktop\vscode_mingw\python\module
    # python -m module

' a test module '

__author__ = 'Michael Liao'

import sys

def test():
    args = sys.argv
    if len(args)==1:
        print('Hello, world!')
    elif len(args)==2:
        print('Hello, %s!' % args[1])
    else:
        print('Too many arguments!')

if __name__=='__main__':
    test()

