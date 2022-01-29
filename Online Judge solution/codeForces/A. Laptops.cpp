#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ff first
#define ss second

int main()
{
    ll n;
    cin>>n;
    vector<pair<int,int>>vp(n);
    bool flag=false;
    for(int i=0; i<n; i++)
    {
       cin>>vp[i].ff>>vp[i].ss;
    }

    sort(vp.begin(),vp.end());

    for(int i=0; i<n-1; i++)
    {
        if(vp[i].ss>vp[i+1].ss){
            flag=true;
            break;
        }
    }
    if(flag)
    {
        cout<<"Happy Alex"<<endl;
    }
    else
    {
        cout<<"Poor Alex"<<endl;
    }

    return 0;
}
