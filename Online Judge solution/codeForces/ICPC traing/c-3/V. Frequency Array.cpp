#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define FastIO ios::sync_with_stdio(0);cin.tie(0);


vector<ll>v;
#define mx 100005
int arr[mx];
int main()
{
    FastIO;
    ll n,t,m;
    memset(arr,0,sizeof(arr)/sizeof(int));
    cin>>n>>m;
    int cnt=0;
    for(ll i=0; i<n; i++)
    {
        cin>>t;
        arr[t]++;
    }
    for(int i=1;i<=m;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}


