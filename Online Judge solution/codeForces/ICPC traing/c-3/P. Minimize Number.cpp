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
    int cnt=0;
    for(ll i=0; i<n; i++)
    {
        cin>>t;
        v.push_back(t);
        if(t&1)
        {
            cout<<0<<endl;
            return 0;
        }
    }
    while(1)
    {
        bool flag=false;

        for(int i=0; i<v.size(); i++)
        {
            if(1 & v[i])
            {
                cout<<cnt<<endl;
                return 0;
            }
            else
            {
                v[i]/=2;
                flag=true;
            }
        }
        if(flag)
        {
            cnt++;
        }
    }

    return 0;
}

