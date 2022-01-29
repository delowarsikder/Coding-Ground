#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
//    freopen("input.txt","r",stdin);
    ll n,k;
    cin>>n>>k;
    ll p;
    vector<ll>v;
    while(n--)
    {
        cin>>p;
        v.push_back(p);
    }

    sort(v.begin(),v.end());
    int l=0;
    int r=v.size()-1;
    int cnt=0;

    while(l<=r)
    {
        if((v[l]+v[r])<=k)
        {
            l++;
        }
        r--;
        cnt++;
    }


    cout<<cnt<<endl;
    return 0;
}
