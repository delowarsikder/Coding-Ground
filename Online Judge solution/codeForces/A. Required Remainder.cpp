#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll x,y,n;
        cin>>x>>y>>n;
        ll mod=n%x;
//        cout<<"ans: ";
        if(mod==y)
        {
            cout<<n<<endl;
        }
        else if(n<=x)
        {
            cout<<y<<endl;
        }
        else if(mod>y)
        {
            cout<<n+y-mod<<endl;
        }
        else
        {
            cout<<n+y-x-mod<<endl;
        }
    }
    return 0;
}
