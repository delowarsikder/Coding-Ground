#include<bits/stdc++.h>
using namespace std;
#define pb(a) push_back(a)
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

int main()
{
    FastIO;
    ll n;
    ll temp,ans=INT_MAX;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>temp;
        ans=min(ans,temp);
    }
    cout<<ans<<endl;
    return 0;
}
