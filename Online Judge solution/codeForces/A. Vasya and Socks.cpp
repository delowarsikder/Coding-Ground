#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,m;
    cin>>n>>m;
    ll ans=n;
    while(n>=m)
    {
        ans+=n/m;
        n=n/m+n%m;
    }

    cout<<ans<<endl;
    return 0;
}
