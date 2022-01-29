import math
a=math.factorial(64)
s=0
while(a!=0):
    a=a/10
    s=s+1

print("Total digit :",s)
