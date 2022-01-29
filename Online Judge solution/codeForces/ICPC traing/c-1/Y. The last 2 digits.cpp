#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll s=((a%100)*(b%100)*(c%100)*(d%100))%100;

    if(s<10)
    {
        cout<<"0"<<s<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
    return 0;
}
