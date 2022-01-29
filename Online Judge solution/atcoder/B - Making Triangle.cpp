#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

bool check(ll a,ll b,ll c)
{
    if(a+b>c || a+c>b || b+c>a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    FastIO;
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll cnt=0;
    for(ll i=0; i<n; i++)
    {
        for(ll j=i+1; j<n-1; j++)
        {
//            if(arr[i]!=arr[j] && arr[j]!=arr[j+1])
//            {
                if(check(arr[i],arr[j],arr[j+1]))
                {
                    cnt++;
                }

//            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
