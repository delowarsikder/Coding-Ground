#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define REP(i,start,end) for(ll i=start;i<=end;i++)
#define DBG cerr<<__LINE__ <<" SUCCEEDED"<<endl
#define endl "\n"
void Fast()
{
#ifndef ONLINE_JUDGE
    FastIO;
#endif // ONLINE_JUDGE
}
int main()
{
    Fast();
    string s="ABACDABA";
//    cin>>s;
    ll arr[26];
    memset(arr,0,sizeof(arr));
    for(ll i=0; i<s.size(); i++)
    {
        arr[s[i]-'A']++;
    }
    ll odd=0,even=0;
    REP(i,0,25)
    {
        if(arr[i])
        {
            cout<<arr[i]<<endl;
            if(arr[i]&1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
    }

    cout<<"No of even :"<<even<<endl;
    cout<<"No of odd :"<<odd<<endl;
    if(odd>1 (odd==1 && s.size()%2==0))
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
