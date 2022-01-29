//direct divide with 4 not 2
//not stor sum, as formula
#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define REP(start,end) for(ll i=start;i<=end;i++)
#define DBG cerr<<__LINE__ <<" SUCCEEDED"<<endl
#define endl "\n"
void Fast(){
#ifndef ONLINE_JUDGE
    FastIO;
#endif // ONLINE_JUDGE
}
int main()
{
    Fast();
    ll n;
    cin>>n;
    set<ll>a,b;
    REP(1,n)
    {
        a.insert(i);
    }
//    DBG;
//    for(auto &x:a)
//    {
//        cout<<x<<" ";
//    }
//    cout<<endl;

    if(n*(n+1)%4==0)
    {
        cout<<"YES"<<endl;
        ll s=n*(n+1)/4;
        for(ll i=n; i>0; i--)
        {
            if(i<=s)
            {
                s-=i;
                a.erase(i);
                b.insert(i);
            }
        }
        cout<<a.size()<<endl;
        for(auto &x:a)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        cout<<b.size()<<endl;
        for(auto &x:b)
        {
            cout<<x<<" ";
        }
        cout<<endl;

    }

    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
