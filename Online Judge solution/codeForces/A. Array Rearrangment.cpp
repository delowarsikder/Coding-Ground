#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n,k;
        cin>>n>>k;

        vector<ll>a(n),b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(b.begin(),b.end(),greater<int>());
        bool flag=false;
        for(int i=0; i<n; i++)
        {
            if((a[i]+b[i])<=k)
            {
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }

        if(flag)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }


    return 0;
}
