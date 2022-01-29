#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,p;
    ll x;
    cin>>n>>p;
    ll fail=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x<p)
        {
            fail++;
        }
    }
    cout<<fail<<endl;
    return 0;
}
