#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
#define mx 10000
#define nl printf("\n")
typedef signed long ll;

#define loop(i,n) for(ll i=0;i<n;i++)
#define sc1(n) scanf("%lld",&n)
#define pf1(n) printf("%lld",n)

void maxArray(ll a[],ll s,ll m)
{

    if(s==0)
    {
        cout<<m<<endl;
        return;
    }
    if(m<a[s-1])
    {
        m=a[s-1];
    }
    maxArray(a,s-1,m);
}

int main()
{
    FastIO;
//    freopen("arrayItem.txt","r",stdin);
    ll arr[mx];
//    memset(arr,-1,sizeof(arr)/sizeof(arr[0]));
    ll n;
    sc1(n);
    loop(i,n)
    {
        sc1(arr[i]);
    }
    maxArray(arr,n,arr[n-1]);
    return 0;
}
