#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define md 1000000007
#define mod(a) a%1000000007

int exponent(ll a, ll b)
{
    int ans=1;
    while(b>0)
    {
        if(b&1)
        {
            ans=mod(mod(ans)*mod(a));
        }
        b=b>>1;
        a=mod(mod(a)*mod(a));
    }
    return ans;
}

int main()
{
    ll n;
    cin>>n;
    ll a,b;
    while(n--)
    {
        cin>>a>>b;
        cout<<exponent(a,b)<<endl;
    }


    return 0;
}
