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
        vector<ll> v(n);
        ll cnt_0=0,cnt_1=0;
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            if(!v[i])
            {
                cnt_0++;
            }
        }
        cnt_1=n-cnt_0;
        if(cnt_1<=n/2)
        {
            cout<<cnt_0<<endl;
            for(ll i=0; i<cnt_0; i++)
            {
                cout<<0<<" ";
            }
        }
        else
        {
            cout<<cnt_1-cnt_1%2<<endl;
            for(ll i=0; i<cnt_1-cnt_1%2; i++)
            {
                cout<<1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
