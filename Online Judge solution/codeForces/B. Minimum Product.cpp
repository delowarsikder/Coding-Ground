#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;


int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        ll p=a*b;
        while(n--){
            ll p1,p2;
            p1=(a-n+x)*b;
            p2=(b-n+y)*a;
            if(p2<p1){
                p1=p2;
            }

        }
    }
    return 0;
}
