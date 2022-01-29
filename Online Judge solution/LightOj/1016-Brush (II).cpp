#include<bits/stdc++.h>
using namespace std;

#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

ll min(ll a,ll b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}


int main()
{
    FastIO;
    ll tc;
    cin>>tc;
    ll caseNo=0;
    while(tc--)
    {
        cout<<"Case "<<++caseNo<<": ";
        ll n,w;
        cin>>n>>w;
        ll mx=INT_MIN;
        ll mn=INT_MAX;
        ll x,y;
        vector<ll>y_axis;
        while(n--)
        {
            cin>>x>>y;
            y_axis.push_back(y);
        }
        sort(y_axis.begin(),y_axis.end());

        ll mov=1;
        ll currentMove=y_axis[0];
        for(int i=0; i<y_axis.size(); i++)
        {

            if(currentMove+w<y_axis[i])
            {

                mov++;
                currentMove=y_axis[i];
            }

        }
        cout<<mov<<endl;
    }
    return 0;
}
