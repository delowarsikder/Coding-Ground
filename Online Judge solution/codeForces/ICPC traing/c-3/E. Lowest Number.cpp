#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FastIO ios::sync_stdio(0);cin.tie(0);
vector<ll>v;

int main()
{
    ll n,t;
    cin>>n;
    ll pos,mn_val=INT_MAX;
    for(ll i=0; i<n; i++)
    {
        ll a;
        cin>>a;
        if(a<mn_val){
            mn_val=a;
            pos=i;
        }
    }

    cout<<mn_val<<" "<<pos+1<<endl;

    return 0;
}


