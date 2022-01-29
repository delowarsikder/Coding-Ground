#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        ll x;
        ll odd=0,even=0;
        for(int i=0; i<2*n; i++)
        {
            cin>>x;
            if(x&1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }

        if(odd==even)
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
