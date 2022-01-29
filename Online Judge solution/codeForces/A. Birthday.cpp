#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
    ll n,m,k,l;
    cin>>n>>m>>k>>l;
    ll x = ceil((ld(k+l)/m));
    if(m*x>n)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<x<<endl;
    }
    return 0;
}
