#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v(100);
int main()
{
    v[0]=1;
    for(ll i=1; i<=20; i++)
    {
        v[i]=v[i-1]*i;
    }
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        cout<<v[n]<<endl;
    }
    return 0;
}

