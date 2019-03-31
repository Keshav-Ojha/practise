# -*- coding: utf-8 -*-
"""
Created on Sun Mar  3 11:53:28 2019

@author: aveng_000
"""

a=list(input("Enter some numbers to be sorted").split())
count=0
i=0
f=0
while( i < len(a)):
  for j in range(i+1,len(a)):
      
    if(a[i] > a[j]):
       a.append(a[i])
       count=count+1
       for k in range(i,len(a)-1):
           a[k]=a[k+1]
       a.pop()  
       i=0
       f=1
       break    
  if(f!=1):
      i=i+1
  else:
      f=0
      continue
    
print(count,end="")    