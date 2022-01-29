from math import *
ab=int(input())
bc=int(input())
pi=acos(-1)
ca=sqrt((ab**2)+(bc**2))
cm=0.5*ca
s=(ab+bc+ca)/2
area=sqrt(s*(s-ab)*(s-bc)*(s-ca))
A=(asin((2*area)/(ab*ca)))
C=(asin((2*area)/(bc*ca)))
area2=0.5*sin(C)*bc*cm
len_m=0.5*sqrt(2*ab**2+2*bc**2-ca**2)
angle=round(degrees(asin((2*area2)/(len_m*bc))))
# print(angle)
degree=chr(176)
print(angle,degree,sep='')