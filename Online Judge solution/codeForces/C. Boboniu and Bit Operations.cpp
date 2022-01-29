#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
#define mx 1000

int main()
{
    FastIO;
    ll n,m;
    cin>>n>>m;
    ll a[mx],b[mx],c[mx];

    memset(a,0,sizeof(a)/sizeof(int));
    memset(b,0,sizeof(b)/sizeof(int));
    memset(c,0,sizeof(c)/sizeof(int));

    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(ll i=0; i<m; i++)
    {
        cin>>b[i];
    }
    //choose i for j
    ll temp=0;
    for(ll i=0; i<n; i++)
    {
        temp=(a[i]&b[0]);
        for(ll j=1; j<m; j++)
        {
            temp=min(temp,(a[i]&b[j]));
        }
        c[i]=temp;
    }
    ll ans=0;
    for(ll i=0; i<n; i++)
    {
        ans=(ans|c[i]);
    }
    //choose j for i


    ll temp1=0;
    for(ll i=0; i<m; i++)
    {
        temp1=(b[i]&a[0]);

        for(ll j=1; j<n; j++)
        {
            temp1=min(temp1,(b[i]&a[j]));
        }
        c[i]=temp1;
    }
    ll ans1=0;
    for(ll i=0; i<m; i++)
    {
        ans1=(ans1|c[i]);
    }

    if(ans1>ans)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<ans1<<endl;
    }


    return 0;
}
