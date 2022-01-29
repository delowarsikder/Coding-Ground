#include<bits/stdc++.h>
using namespace std;

#define FastIO ios::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

vector<ll>v;

ll gcd(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    gcd(b,a%b);
}

int main()
{
    FastIO;
    ll n,k;
    cin>>n>>k;
    int cnt=0;
    ll t;
    for(ll i=0; i<n; i++)
    {
        cin>>t;
        v.push_back(t);
        if(!(t&1))
        {
            cnt++;
        }
    }
    bool flag=false;
    if(cnt>=k)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else
    {
        for(ll i=0; i<v.size(); i++)
        {
            ll g=0;
            for(ll j=i; j<i+k-1; j++)
            {

            }
        }
    }
    return 0;
}
