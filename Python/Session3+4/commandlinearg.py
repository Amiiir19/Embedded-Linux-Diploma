#Python program to get the command-line arguments

import sys

#print(type(sys.argv))

#from command line enter 
#>>python commandlinearg.py arg1 arg2 arg3

#this code will back the number of arguments given bby the user 
#and print the arguments
print("this the name/path of the script :"+str(sys.argv[0]))
print("Number of Arguments = "+str(len(sys.argv)))
print("Argument List: ," + str(sys.argv))


