#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
vector<ll>v;

int main()
{
    FastIO;
    ll n,tc;
    cin>>tc;
    while(tc--){
        cin>>n;
    for(ll i=0; i<n; i++)
    {
        ll t;
        cin>>t;
        v.push_back(t);
    }
    ll mn=INT_MAX;
    for(ll i=0; i<v.size()-1; i++)
    {
        for(ll j=i+1;j<v.size();j++){
            ll ans=v[i]+v[j]+j-i;
            if(ans<mn){
                mn=ans;
            }
        }
    }
    cout<<mn<<endl;
    v.erase(v.begin(),v.end());

    }
    return 0;
}

