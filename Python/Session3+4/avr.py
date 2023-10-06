#!/usr/bin/python3

#Python code to generate Init function of GPIO for AVR

bitsCond =0b00000000

for i in range(0, 8):
    cond = input(f"please enter BIT {i} mode:")
    if cond == 'out':
        bitsCond |= (1<<i)
    elif cond == 'in':
        bitsCond &=~ (1<<i)
    else :
        print("error")

fd=open("avr.c",'w')
avr= 'void Init_PORTA_DIR(void) \n\
  {\n\
      DDRA= '+format(bitsCond,'#010b')+';\n\
  }\n\
  \
 '
fd.write(avr)
fd.close()
