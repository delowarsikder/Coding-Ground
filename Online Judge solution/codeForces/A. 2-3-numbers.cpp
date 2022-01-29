#include<bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main()
{
    vector<ll>two;
    vector<ll>three;

    for(int i=0; i<=30; i++)
    {
        two.pb(pow(2,i));
    }
    for(int i=0; i<=19; i++)
    {
        three.pb(pow(3,i));
    }

    set<ll>vpl;

    for(auto to :two)
    {
        for(auto tr: three)
        {
            vpl.insert(to*tr);
        }
    }

    /*
        cout<<"size: "<<vpl.size()<<endl;
        for(auto a:vpl)
        {
            cout<<a<<endl;
        }*/

    ll l,r;
    int cnt=0;
    cin>>l>>r;
    for(auto a:vpl)
    {
        if(a>=l && a<=r)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
