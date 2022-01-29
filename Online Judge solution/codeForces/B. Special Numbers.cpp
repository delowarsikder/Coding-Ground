#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll  mod=1000000007;

string decTobin(ll t)
{
    string s="";
    while(t>0)
    {
        s+=to_string(t%2);
        t=t/2;
    }
    return s;
}

int main()
{
    ll tc;
    cin>>tc;
    while(tc--){
    ll n,k;
    cin>>n>>k;

    string val= decTobin(k);
    ll sum=0;
//    cout<<"val :";
//    cout<<val<<endl;
    for(int i=0; i<val.length(); i++)
    {
//        cout<<" "<<pow(n,i)<<endl;
        if(val[i]=='1')
        {
            sum=(sum%mod+ll(pow(n,i))%mod)%mod;
        }
    }
    cout<<sum<<endl;
    }
    return 0;
}
