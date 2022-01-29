n = int(input())
s = set(map(int, input().split()))
itr=int(input())
for i in range(itr):
    Q=input().split()
    val=0
    q=Q[0]
    if(len(Q)>1):
       var=int(Q[1])    
    if(q=="pop"):
        s.pop()
    elif(q=="remove"):
        s.remove(val)    
    elif(q=="discard"):
        s.discard(val)    
    
print(s)
    