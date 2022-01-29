#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,s=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        x=n%10;
        n=n/10;
        s=s*10+(x+1);
    }
    while(s!=0)
    {
        x=s%10;
        s/=10;
        n=n*10+x;
    }
    printf("n : %d\n",n);
    return 0;
}
