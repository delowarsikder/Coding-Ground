#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define md 1000000007 //this is a prime
#define mod(a,m) a%m

int _modulus(ll x,ll y,ll m)
{
    int res=1;
    while(y>0)
    {
        if(y&1)
        {
            res=mod(mod(res,m)*mod(x,m),m);
        }
        y=y>>1; //divided by 2
        x=mod(mod(x,m)*mod(x,m),m);
    }
    return res;
}

int exponent(ll a, ll b,ll c)
{
    ll res=_modulus(b,c,md-1);
    ll ans=_modulus(a,res,md);
    cout<<ans<<endl;

}

int main()
{
    ll n;
    cin>>n;
    ll a,b,c;
    while(n--)
    {
        cin>>a>>b>>c;
        exponent(a,b,c);
    }
    return 0;
}

