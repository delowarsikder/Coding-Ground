#include<bits/stdc++.h>
using namespace std;

#define FastIO ios::sync_with_stdio(0);cin.tie(0);

typedef long long ll;


int main()
{
    FastIO;

    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll temp=0;
        bool flag=false;
        for(ll i=0,j=n-1; j>=i; j--)
        {
            temp=a[i]+a[i+1];
            if(temp<=a[j])
            {
//                if(i+1<n-1)
//                {
                    cout<<i+1<<" "<<i+2<<" "<<j+1<<endl;
                    flag=true;
                    break;
//                }
            }
            else
            {
                flag=false;
            }
        }
        if(!flag)
        {
            cout<<-1<<endl;
        }

    }

    return 0;
}
