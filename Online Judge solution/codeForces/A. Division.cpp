#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    freopen("input.txt","r",stdin);
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll p,q;
        cin>>p>>q;
        if(p%q!=0)
        {
            cout<<p<<endl;
        }
        else
        {
//            ll div=p/q;
            ll i=2;
            ll ans=0;
            while(ans%q==0)
            {
                if(p%i==0)
                {
                    ans=p/i;
                }
                i++;
            }
            cout<<ans<<endl;
        }

    }
    return 0;
}
