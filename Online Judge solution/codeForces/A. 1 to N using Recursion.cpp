#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

int display(ll a)
{
    if(a>1)
    {
        display(a-1);
    }
    cout<<a<<endl;
}
int main()
{
    FastIO;
    ll n;
    cin>>n;
    display(n);
    return 0;
}
