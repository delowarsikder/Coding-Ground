#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
#define pb(x) push_back(x)

typedef long long ll;

int main()
{
    FastIO;
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        while(n--)
        {
            ll temp;
            cin>>temp;
            v.pb(temp);
        }
        v.erase(v.begin(),v.end());
    }
    return 0;
}
