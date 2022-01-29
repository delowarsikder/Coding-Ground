#include<bits/stdc++.h>
using namespace std;

#define RESET(a,b) memset(a,b,sizeof(a))
#define MIN(a,b) (a<b?a:b)

//increase the range
void rangeIncrease(int segTree[],int lazy[],int low,int high,int qlow,int qhigh,int pos,int val)
{
    if(low>high)
    {
        return ;
    }
    //no overlap
    if(qlow>high || qhigh<low)
    {
        return ;
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
//total overlap
    if(qlow<=low && qhigh>=high)
    {
        segTree[pos]+=val;
        if(low!=high)
        {
            lazy[2*pos+1]+=val;
            lazy[2*pos+2]+=val;
        }
        return ;
    }

    //partial overlap
    int mid=low+(high-low)/2;
    rangeIncrease(input,segTree,lazy,low,mid,qlow,qhigh,2*pos+1);
    rangeIncrease(input,segTree,lazy,mid+1,low,qlow,qhigh,2*pos+2);
    segTree[pos]=MIN(segTree[2*pos+1],segTree[2*pos+2]);
}


//construct a segment tree
void buildSegmentTree(int input [],int segTree[],int low,int high,int pos)
{
    if(low==high)
    {
        segTree[pos]=input[pos];
        return;
    }

    int mid=low+(high-low)/2;
    buildSegmentTree(input,segTree,low,mid,2*pos+1); //left child
    buildSegmentTree(input,segTree,mid+1,high,2*pos+2); //right child
    segTree[pos]=MIN(segTree[2*pos+1],segTree[2*pos+2]);
}

int main()
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    int tree[4*n];
    int lazyTree[4*n];

    RESET(arr,0);
    RESET(tree,0);
    RESET(lazyTree,0);

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int low=0,high=n-1,pos=0;
    //crate segment tree;
    buildSegmentTree(arr,tree,low,high,pos);

    while(q--)
    {
        int k,a,b,x;
        cin>>k;
        switch(k)
        {
        case 1:
            cin>>a>>b>>x;
            rangeIncrease(tree,lazyTree,low,high,a,b,low,x);
            break;
        case 2:
            break;
        case 3:
            cin>>a>>b;
            int sum=sumQuery();
            break;


        }

    }
    return 0;
}
