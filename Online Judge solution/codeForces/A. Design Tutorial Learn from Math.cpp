#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll x,y;
    if(n%2==0)
    {
        x=n/2;
        if(x&1)//odd
        {
            y=x+1;
            x=x-1;
        }
        else
        {
            y=x;
        }
        cout<<x<<" "<<y<<endl;
    }
    else
    {
        x=n-9;
        y=9;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
