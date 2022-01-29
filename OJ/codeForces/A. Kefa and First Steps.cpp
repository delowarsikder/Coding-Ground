#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll k,n,w;
    vector<int>v;
    cin>>n;
    ll a=1,d=1;
    ll arr[n];
    cin>>arr[0];
    for(int i=1; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>=arr[i-1])
        {
            d++;
            v.push_back(a);
            a=0;
        }
        else
        {
            a++;
            v.push_back(d);
            d=0;
        }
    }
    v.push_back(d);
    v.push_back(a);
    sort(v.begin(),v.end(),greater<int>());
    cout<<v[0]<<endl;
    return 0;
}

