#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
vector<ll>v;

int main()
{
    FastIO;
    ll a,b;
    string s;
    cin>>a>>b>>s;
    bool flag=false;

    for(ll i=0; i<s.size(); i++)
    {
        if(i==a)
        {
            if(s[a]=='-')
            {
                flag=true;
            }
        else{
            flag=false;
            break;
        }
//            continue;
        }
        else
        {
            if(s[i]>='0' && s[i]<='9')
            {
                flag=true;
            }
            else
            {
                flag=false;
                break;
            }
        }
    }
    if(flag)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}

