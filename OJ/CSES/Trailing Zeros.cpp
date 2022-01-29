#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

int main()
{
    FastIO;
    ll n;
    cin>>n;
    ll _count=0;
    for(int i=5; n/i>=1; i*=5)
    {
        _count+=n/i;
    }
    cout<<_count<<endl;
    return 0;
}
