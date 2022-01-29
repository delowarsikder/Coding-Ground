#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;


int permutation(string a,int l,int r)
{

    if(l==r)
    {
        cout<<a<<endl;
    }
    else
    {
        for(int i=l; i<=r; i++)
        {
            swap(a[l],a[i]);
            permutation(a,l+1,r);
            swap(a[l],a[i]);
        }
    }
}

int main()
{
    FastIO;
    string s="abc";
    ll len=s.length();
    permutation(s,0,len-1);
    return 0;
}
