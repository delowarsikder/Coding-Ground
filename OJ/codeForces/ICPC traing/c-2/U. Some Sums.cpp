#include<bits/stdc++.h>
using namespace std;
#define mx 10000
#define pb(x) push_back(x)

typedef long long ll;
vector<int>v;
int sumofDigit(int n)
{
    ll x=0;
    while(n!=0)
    {
        x+=n%10;
        n/=10;
    }
    return x;
}

int main()
{
    for(int i=1; i<=mx; i++)
    {
        ll s=sumofDigit(i);
        v.pb(s);
    }
    ll n,a,b;
    cin>>n>>a>>b;
    ll s=0;
    for(ll i=0; i<n; i++)
    {
        if(v[i]<=b && v[i]>=a)
        {
            s=s+i+1;
        }
    }
    cout<<s<<endl;
    return 0;
}
