#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

int main()
{
    FastIO;
    ll n;
    cin>>n;
    ll sum=0;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end(),greater<int>());
    ll sum2=0,coin=0;
    for(int i=0; i<arr.size(); i++)
    {
        if(sum2>sum/2)
        {
            break;
        }
        else
        {
            sum2+=arr[i];
            coin++;
        }
    }
    cout<<coin<<endl;

    return 0;
}
