#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

void sum(ll a[],ll n,ll s)
{
    if(n>=0)
    {
        s+=a[n];
    }
    else
    {
        cout<<s<<endl;
        return;
    }
    return sum(a,n-1,s);
}

int main()
{
    FastIO;
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sum(a,n-1,0);
    return 0;
}

