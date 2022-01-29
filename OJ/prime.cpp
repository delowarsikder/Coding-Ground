#include<bits/stdc++.h>
using namespace std;

#define M 1000000
bool mark[M];

bool isPrime(int n)
{
    if(n<2)
    {
        return false;
    }
    if(n==2)
    {
        return true;
    }
    if(n%2==0)
    {
        return false;
    }
    return mark[n]==false;
}

void sieve(int n)
{
    for(int i=3; i*i<=n; i+=2)
    {
        if(mark[i]==false)
        {
            for(int j=i*i; j<=n; j+=i+i)
            {
                mark[j]=true;
            }
        }
    }

}

int main()
{
    sieve(100000);
    cout<<isPrime(20)<<endl;
    return 0;
}
