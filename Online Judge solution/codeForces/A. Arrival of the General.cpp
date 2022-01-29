#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll max_h=INT_MIN,min_h=INT_MAX;
    ll max_pos=0,min_pos=0;
    ll n;
    ll ans=0;
    cin>>n;
    vector<ll>arr(n);
    ll x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(max_h<x)
        {
            max_h=x;
            max_pos=i+1;
        }
        if(min_h>=x)
        {
            min_h=x;
            min_pos=i+1;
        }
    }
    if(min_pos==n && max_pos==1)
    {
        ans=0;
    }
    else if(min_pos<max_pos)
    {
        ans= (n-min_pos)+(max_pos-1)-1;
    }
    else
    {
        ans= (n-min_pos)+(max_pos-1);
    }

//    cout<<"max_h: "<<max_h<<" -> max_pos: "<<max_pos<<endl;
//    cout<<"min_h: "<<min_h<<" -> min_pos: "<<min_pos<<endl;
//    cout<<"ans : ";
    cout<<ans<<endl;
    return 0;
}
