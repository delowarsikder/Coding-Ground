#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

void display(ll i,ll a)
{
    if(a<=0)
    {
        return;
    }
    if(i>1){
    cout<<a<<" ";
    }
    else{
        cout<<a<<endl;
    }

    display(i-1,a-1);
}

int main()
{
    FastIO;
    ll n;
    cin>>n;
    display(n,n);
    return 0;
}
