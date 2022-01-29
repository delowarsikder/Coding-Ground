#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

#define pf2(a,b) printf("%lld %lld\n",a,b);
#define pf3(a,b,c) printf("%lld %lld %lld\n",a,b,c);

int main()
{
    FastIO;
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        string str;
        cin>>str;
        ll a[n+1];
        for(ll i=1; i<=n; i++)
        {
            a[i]=str[i-1]-'0';
            a[i]+=a[i];
        }
        //check good array
        ll cnt=0;
        for(ll i=1; i<=n; i++)
        {
            ll s=0;
            for(ll j=i; j<=n; j++)
            {
                s=s+a[j];
                if(s==j-i+1)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;

    }

    return 0;
}

