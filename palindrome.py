# -*- coding: utf-8 -*-
"""
Created on Sat Mar  2 19:29:00 2019

@author: aveng_000
"""

num=int(input("enter an integer:"))
copy=num
dig=0
rev=0
while(copy>0):
    dig=copy%10
    copy=int(copy/10)
    rev=(rev*10)+dig
if(rev==num):
    print("it is a palindrome")
else:
    print("it is not palindrome")
    
    