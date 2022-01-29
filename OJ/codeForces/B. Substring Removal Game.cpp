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
        string s;
        cin>>s;
        ll n=s.size();
        ll arr[n],k=0;

        memset(arr,0,n);
        ll j=0;
        ll step=0;
        for(ll i=0; i<s.size(); i++)
        {
            ll cnt=0;
            if(s[i]=='1')
            {
                while(s[i]=='1')
                {
                    cnt++;
                    s[i]='0';
                    i++;
                }
                arr[k]=cnt;
                k++;
            }
        }
        sort(arr,arr+k,greater<int>());
        ll sum=0;
        for(ll i=0; i<k; i++)
        {
            if(i%2==0)
            {
                sum+=arr[i];
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
