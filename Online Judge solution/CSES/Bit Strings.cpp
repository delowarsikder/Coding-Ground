#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int mod=1e9+7;

int main()
{
    FastIO;
    ll n,s=1;
    cin>>n;
    while(n--){
        s=(s%mod*2%mod)%mod;
    }
    cout<<s<<endl;

    return 0;
}
