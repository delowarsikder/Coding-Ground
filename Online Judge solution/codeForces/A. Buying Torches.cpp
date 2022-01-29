#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);

int main()
{

    ll x,y,k;
    ll cnt=0;
    cin>>x>>y>>k;
    ll total_sticks=k*(y+1);
    ll step_sticks=ceil((total_sticks)/log(x));
    cout<<step_sticks<<endl;


}
