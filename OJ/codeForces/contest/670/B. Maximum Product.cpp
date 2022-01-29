#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

int main()
{
    FastIO;
    freopen("b.txt","r",stdin);
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        ll temp;
        for(ll i=0; i<n; i++)
        {
            cin>>temp;
            v.push_back(temp);
        }
        ll s=INT_MIN;

        for(ll i=0; i<n-4; i++)
        {
            ll m=1;
            for(ll j=i; j<i+5; j++)
            {
                m=m*v[j];
            }
            if(s<=m)
            {
                s=m;
            }
        }
        cout<<s<<endl;
    }

    return 0;
}
