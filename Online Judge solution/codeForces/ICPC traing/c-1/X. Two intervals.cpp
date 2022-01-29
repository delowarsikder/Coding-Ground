#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c>=a && c<=b)
    {
        if(b<=d)
        {
            cout<<c<<" "<<b<<endl;
        }
        else
        {
            cout<<c<<" "<<d<<endl;
        }
    }
    else if(a>=c && a<=d)
    {
        if(b<=d)
        {
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            cout<<a<<" "<<d<<endl;
        }
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}
