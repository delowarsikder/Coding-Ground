#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{

    ll n,a,x,y;
    cin>>n>>a>>x>>y;
    ll rest=0;
    if(n>=a)
    {
        rest=n-a;
    }
    else
    {
        a=n;
    }

    cout<<x*a+rest*y<<endl;

    return 0;
}
