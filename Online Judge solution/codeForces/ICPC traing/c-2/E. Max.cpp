#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll n;
    cin>>n;
    ll m;
    ll mx=INT_MIN;
    for(ll i=0; i<n; i++)
    {
        cin>>m;
        if(mx<=m)
        {
            mx=m;
        }

    }
    cout<<mx<<endl;
    return 0;
}


