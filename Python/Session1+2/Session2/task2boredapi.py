#!/usr/bin/python3
import requests
data=requests.get('https://www.boredapi.com/api/activity')
print(data.json()['activity'])
#data.json()
# >> {'activity': 'Memorize the fifty states and their capitals', 
# 'type': 'education', 'participants': 1, 'price': 0,
#  'link': '', 'key': '4179309', 'accessibility': 0}


loc=requests.get('https://api.ipify.org/?format=json')
#loc.json() >>> {'ip': '41.69.112.241'}
print("Your IP is : {}".format(loc.json()['ip']))

