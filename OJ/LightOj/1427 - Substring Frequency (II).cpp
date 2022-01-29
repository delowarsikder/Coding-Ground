#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);//cin.tie(0);
typedef long long ll;
int main()
{
    FastIO;
//    freopen("1427.txt","r",stdin);
//    freopen("1427out.txt","w",stdout);
    ll tc,_case=0;
    cin>>tc;
    while(tc--)
    {

        ll n;
        cin>>n;
        string s;
        cin>>s;
        printf("Case %lld:\n",++_case);
        while(n--)
        {
            string s1;
            cin>>s1;
            bool flag=false;
            ll res=0;
            //find the number of substring
            for(ll i=0; i<=s.length()-s1.length(); i++)
            {
//                int k=i;
                for(ll j=0; j<s1.length(); j++)
                {
                    if(s[i+j]==s1[j])
                    {
                        flag=true;
                    }
                    else
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                {
                    res++;
                }
            }
            cout<<res<<endl;
        }
    }
    return 0;
}
