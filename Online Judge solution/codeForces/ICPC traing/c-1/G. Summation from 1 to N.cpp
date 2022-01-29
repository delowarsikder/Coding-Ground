#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

    ll n;
    cin>>n;
    if(n%2)
    {
        cout<<n*((n+1)/2)<<endl;
    }
    else
    {
        cout<<(n/2)*(n+1)<<endl;
    }

    return 0;
}
