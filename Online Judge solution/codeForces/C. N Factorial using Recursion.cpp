#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef unsigned long long ll;

ll fact(ll n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);

}

int main()
{
    FastIO;
    ll n;
    cin>>n;
    cout<<fact(n)<<endl;;
    return 0;
}
