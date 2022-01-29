#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    ll sum=0;
    ll track=0,cnt=0;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
        while(sum>x)
        {
            sum-=v[track++];
        }
        if(sum==x)
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;
    return 0;
}
