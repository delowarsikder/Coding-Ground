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
        ll a,b;
        cin>>a>>b;
        double sum=abs(a-b);
        cout<<int(ceil(sum/10))<<endl;
    }
    return 0;
}
