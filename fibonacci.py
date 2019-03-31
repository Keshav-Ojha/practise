# -*- coding: utf-8 -*-
"""
Created on Sat Mar  2 22:29:31 2019

@author: aveng_000
"""
num=int(input("enter a positive integer to show no of terms in fibonacci :"))
a=0
b=1
c=0
print("fibonacci series : 0, 1,",end=" ")
for i in range(num-2):
    
    c=a+b
    a=b
    b=c
    print(c,end=", ")
    
    
