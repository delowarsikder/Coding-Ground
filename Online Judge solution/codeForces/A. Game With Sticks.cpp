#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,m;
    cin>>n>>m;
    ll mn=min(n,m);
    if(mn&1)
    {
        cout<<"Akshat"<<endl;
    }
    else
    {
        cout<<"Malvika"<<endl;
    }

    return 0;
}
