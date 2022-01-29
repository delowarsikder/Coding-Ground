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
        if(t<0)
        {
            v.push_back(2);
        }
        else if(t>0)
        {
            v.push_back(1);
        }
        else
        {
            v.push_back(t);
        }
    }
//    cout<<"print all value:"<<endl;
    for(ll i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    v.erase(v.begin(),v.end());

    return 0;
}
