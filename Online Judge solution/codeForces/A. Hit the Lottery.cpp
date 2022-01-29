#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll note=0;
    if(n%100>=0)
    {
        note+=n/100;
        n=n%100;
    }
    if(n%20>=0)
    {
        note+=n/20;
        n=n%20;
    }
    if(n%10>=0)
    {
        note+=n/10;
        n=n%10;
    }
    if(n%5>=0)
    {
        note+=n/5+n%5;
    }

    cout<<note<<endl;
    return 0;
}
