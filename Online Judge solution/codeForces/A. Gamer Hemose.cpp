#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n,h;
        cin>>n>>h;
        vector<ll>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());
        ll cnt=0;
        ll fst=arr[0],snd=arr[1];
        ll sum=fst+snd;
        ll ans=1;
        if(h<=fst)
        {
            ans=1;
        }
        else if(h<=sum)
        {
            ans=2;
        }
        else
        {
            if(h%sum==0)
            {
                ans=2*(h/sum);
            }
            else
            {
                ans=2*(h/sum);
                if(h%sum<=fst)
                {
                    ans+=1;
                }
                else
                {
                    ans+=2;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
