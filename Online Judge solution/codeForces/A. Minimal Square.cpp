#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll x,y;
        cin>>x>>y;
        ll ans=min(max(2*x,y),max(x,2*y));
        cout<<ans*ans<<endl;
    }
    return 0;
}
