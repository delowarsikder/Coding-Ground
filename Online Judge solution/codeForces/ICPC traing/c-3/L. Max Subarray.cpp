#include<bits/stdc++.h>
using namespace std;
#define loop(start,end) for(int i=start;i<=end;i++)
#define ll long long
#define vi vector<int>
#define pb(x) push_back(x)
#define sc1(x) scanf("%lld",&x)
#define DBG(x) cerr<<__LINE__<<" "#x<<endl
#define FastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

void Fast()
{
#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif  !ONLINEJUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}


int main()
{
    Fast();
    ll n;
    vi v,stor;
    sc1(n);
    ll t;
    loop(1,n)
    {
        sc1(t);
        v.pb(t);
    }
//    DBG(" ->input value");
    loop(0,v.size()-1)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //
    int l=0,r=0;
    int mx=INT_MIN;
    for(int i=0; i<(n*(n+1)/2); i++)
    {
        for(int j=l; j<=r; j++)
        {
            mx=max(mx,v[i])
        }
        cout<<mx<<endl;
    }


    return 0;
}
