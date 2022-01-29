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
    bool flag=false;
    for(ll i=0,j=v.size()-1; i<v.size()/2; i++,j--)
    {
        if(v[i]==v[j])
        {
            flag=true;
        }
        else
        {
            flag=false;
            break;
        }

    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    v.erase(v.begin(),v.end());

    return 0;
}


