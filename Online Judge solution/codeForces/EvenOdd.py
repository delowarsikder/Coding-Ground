from math import *
#n,k=map(int, input().split())
n,k=input(),input()
no_odd= ceil(n/2)
if(k>no_odd):
    print(2*(k-no_odd))
else:
    print(2*k-1)
