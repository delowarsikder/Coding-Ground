#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>arr(m);
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    ll ans=INT_MAX;
    for(int i=0;i<=m-n;i++){
        ans=min(ans,abs(arr[i]-arr[n-1+i]));
    }
    cout<<ans<<endl;
    return 0;
}
