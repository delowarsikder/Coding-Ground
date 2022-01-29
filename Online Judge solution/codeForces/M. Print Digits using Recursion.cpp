#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

void digit(ll x)
{
    if(x<0){
        x=-1*x;
    }
    if(x/10>0){
        digit(x/10);
    }
    cout<<x%10<<" ";

}

int main()
{
    FastIO;
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
    cin>>n;

    digit(n);
    }
    return 0;
}
