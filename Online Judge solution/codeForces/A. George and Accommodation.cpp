#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);

int main()
{
    FastIO;
    ll n;
    cin>>n;
    ll p,q;
    ll cnt=0;
    while(n--)
    {
        cin>>p>>q;
        if((q-p)>=2)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
