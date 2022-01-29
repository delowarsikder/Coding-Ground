#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll p,q;
    set<ll>level;
    cin>>p;
    ll x;
    for(int i=0; i<p; i++)
    {
        cin>>x;
        level.insert(x);
    }
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>x;
        level.insert(x);
    }
    if(level.size()==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }

    return 0;
}
