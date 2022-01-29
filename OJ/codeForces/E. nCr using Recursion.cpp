#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
#define mx 10000
#define nl printf("\n")
typedef signed long ll;

#define loop(i,n) for(ll i=0;i<n;i++)
#define sc1(n) scanf("%lld",&n)
#define pf1(n) printf("%lld",n)


ll ncr(ll n,ll r)
{
    if (r==1)
    {
        return n;
    }
    else if(r==n)
    {
        return 1;
    }
    return ncr(n-1,r-1)+ncr(n-1,r);

}

int main()
{
    FastIO;
    ll n,r;
    cin>>n>>r;
    if(r==0)
    {
        cout<<1<<endl;
    }
    else if(n>=r)
    {
        cout<<ncr(n,r)<<endl;
    }
    else {
        cout<<0<<endl;
    }
    return 0;
}
