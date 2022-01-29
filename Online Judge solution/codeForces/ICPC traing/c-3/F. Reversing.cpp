#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FastIO ios::sync_stdio(0);cin.tie(0);
vector<ll>v;

int main()
{
    ll n,t;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>t;
        v.push_back(t);
    }
//    cout<<"print all value:"<<endl;
    for(ll i=v.size()-1; i>=0; i--)
    {
        cout<<v[i]<<" ";
    }
    v.erase(v.begin(),v.end());

    return 0;
}

