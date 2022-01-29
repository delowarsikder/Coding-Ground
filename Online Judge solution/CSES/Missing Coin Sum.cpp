#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll sum=0;
    ll n;
    cin>>n;
    ll arr[n+1];
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    if(arr[0]!=1)
    {
        sum=1;
    }
    else
    {
        ll j=0;
        while((arr[j]-sum)<2 && j<n)
        {
            sum+=arr[j];
            j++;
        }
        sum=sum+1;
    }
    cout<<sum<<endl;
    return 0;
}
