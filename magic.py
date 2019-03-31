# -*- coding: utf-8 -*-
"""
Created on Sat Mar  2 22:45:56 2019

@author: aveng_000
"""

num=int(input("enter no to check for magic number :"))
dig=0
sum=0
k=0
while(k==0):
    while(num>0):
        dig=num%10
        num=int(num/10)
        sum=sum+dig
    num=sum
    sum=0
    if(int(num/10)==0):
        if(num==1):
            print("it is a magic no.")
            break
        else:
            print("not a magic no.")
            break
    else:
        continue
     
        
    