#include<bits/stdc++.h>
using namespace std;
#define mx 1000000

bool prime[mx]; ///default all value are false ,prime

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
    else
    {
        return prime[n]==false;
    }
}


void sieve(int n)
{
    for(int i=3; i*i<=n; i=i+2)
    {
        if(prime[i]==false)// i is prime
        {
            for(int j=i*i; j<=n; j+=i+i)
            {
                prime[j]=true;
            }
        }
    }
}


int main()
{
    sieve(mx);
    int n;
    cin>>n;
    if(isPrime(n))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
