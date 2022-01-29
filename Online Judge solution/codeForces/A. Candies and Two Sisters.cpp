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
        if(n<=2)
        {
            cout<<0<<endl;
        }
        else
        {
            if(n&1)
            {
                cout<<n/2<<endl;
            }
            else
            {
                cout<<n/2-1<<endl;
            }
        }
    }
    return 0;
}
