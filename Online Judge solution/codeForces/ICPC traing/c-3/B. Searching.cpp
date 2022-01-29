#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FastIO ios::sync_stdio(0);cin.tie(0);
vector<ll>v;

int main()
{
    ll n;
    ll s=0,t;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>t;
        v.push_back(t);
    }
    cin>>s;
    bool flag=false;
    for(ll i=0;i<n;i++){
        if(v[i]==s){
            cout<<i<<endl;
            flag=true;
            break;
        }
    }
    if(!flag){
        cout<<-1<<endl;
    }
    return 0;
}

