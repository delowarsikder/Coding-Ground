#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
vector<ll>v;

int main()
{
    FastIO;
    ll n,t;
    cin>>n;
    string s;
    cin>>s;
    ll sum=0;
    for(ll i=0;i<s.size();i++){
        sum+=s[i]-'0';
    }
    cout<<sum<<endl;
}


