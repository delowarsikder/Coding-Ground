#include <bits/stdc++.h>
using namespace std;

#define MIN(a, b) (a < b ? a : b)
#define MAX(a, b) (a > b ? a : b)

int rangeMaximumQuery(int segTree[],int lazyTree[],int low,int high,int qlow,int qhigh,int pos)
{
    if(low>high)
    {
        return INT_MIN;
    }
    if(lazyTree[pos]!=0)
    {
        segTree[pos]+=lazyTree[pos];
        if(low!=high)
        {
            lazyTree[2*pos+1]+=lazyTree[pos];
            lazyTree[2*pos+2]+=lazyTree[pos];
        }
        lazyTree[pos]=0;
    }
    if(qlow>high || qhigh<low){
        return INT_MIN;
    }
    if(qlow<=low && qhigh>=high)
    {
        return segTree[pos];
    }
    int mid=low+(high-low)/2;

    int x=rangeMaximumQuery(segTree,lazyTree,low,mid,qlow,qhigh,2*pos+1);
    int y=rangeMaximumQuery(segTree,lazyTree,mid+1,high,qlow,qhigh,2*pos+2);
    return MAX(x,y);
}


//range update
void rangeUpdateLazy(int input[], int segTree[], int lazyTree[], int low, int high, int qlow, int qhigh, int val, int pos)
{
    //no over lap
    if (qlow > high || qhigh < low)
    {
        return;
    }
    if (low > high)
    {
        return;
    }

    if (lazyTree[pos] != 0)
    {
        segTree[pos] += lazyTree[pos];
        if (low != high)
        {
            lazyTree[2 * pos + 1] += lazyTree[pos];
            lazyTree[2 * pos + 2] += lazyTree[pos];
        }
        lazyTree[pos] = 0;
    }
    //total overlap condition
    if (qlow <= low && qhigh >= high) //how is it totally overlap?
    {
        segTree[pos] += val;
        if (low != high)
        {
            lazyTree[2 * pos + 1] += val;
            lazyTree[2 * pos + 2] += val;
        }
        return;
    }
    int mid = low + (high - low) / 2;
    rangeUpdateLazy(input, segTree, lazyTree, low, high, qlow, mid, val, 2*pos+1); //left child
    rangeUpdateLazy(input, segTree, lazyTree, low, high, mid + 1, qhigh, val, 2*pos+2);
    segTree[pos] = MAX(segTree[2 * pos + 1], segTree[2 * pos + 2]);
}

//specific position update
void updatePosition(int input[], int segTree[], int low, int high, int pos, int val)
{
    //no overlap
    if (pos < low || pos > high)
    {
        return;
    }
    else if (low == high)
    {
        segTree[pos] += val; //sum val to pos location
        return;
    }
    int mid = low + (high - low) / 2;
    if (pos <= mid)
    {
        updatePosition(input, segTree, low, mid, 2 * pos + 1, val);
    }
    else
    {
        updatePosition(input, segTree, mid + 1, high, 2 * pos + 2, val);
    }
    segTree[pos] = MIN(segTree[2 * pos + 1], segTree[2 * pos + 2]); //minimum segment tree
}

//call this function (input array, treeArray , lower index, higher index, pos=lower index
//minimum segment tree
void buildSegmentTree(int input[], int segTree[], int low, int high, int pos)
{
    if (low == high)
    {
        segTree[pos] = input[low];
        return;
    }
    int mid = low + (high - low) / 2;
    buildSegmentTree(input, segTree, low, mid, 2 * pos + 1);        //left child
    buildSegmentTree(input, segTree, mid + 1, high, 2 * pos + 2);   //right right
    segTree[pos] = MIN(segTree[2 * pos + 1], segTree[2 * pos + 2]); //minimum segment tree
}

int main()
{
    freopen("inputSegTree.txt", "r", stdin);

    int n;
    cin >> n;
    int arr[n];
    int tree[4 * n];
    int LazyTree[4 * n];

    memset(tree, 0, sizeof(tree));
    memset(LazyTree, 0, sizeof(LazyTree));

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //construct segment tree

    int low = 0, high = n - 1;
    buildSegmentTree(arr, tree, low, high, 0);
    //position update using val
    /*int pos,val;
    cin>>pos>>val;
    updatePosition(arr,tree,low,high,pos,val);*/

    //update range l-r using val
    int l, r, value, root = 0;
    cin >> l >> r >> value;
    rangeUpdateLazy(arr, tree, LazyTree, low, high, l, r, value, root);

    //query from l-r
    int ql,qr;
    cin>>ql>>qr;
    int mx=rangeMaximumQuery(tree,LazyTree,low,high,ql,qr,low);

    return 0;
}
