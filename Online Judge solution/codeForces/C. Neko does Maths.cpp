#include<bits/stdc++.h>
using namespace std;

#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

ll gcd(ll a,ll b)
{
    if(a==0)
    {
//        cout<<b<<endl;
        return b;
    }
    return gcd(b%a,a);
}
ll lcm(ll a,ll b)
{
    return (a/gcd(a,b))*b;
}

int main()
{
    FastIO;
    ll a,b;
    cin>>a>>b;
    if((a%b==0)||(b%a==0))
    {
        cout<<0<<endl;
        return 0;
    }
    ll lc =lcm(a,b);
    ll k;
    bool flag=false;
    for(k=1; k<max(a,b); k++)
    {
        ll lm=lcm(a+k,b+k);
        if(lm<lc)
        {
            flag=true;
            cout<<k<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<0<<endl;
    }
    return 0;
}
