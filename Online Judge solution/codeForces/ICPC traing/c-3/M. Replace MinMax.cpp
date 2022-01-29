#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
vector<ll>v;

int main()
{
    FastIO;
    ll n,t;
    cin>>n;
    ll mx_val=INT_MIN,mn_val=INT_MAX;
    ll mx_pos,mn_pos;
    //find min
    for(ll i=0; i<n; i++)
    {
        cin>>t;
        v.push_back(t);
        if(t<mn_val)
        {
            mn_val=t;
            mn_pos=i;
        }
    }
    //find max
    for(ll i=0; i<v.size(); i++)
    {
        if(v[i]>mx_val)
        {
            mx_val=v[i];
            mx_pos=i;
        }
    }
//    cout<<" min  pos val:"<<mn_pos<< " "<<mn_val<<endl;
//    cout<<" mx pos val:"<<mx_pos<< " "<<mx_val<<endl;
    //find max
    swap(v[mx_pos],v[mn_pos]);
    for(ll i=0; i<v.size()-1; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<v[v.size()-1]<<endl;
    v.erase(v.begin(),v.end());

    return 0;
}
