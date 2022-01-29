#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        string ans="";
        for(int i=0; i<str.length(); i++)
        {
            if(i>0 && i%2==0)
            {
                continue;
            }
            ans+=str[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}
