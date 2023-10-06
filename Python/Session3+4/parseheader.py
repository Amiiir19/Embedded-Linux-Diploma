#ython program to parse header file and read 
# all prototypes of function and insert it into
# excel sheet with unique ID start with IDX0

import openpyxl

workbook= openpyxl.Workbook()

sheet=workbook.active  #to use the defaul sheet

sheet["A1"]="Function Name"
sheet["B1"]="Function ID"

fd=open("headerFile.h",'r')
length=len(fd.readlines())
fd.seek(0) # to get back to the first line

for i in range(length):  
  sheet["A"+str(i+2)] = fd.readline()
  sheet["B"+str(i+2)] = "IDX"+ str(i+1)

workbook.save("Example2.xlsx")
fd.close()
