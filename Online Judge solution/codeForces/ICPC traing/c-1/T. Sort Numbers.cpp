#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if(a>=b && a>=c)
    {
        if(b>c)
        {
            cout<<c<<endl<<b<<endl<<a<<endl;
        }
        else
        {
            cout<<b<<endl<<c<<endl<<a<<endl;
        }
    }
    else if(b>=a && b>=c){
        if(a>c){
            cout<<c<<endl<<a<<endl<<b<<endl;
        }
        else{
            cout<<a<<endl<<c<<endl<<b<<endl;
        }
    }
    else{
        if(a>b){
            cout<<b<<endl<<a<<endl<<c<<endl;
        }
        else{
            cout<<a<<endl<<b<<endl<<c<<endl;
        }
    }
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}
