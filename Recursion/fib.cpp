#include<bits/stdc++.h>
using namespace std;
#define mx 1000
int arr[mx];

int fib(int n)
{
    if(n==0 || n==1)
    {
       arr[n]=1;
    }
    else if(arr[n]==0)
    {
        arr[n]=fib(n-1)+fib(n-2);
    }
    return arr[n];
}

int main()
{
    int n=5;
    fib(n);
    for(int i=0; i<=n; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
