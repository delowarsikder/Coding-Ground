#include<bits/stdc++.h>
using namespace std;

#define FastIO ios::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {

        ll x1,k;
        cin>>x1>>k;
        ll x2=(x1/2)-k/(2*x1);
        cout<<x2<<endl;
    }
    return 0;
}
