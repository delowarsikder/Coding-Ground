#include<bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <algorithm>

using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        ll mn=INT_MAX;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());

        for(int i=0; i<n-1; i++)
        {
            ll val=arr[i]-arr[i+1];
            mn=min(mn,val);
        }

        cout<<mn<<endl;
    }
    return 0;
}
