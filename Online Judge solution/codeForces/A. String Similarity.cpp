#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n>>s;
        string ans="";
        for(int i=0; i<s.length(); i+=2)
        {
            ans+=s[i];
        }
        cout<<ans<<endl;

    }
    return 0;
}
