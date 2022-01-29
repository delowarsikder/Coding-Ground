#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    ll sum=INT_MIN;
    ll best=INT_MIN;
    for(int i=0; i<n; i++)
    {
        sum=max(arr[i],sum+arr[i]);
        best=max(sum,best);
//        cout<<"step-"<<i<<endl;
//        cout<<"sum :"<<sum<<endl;
//        cout<<"best:"<<best<<endl;
    }
    cout<<best<<endl;
    return 0;
}
