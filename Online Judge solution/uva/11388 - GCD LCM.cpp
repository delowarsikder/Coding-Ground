#include<bits/stdc++.h>
using namespace std;
#define mx 1000
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

ll gcd(ll a,ll b)
{
    if(a==0)
    {
//        cout<<b<<endl;
        return b;
    }
    return gcd(b%a,a);
}
int main()
{
    FastIO;
    ll tc;
    cin>>tc;
    while(tc--)
    {
        bool flag=false;
        ll g,l;
        cin>>g>>l;
        if(l%g==0){
            cout<<g<<" "<<l<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
