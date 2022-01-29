def calculator(a,b=6):
    mul=a*b
    add=a+b
    sub=a-b
    div=a//b
    return mul,add,div,sub

p,q,r,s=calculator(4,1)
print(p,'\n',q,'\n',r,'\n',s,'\n')
