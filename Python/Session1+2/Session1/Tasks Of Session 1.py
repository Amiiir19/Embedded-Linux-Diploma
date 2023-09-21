#!/usr/bin/python3
#####################################################
#Count Number 4 in Given List

listx=[1,1,3,4,5,4,6,4]
count=0
for i in range(len(listx)):
    if 4==listx[i]:
        count=count+1
print(count)

#O/P : Number Of 4s in the list 
#####################################################
#Vowel or not

letter=input("Please Enter a Letter : \n")
listy=['a','e','i','o','u']
print(letter in listy) 

#O/P : True or False 
#####################################################
#Enviroment Variables 

import os
print(os.environ['PATH'])

#O/P : Path of Enviroment Variables
#####################################################
#Radius Of circle 

import math
radius=float(input("Please Enter the radius of the circle: \n"))
area=(math.pi)*radius*radius
print(area)

#O/P : Area of the Circle 
#####################################################
# calendar

import calendar
inYear=int(input('Please Enter the Year : \n'))
inMonth=int(input('Please Enter the Month : \n'))
print(calendar.month(inYear,inMonth,1,1))

#O/P : August 2023
#Mo Tu We Th Fr Sa Su
#    1  2  3  4  5  6
# 7  8  9 10 11 12 13
# 14 15 16 17 18 19 20
# 21 22 23 24 25 26 27
# 28 29 30 31

#####################################################