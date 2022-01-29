#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
#define MOD 1000000007

int main()
{
    ll n,m;
    cin>>n>>m;
    cout<<((n%MOD)*(m%MOD))%MOD<<endl;
    return 0;
}
