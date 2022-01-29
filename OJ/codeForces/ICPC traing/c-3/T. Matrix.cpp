#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<ll>v;

int main()
{
    FastIO;
    ll m,n;
    cin>>n;
    ll arr[n][n];
    ll pd=0,sd=0;
    //sum of principle diagonal

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        pd+=arr[i][i];
    }
    //sum of secondary diagonal

    for(int i=0; i<n; i++)
    {
        for(int j=n-1; j>=0; j--)
        {
            if((i+j)==n-1)
            {
                sd+=arr[i][j];
  //              cout<<" i ,j "<<i<<" "<<j<<endl;
            }
        }
    }
/*
    cout<<"Input array :"<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"pd :"<<pd<<endl;
    cout<<"sd :"<<sd<<endl;*/

cout<<abs(pd-sd)<<endl;
    return 0;
}
