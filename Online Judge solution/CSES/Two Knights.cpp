#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
#define sqr(x) x*x
typedef long long ll;

int main()
{
    FastIO;
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
        ll res=((i-1)*(i+4)*(sqr(i)-3*i+4)/2);
        cout<<res<<endl;
    }
    return 0;
}
