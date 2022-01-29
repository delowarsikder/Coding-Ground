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
    ll s=0;
    ll mx_val=INT_MIN,mx_pos;

    for(ll i=0; i<n; i++)
    {
        cin>>t;
//        v.push_back(t);
        if(t>mx_val)
        {
            mx_val=t;
            mx_pos=i;
        }
        s=s+t;
    }
    if(s>=0)
    {
        cout<<mx_pos+1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }

    return 0;
}
