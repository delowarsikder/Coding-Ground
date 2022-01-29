#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

tuple<ll,ll,ll> gcd(ll a,ll b)
{
    if (b == 0)
    {
        return {1,0,a};
    }
    else
    {
        ll x,y,g;
        tie(x,y,g) = gcd(b,a%b);
        return {y,x-(a/b)*y,g};
    }
}

int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll p,f;
        ll cnts,cntw;
        ll s,w;
        cin>>p>>f;
        cin>>cnts>>cntw;
        cin>>s>>w;

        for(ll i=1;i<=min(s,w);i++){

        }
        }
    return 0;
}

