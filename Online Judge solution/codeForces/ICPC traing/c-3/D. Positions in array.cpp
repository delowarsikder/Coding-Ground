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
    for(ll i=0; i<v.size(); i++)
    {
        if(v[i]<=10){
        cout<<"A["<<i<<"] = "<<v[i]<<endl;
        }

    }
    v.erase(v.begin(),v.end());

    return 0;
}

