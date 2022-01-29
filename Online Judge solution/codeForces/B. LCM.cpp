#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int countDivisor(ll n)
{
    int divisor=0;
    for(ll i =1; i*i<=n; i++)
    {
        if(i*i==n)
        {
            divisor++;
        }
        else if(n%i==0)
        {
            divisor+=2;
        }
    }
    return divisor;

}

int main()
{
    ll b;
    cin>>b;
    ll res =countDivisor(b);
    cout<<res<<endl;
    return 0;
}
