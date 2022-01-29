#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);


typedef long long ll;

int main()
{
    ll a,b;
    cin>>a>>b;
    if(!(a%b))
    {
        cout<<"Multiples"<<endl;
    }
    else if(!(b%a)){
        cout<<"Multiples"<<endl;

    }
    else
    {
        cout<<"No Multiples"<<endl;
    }
    return 0;
}
