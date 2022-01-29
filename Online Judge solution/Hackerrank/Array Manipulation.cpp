#include<bits/stdc++.h>
using namespace std;

#define RESET(a,b) memset(a,b,sizeof(a))
#define MIN(a,b) (a<b?a:b)
#define MAX(a,b) (a>b?a:b)
#define SUM(a,b) (a+b)
#define MID(low,high) (low+high)/2

typedef long long ll;

ll rangeMaxQuery(ll segTree[],ll lazy[],ll low,ll high,ll qlow,ll qhigh,ll pos)
{
    //no overlap
    if(low>high)
    {
        return INT_MIN;
    }
    if(segTree[pos]!=0)
    {
        segTree[pos]+=lazy[pos];
        if(low!=high)
        {
            lazy[2*pos+1]+=lazy[pos];
            lazy[2*pos+2]+=lazy[pos];
        }
        lazy[pos]=0;
    }

    if(qlow>high || qhigh<low)
    {
        return INT_MIN;
    }

//total overlap
    if(qlow<=low && high<=qhigh)
    {
        return segTree[pos];
    }
//partial overlap
    ll mid=MID(low,high);
    ll x=rangeMaxQuery(segTree,lazy,low,mid,qlow,qhigh,2*pos+1);
    ll y=rangeMaxQuery(segTree,lazy,mid+1,high,qlow,qhigh,2*pos+2);
    return MAX(x,y);
}


void increaseRange(ll segTree[],ll lazy[],ll low,ll high,ll qlow,ll qhigh,ll pos,ll val)
{
    if(low>high)
    {
        return;
    }
    //no overlap
    if(qlow>high || qhigh<low)
    {
        return;
    }
    if(lazy[pos]!=0)
    {
        segTree[pos]+=lazy[pos];
        if(low!=high)
        {
            lazy[2*pos+1]+=lazy[pos];
            lazy[2*pos+2]+=lazy[pos];
        }
        lazy[pos]=0;
    }
    //total over lap
    if(qlow<=low && high<=qhigh)
    {
        segTree[pos]+=val;
       if(low!=high)
       {
           lazy[2*pos+1]+=val;
           lazy[2*pos+2]+=val;
       }
        return;
    }
    //partial overlap
    ll mid=MID(low,high);
    increaseRange(segTree,lazy,low,mid,qlow,qhigh,2*pos+1,val);
    increaseRange(segTree,lazy,mid+1,high,qlow,qhigh,2*pos+2,val);
    segTree[pos]=MAX(segTree[2*pos+1],segTree[2*pos+2]);
}

//construct segment tree
void constructTree(ll input[],ll segTree[],ll low,ll high,ll pos)
{
    if(low>high)
    {
        return;
    }
    if(low==high)
    {
        segTree[pos]=input[low];
        return;
    }
    ll mid=MID(low,high);
    constructTree(input,segTree,low,mid,2*pos+1);
    constructTree(input,segTree,mid+1,high,2*pos+2);
    segTree[pos]=MAX(segTree[2*pos+1],segTree[2*pos+2]);
}

int main()
{
    freopen("arraymanipulation.txt","r",stdin);
//    freopen("arraymanipulationOUT.txt","w",stdout);
    ll n,q;
    cin>>n>>q;

     // Height of segment tree
    ll _size = (ll)(ceil(log2(n)));

    // Maximum size of segment tree
    ll max_size = 2 * (ll)pow(2, _size) -1;

    ll arr[n];
    ll tree[4*n];
    ll lazyTree[4*n];

    RESET(arr,0);//input
    RESET(tree,0);
    RESET(lazyTree,0);

    ll low=0,high=n-1,pos=0;
    //construct
//    constructTree(arr,tree,low,high,pos);

    while(q--)
    {
        ll x,y,k;
        cin>>x>>y>>k;
        x=x-1;//convert 1's index to 0 index
        y=y-1;
        increaseRange(tree,lazyTree,low,high,x,y,pos,k);
    }
    ll mx=rangeMaxQuery(tree,lazyTree,low,high,low,high,pos);
    cout<<mx<<endl;
    return 0;
}
