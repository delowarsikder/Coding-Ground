#include<bits/stdc++.h>
using namespace std;
#define loop(start,end) for(int i=start;i<end;i++)
#define ll long long
#define vi vector<int>
#define pb(x) push_back(x)
#define sc1(x) scanf("%lld",&x)
#define endl "\n"
#define DBGL(x) cerr<<__LINE__<<" "#x<<endl
#define DBG cout<<"ok done"<<endl
#define FastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define TEST_CASE(t) for(int i=0;i<t;i++)
#define all(x) x.begin(),x.end()

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
    cin>>n;
    vi a(n),b(n);

    ll t;
//take input a
    loop(0,n)
    {
        cin>>a[i];
    }
    sort(all(a));
    //take input b
    loop(0,n)
    {
        cin>>b[i];
    }

    sort(all(b));

//check

    loop(0,n)
    {
        if(a[i]!=b[i])
        {
            cout<<"no"<<endl;
            return 0;
        }

    }
    cout<<"yes"<<endl;
    return 0;
}
