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
//    sort(v.begin(),v.end());
//selection sort

    ll mn_idx;
    for(ll i=0; i<n-1; i++)
    {
        mn_idx=i;
        for(ll j=i+1; j<n; j++)
        {
            if(v[j]<v[mn_idx])
            {
                mn_idx=j;
            }
        }
        swap(v[mn_idx],v[i]);
    }
    for(ll i=0; i<v.size()-1; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<v[v.size()-1]<<endl;
    v.erase(v.begin(),v.end());

    return 0;
}
