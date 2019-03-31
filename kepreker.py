# -*- coding: utf-8 -*-
"""
Created on Sat Mar  2 23:33:01 2019

@author: aveng_000
"""

num=input("enter a num to check for kepreker: ")
cpy=int(num)
sqr=cpy**2
cpy_str=str(sqr)
l=len(cpy_str)
str1=cpy_str[0:(int(l/2))]
str2=cpy_str[int(l/2):l]
num1=int(str1)
num2=int(str2)
num3=num1+num2
if(num3==cpy):
    print("it is a kepreker no.")
else:
    print("not a kepreker no.")
    

    
        
        
    
    
    