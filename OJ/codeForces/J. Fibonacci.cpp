#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

ll fib(ll a)
{
    if(a==0)
    {
        return 0;
    }
    else if(a==1)
    {
        return 1;
    }
        return fib(a-1)+fib(a-2);
}
int main()
{
    FastIO;
    ll n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}
