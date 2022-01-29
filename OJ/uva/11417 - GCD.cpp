#include<bits/stdc++.h>
using namespace std;

#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

ll gcd(ll a,ll b)
{
    if(a==0)
    {
//        cout<<b<<endl;
        return b;
    }
    return gcd(b%a,a);
}

int main()
{
    FastIO;
    ll N;
    while(cin>>N)
    {
        if(N==0)
        {
            break;
        }
        ll  G=0;
        for(ll i=1; i<N; i++)
        {
            for(ll j=i+1; j<=N; j++)
            {
                G+=gcd(abs(i),abs(j));
            }
        }
        cout<<G<<endl;
    }
    return 0;
}

