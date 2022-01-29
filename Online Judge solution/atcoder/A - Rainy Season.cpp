#include<bits/stdc++.h>
using namespace std;

#define FastIO ios::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

int main()
{
    FastIO;
    string s;
    cin>>s;
    ll cnt=0;
    ll _max=0;
    for(ll i=0; i<s.size(); i++)
    {
        if(s[i]=='R')
        {
            cnt++;
        }
        else
        {
            cnt=0;
        }
        _max=max(_max,cnt);
    }
    cout<<_max<<endl;
    return 0;
}
