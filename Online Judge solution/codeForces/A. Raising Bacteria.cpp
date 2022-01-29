#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
//    ll n=536870911;
    ll n=343000816;
//    cin>>n;
    ll val=log2(n);
    cout<<"val: "<<val<<endl;
    ll ans=int(pow(static_cast<double>(2),val));
    cout<<"ans :"<<n-ans<<endl;
//    if(ans==n)
//    {
//        cout<<1<<endl;
//    }
//    else
//    {
//        cout<<min(val+1,n-ans+1)<<endl;
//    }
    return 0;
}
