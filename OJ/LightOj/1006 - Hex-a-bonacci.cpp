//ac
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(0);
#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define sc3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)
#define pf3(a,b,c) printf("%lld %lld %lld\n",a,b,c)
#define fr1(n) for(i=0;i<n;i++)
#define fr2(n) for(i=1;i<n;i++)
#define fr3(i,a,b) for(i=a;i<=b;i++)
#define mx 1000005
#define mod 10000007
#define for1(a,b) for(ll i=a; i<b; i++)
#define rev(v) reverse(v.begin(),v.end())
#define srt(v) sort(v.begin(),v.end())
#define grtsrt(v) sort(v.begin(),v.end(),greater<ll>())

ll a, b, c, d, e, f;
ll arr[10001];

int fn( int n )
{
    for (int i=0; i<=n; i++)
    {
        if( i == 0 )
        {
            arr[i]=a;
            continue;
        }
        if( i == 1 )
        {
            arr[i]=b;
            continue;
        }
        if( i== 2 )
        {
            arr[i]=c;
            continue;
        }
        if( i == 3 )
        {
            arr[i]=d;
            continue;
        }
        if( i == 4 )
        {
            arr[i]=e;
            continue;
        }
        if( i == 5 )
        {
            arr[i]=f;
            continue;
        }
        arr[i]=(arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6])%mod;
    }
    return arr[n];
}

int main()
{
    FastIO;
    memset(arr,0,sizeof(arr));
    //freopen("input_1006.txt","r",stdin);
//    freopen("output_1006.txt","w",stdout);
    int n;
    int  caseno = 0, cases;
    cin>>cases;
    while( cases-- )
    {
        cin>>a>>b>>c>>d>>e>>f>>n;
        //scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
