//wrong
//4744000695826
//yes

#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
int main()
{
    FastIO;
    ll n=4744000695826;
    cin>>n; //7747774
    ll svn=0,fr=0;
    bool flag=false;
    while(n!=0)
    {
        ll x=n%10;
        n/=10;
        if(x==4 || x==7)
        {
            if(x==4)
            {
                fr++;
            }
            else
            {
                svn++;
            }
        }

    }

    ll length=fr+svn;
    flag=false;
    ll x=0;
    while(length!=0)
    {
        x=length%10;
        length/=10;
        if(x==4 || x==7)
        {
            flag=true;
            continue;

        }
        else
        {
            flag=false;
            break;
        }
    }
//        cout<<"x:"<<x<<endl;
    if(!flag)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
