#include<bits/stdc++.h>
using namespace std;

#define FastIO ios::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

vector<ll>v;
int main()
{
    FastIO;
    ll n;
    cin>>n;
    ll t;
    for(ll i=0; i<n; i++)
    {
        cin>>t;
        v.push_back(t);
    }

    sort(v.begin(),v.end(),greater<ll>());

    ll mn_val=INT_MAX,mn_pos;
    ///find min even and its pos
    bool flag=false;
    for(ll i=0; i<v.size(); i++)
    {
        if(v[i]%2==0)
        {
            if(v[i]<mn_val)
            {
                mn_val=v[i];
                mn_pos=i;
            }
            flag=true;
        }
    }

    ///exchange with last digit
    if(flag)
    {
        swap(v[v.size()-1],v[mn_pos]);
    }
    sort(v.begin(),v.end()-1,greater<ll>());
    ll s=0;
    for(ll i=0; i<v.size(); i++)
    {
        s=s*10+v[i];
//        cout<<v[i]<<" ";
    }
    if(s&1)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(ll i=0; i<v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<endl;
    }
    return 0;
}
