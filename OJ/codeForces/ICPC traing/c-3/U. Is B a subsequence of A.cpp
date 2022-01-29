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
#define print(x) cout<<#x<<endl

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
    ll n1,n2;
    cin>>n1>>n2;
    vi a(n1),b(n2);
    loop(0,n1)
    {
        cin>>a[i];
    }
    loop(0,n2)
    {
        cin>>b[i];
    }

    /*print(value of a);
    loop(0,a.size()){
    cout<<a[i]<<" ";}
    cout<<endl;
    print(value of b);
    loop(0,b.size()){
    cout<<b[i]<<" ";}
    cout<<endl;
    */
    //check subsequence
    int check=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==b[check])
        {
            check++;
        }
    }
    if(b.size()==check)
    {
        print(YES);
    }
    else
    {
        print(NO);
    }

    return 0;
}
