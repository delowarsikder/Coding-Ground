#include<bits/stdc++.h>
using namespace std;

#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;


void gcd(ll a,ll b)
{
    if(a==0)
    {
        cout<<b<<endl;
        return;
    }
    return gcd(b%a,a);
}
int main()
{
    FastIO;
    ll m,n;
    cin>>m>>n;
    gcd(abs(m),abs(n));
    return 0;
}
