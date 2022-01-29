#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll s;
    cin>>s;
    while(s>=10)
    {
        s/=10;
    }
    if(s&1)
    {
        cout<<"ODD"<<endl;
    }
    else
    {
        cout<<"EVEN"<<endl;
    }
    return 0;
}
