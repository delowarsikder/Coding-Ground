# Enter your code here. Read input from STDIN. Print output to STDOUT
m,n=map(int,input().split())
# x = list(map(int, input("Enter a multiple value: ").split()))
#get input n integer
n_ele=list(map(int,input().split()))
n_ele=set(n_ele)

a=set(map(int,input().split()))
b=set(map(int,input().split()))
hap=0
sad=0
for i in a:
    if(i in n_ele):
        hap=hap+1

for j in b:
    if(j in n_ele):
        sad=sad+1
print(hap-sad)   