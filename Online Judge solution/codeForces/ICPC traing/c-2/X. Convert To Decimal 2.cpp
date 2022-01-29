#include<bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
typedef long long ll;
vector<int>v;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        ll x=0,cnt=0;
        while(n!=0)
        {
            if(n%2)
            {
                v.pb(1);
                cnt++;
            }
            n/=2;
        }
        ll d=0;
        for(int i=0;i<v.size();i++){
            d=d+pow(2,i);
        }
        cout<<d<<endl;
        v.erase(v.begin(),v.end());
    }
    return 0;
}
