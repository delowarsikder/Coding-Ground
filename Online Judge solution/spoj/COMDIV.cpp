#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
//#define pb(x) push_back(x)
#define pb(x) insert(x)
//vector<ll>div1,div2;
set<ll>div1,div2;

//store div1
int countDivisorStor1(ll n)
{
    int divisor=0;
    for(ll i=1; i*i<=n; i++)
    {
        if(i*i==n)
        {
            divisor++;
            div1.pb(i);
//            div1.pb(i*i);
        }
        else if(n%i==0)
        {
            divisor+=2;
            div1.pb(i);
            div1.pb(n/i);
        }
    }
//    cout<<divisor<<endl;
}
//store 2
int countDivisorStor2(ll n)
{
    int divisor=0;
    for(ll i=1; i*i<=n; i++)
    {
        if(i*i==n)
        {
            divisor++;
            div2.pb(i);
        }
        else if(n%i==0)
        {
            divisor+=2;
            div2.pb(i);
            div2.pb(n/i);
        }
    }
//    cout<<divisor<<endl;
}

int main()
{
    ll tc;
    cin>>tc;
//    countDivisor(tc);
    while(tc--)
    {
        div1.clear();
        div2.clear();
        ll a,b;
        cin>>a>>b;
        countDivisorStor1(a);
        countDivisorStor2(b);
        ll similar=0;
        for(auto a:div2)
        {
            if (div1.count(a))
            {
                // x is in the set, count is 1
                similar++;
            }
        }

        cout<<similar<<endl;
    }

    return 0;
}
