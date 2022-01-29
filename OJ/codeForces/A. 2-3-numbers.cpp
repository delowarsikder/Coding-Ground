#include<bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main()
{
    vector<ll>two;
    vector<ll>three;

    for(int i=0; i<30; i++)
    {
        two.pb(pow(2,i));
    }
    for(int i=0; i<19; i++)
    {
        three.pb(pow(3,i));
    }

    vector<pair<pair<ll,ll>,ll>>vpl;

    for(auto to :two)
    {
        for(auto tr: three)
        {
            vpl.push_back(make_pair(make_pair(to,tr),to*tr));
        }
    }
    cout<<vpl.size()<<endl;

//    for(auto a : vpl)
//    {
//        cout<<a.second<<endl;
//    }

//    ll l,r;
//    cin>>l>>r;
//
//    ll cnt=0;
//    for(ll i=l; i<=r; i++)
//    {
//        for(auto a : vpl)
//        {
//            if(a.second==i)
//            {
//                cnt++;
//            }
//        }
//
//    }
//
//    cout<<cnt<<endl;
    return 0;
}
