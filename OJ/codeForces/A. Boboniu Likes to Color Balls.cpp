#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

bool check(ll r,ll g,ll b,ll w)
{
    if((r%2+g%2+b%2+w%2)>1)
    {
        return false;
    }
    else
    {
        return true;
    }

}


int main()
{
    FastIO;
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll r,g,b,w;
        cin>>r>>g>>b>>w;
        if(check(r,g,b,w))
        {
            cout<<"YES"<<endl;
        }
        else if((r>0 && g>0 &&b>0)&& check(r-1,g-1,b-1,w+1))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
