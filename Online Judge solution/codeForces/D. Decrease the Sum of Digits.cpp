#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
#define pb(x) push_back(x)
typedef long long ll;

vector<ll>v;

ll countDigit(ll n)
{
    ll cnt=0;
    while(n!=0)
    {
        n=n/10;
        cnt++;
    }
    return cnt;
}

int main()
{
    ll tc;
//    ll d=countDigit(217871987498122);
//    cout<<d<<endl;
//    cout<<pow(10,d)<<endl;
//

    cin>>tc;
    while(tc--)
    {
        ll n,s;
        cin>>n>>s;
        ll digit=countDigit(n);
        cout<<"digit :"<<digit<<endl;
        if(digit==s)
        {
            cout<<0<<endl;
        }
        else
        {
            ll res=pow(10.0,float(digit));
            cout<<"res pow :"<<res<<endl;
            res=res-n;

            cout<<"res dif : "<<res<<endl;
        }

    }
    return 0;
}
