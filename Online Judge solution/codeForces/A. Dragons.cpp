#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define ss second
#define ff first
bool cmp(pair<int,int>&a,pair<int,int>&b)
{
    if(a.ff==b.ff)
    {
        return a.ss>b.ss;
    }
    else
    {
        return a.ff<b.ff;
    }

}
int main()
{
    ll s,n;
    cin>>s>>n;
    ll live=s;
    bool flag=false;
    vector<pair<int,int>>vpii;
    for(int i=0; i<n; i++)
    {
        ll x,y;
        cin>>x>>y;
        vpii.push_back(make_pair(x,y));
    }
    sort(vpii.begin(),vpii.end(),cmp);
    for(auto it : vpii)
    {
        if(live>it.ff)
        {
            live+=it.ss;
            flag=true;
        }
        else
        {
            flag =false;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
