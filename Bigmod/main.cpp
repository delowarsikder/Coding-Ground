#include<bits/stdc++.h>
using namespace std;

#define mod 1e9+7

int modpow(int x, int n, int m)
{
    cout<<"x : "<<x<<" n : " <<n<<" m : "<<m<<endl;
    if (n == 0)
    {
        cout<<" value if n=0"<<endl;
        return 1%m;
    }
    long long u = modpow(x,n/2,m);
    cout<<"u :"<<u<<endl;
    u = (u*u)%m;
    cout<<"value u : "<<u<<endl;
    if (n%2 == 1)
    {
        cout<<"value n%2==1"<<endl;
        u = (u*x)%m;
    }
    return u;
}


int main()
{
    cout<<modpow(5,50,mod)<<endl;
    return 0;
}
