#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
#define PB push_back
typedef long long ll;

int main()
{
    FastIO;
    ll n,a,b,s=0;
    cin>>n;
    cin>>a;
    b=a;
    for(ll i=1; i<n; i++)
    {
        cin>>a;
        if(b>a)
        {
            s+=(b-a);
            continue;
        }
        b=a;
    }
    cout<<s<<endl;
    return 0;
}
