#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

int main()
{
//    FastIO;
//    freopen("a string similarity.txt","w",stdout);
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        string w;
        ll one=0,zero=0;
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        if(one>zero)
        {
            for(int i=0; i<n; i++)
            {
                w[i]='1';
            }
        }
        else
        {
            for(ll i=0; i<n; i++)
            {
                w[i]='0';
            }
        }
        for(ll l=0; l<n; l++)
        {
            cout<<w[l];
        }
        cout<<endl;
    }
    return 0;
}
