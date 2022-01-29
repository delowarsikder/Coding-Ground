#include<bits/stdc++.h>
using namespace std;

typedef long double ll;
int main()
{
    ll n,k,s,m;
    cin>>n>>k;
    ll no_odd= ceil(n/2);
//    cout<<"no of odd" <<no_odd<<endl;
    //find the even
    if(k>no_odd)
    {
        cout<<"if"<<endl;
        ll temp=k-no_odd;
        cout<<2*temp<<endl;
    }
    //find the odd
    else
    {
        cout<<"else"<<endl;
        cout<<2*k-1<<endl;
    }

    return 0;

}
