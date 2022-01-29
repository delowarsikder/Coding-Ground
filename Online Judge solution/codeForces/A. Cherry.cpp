#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
//    freopen("input.txt","r",stdin);
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        vector<ll>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        ll ans=0;

        for(int i=0; i<n-1; i++)
        {
            ans =max(ans,arr[i]*arr[i+1]);

        }
//    cout<<"ans :";
        cout<<ans<<endl;
    }

    return 0;
}
