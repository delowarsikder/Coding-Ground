//sol idea:https://www.geeksforgeeks.org/sum-divisors-1-n/
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll sum=0;
    for(int i=1; i<=n; i++)
    {
        sum=(sum%mod+((n/i)%mod)*(i%mod)%mod)%mod;
    }
    cout<<sum<<endl;
}

