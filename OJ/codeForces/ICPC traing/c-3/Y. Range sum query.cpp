#include<bits/stdc++.h>
using namespace std;
#define loop(start,end) for(int i=start;i<end;i++)
#define ll long long
#define vi vector<ll>
#define mx 1e5
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

vi tree(mx);
vi input(mx);

ll query(int idx)
{
    ll s=0;
    while(idx>0)
    {
        s+=tree[idx];
        idx-=(idx&-idx);
    }
    return s;
}

void updateTree(int idx,int n,int val)
{
    while(idx<=n)
    {
        tree[idx]+=val;
        idx+=(idx&-idx);
    }
}

void buildTree(int n)
{
    for(int i=1; i<=n; i++)
    {
        updateTree(i,n,input[i-1]);
    }
}

int main()
{
    Fast();

    ll n,q;
    cin>>n>>q;
    TEST_CASE(n)
    {
        cin>>input[i];
    }
    /*//this part print later
        print(print arra);
        loop(0,n)
        {
            cout<<input[i]<<" ";
        }
        cout<<endl;
        */
    //build tree
    buildTree(n);
    TEST_CASE(q)
    {
        ll a,b;
        cin>>a>>b;
        cout<<query(b)-query(a-1)<<endl;
    }

    return 0;
}
