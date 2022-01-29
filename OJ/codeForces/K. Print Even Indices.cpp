#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

void evenIndices(ll a[],ll n)
{
    if(n>0)
    {
        if(n%2==0)
        {
            cout<<a[n]<<" ";
        }
    }
    else if(n==0){
        cout<<a[n]<<endl;
        return;
    }
    return evenIndices(a,n-1);
}
int main()
{
    FastIO;
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    evenIndices(a,n-1);
    return 0;
}
