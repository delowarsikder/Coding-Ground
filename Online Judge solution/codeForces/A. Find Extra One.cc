#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    ll left=0,right=0;
    while(tc--)
    {
        ll x,y;
        cin>>x>>y;
        if(x<0)
        {
            left++;
        }
        else
        {
            right++;
        }
    }
    if(left<=1 || right<=1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
