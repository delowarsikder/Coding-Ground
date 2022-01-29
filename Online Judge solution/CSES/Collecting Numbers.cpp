#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll ans=INT_MIN;
    for(ll i=0; i<n; i++)
    {
        ll a;
        cin>>a;

        ans=max(ans,abs(a-(i+1)));
//        cout<<abs(a-i+1)<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
