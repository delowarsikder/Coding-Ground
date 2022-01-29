#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, k;
    cin >> n>>k;
    vector<ll> arr;
    while (n--)
    {
        ll temp;
        cin >> temp;
        arr.push_back(temp);
    }
    map<ll,ll>mp;
    for(int i=0; i<arr.size(); i++)
    {
        mp[arr[i]]++;
    }
    int cnt=0;
    for(auto m=mp.begin(); m!=mp.end(); m++)
    {
        if((m->second)<=k)
        {
            cnt+=m->second;
        }
        else
        {
            cnt+=k;
        }
    }

    cout<<cnt*(cnt+1)/2<<endl;


    return 0;
}
