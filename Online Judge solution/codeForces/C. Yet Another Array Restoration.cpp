#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
#define pb(x) push_back(x)
typedef long long ll;

vector<ll>v;

int main()
{
    FastIO;
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n,x,y;
        cin>>n>>x>>y;
        v.pb(x);
        v.pb(y);
        ll d=(y-x);
        for(ll i=2; i<n; i++)
        {   y=y+d;
            v.pb(y);
        }
        for(ll i=0;i<n-1;i++){
            cout<<v[i]<<" ";
        }
        cout<<v[n-1]<<endl;
        v.erase(v.begin(),v.end());
    }
    return 0;
}
