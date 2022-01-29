#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>

int main()
{
    ll n;
    cin >> n;
    vll a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // cout<<"input element "<<endl;
    // for(ll i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    sort(a.begin(), a.end());
    ll cnt = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            continue;
        }
        else
        {
            cnt++;
        }
        
    }
    cout<< cnt+1 << endl;
    return 0;
}