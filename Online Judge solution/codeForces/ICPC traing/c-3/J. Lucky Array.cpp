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
    ll mn_val=INT_MAX;
    for(ll i=0; i<n; i++)
    {
        cin>>t;
        v.push_back(t);
        if(t<mn_val){
            mn_val=t;
        }
    }
    int cnt=0;
    for(ll i=0; i<v.size(); i++)
    {
        if(v[i]==mn_val){
            cnt++;
        }
    }
    if(1&cnt){
        cout<<"Lucky"<<endl;
    }
    else{
        cout<<"Unlucky"<<endl;
    }

    return 0;
}

