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
    ll x;
    cin>>x;
    bool flag=false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(x==arr[i][j])
            {
                cout<<"will not take number"<<endl;
                flag=true;
                return 0;
            }
            else
            {
                flag=false;
            }
        }
    }
    if(!flag)
    {
        cout<<"will take number"<<endl;
    }

    return 0;
}


