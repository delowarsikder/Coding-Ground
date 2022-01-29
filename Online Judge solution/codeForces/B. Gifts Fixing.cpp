#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--){
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    ll min_a=INT_MAX;
    ll min_b=INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        min_a=min(min_a,a[i]);
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        min_b=min(min_b,b[i]);
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=max(abs(min_a-a[i]),abs(min_b-b[i]));
    }
    cout<<ans<<endl;
    }
    return 0;
}
