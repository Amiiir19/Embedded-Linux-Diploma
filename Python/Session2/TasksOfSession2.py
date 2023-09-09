#!/usr/bin/python3
#####################################################

import requests
import json
data=requests.get('https://www.boredapi.com/api/activity')

print(type(data.json()))
#data2 = json.loads(str(data.json()))

print(data.json()['activity'])


import firelink
print("Please Enter Number of the Bookmark you prefer")
print("1.Facebook \n2-Instagram \n3-Youtube \n4-Gmail \n5-Linkedin \n")
x=int(input(""))
print("Processing",end=' ')
for i in range(1,50):
 print(".",end='')
 
print("\n")
firelink.firefox(firelink.site(x))




