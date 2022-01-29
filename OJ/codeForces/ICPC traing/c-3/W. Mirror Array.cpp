#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
vector<ll>v;

int main()
{
    FastIO;
    ll m,n;
    cin>>n>>m;
    ll arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=m-1; j>=0; j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}



