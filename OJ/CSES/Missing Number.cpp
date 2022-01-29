#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

int main()
{
    FastIO;
    set<ll>s;
    set<ll>::iterator it;
    ll n;
    cin>>n;
    for(int i=0; i<n-1; i++)
    {
        ll a;
        cin>>a;
        s.insert(a);
    }

    ll mis,i;
    bool flag=false;
    for(it=s.begin(),i=1; it!=s.end(); it++,i++)
    {
        if(*it!=i)
        {
            flag=true;
            mis=i;
            break;
        }
    }

    if(flag)
    {
        cout<<mis<<endl;
    }
    else
    {
        cout<<i<<endl;
    }

    return 0;
}
