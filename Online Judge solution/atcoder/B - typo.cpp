#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    s="aabb";
    t="bbaa";
    cin>>s>>t;
    int diag=0;
    bool flag=false;
    int mismat=0;
    if(s==t)
    {
        cout<<"YES"<<endl;
    }
    else
    {

        for(int i =0; i<s.length(); i++)
        {
            if(s[i]!=t[i])
            {
                mismat++;
            }
            if(s[i]==t[i+1]&& t[i]==s[i+1])
            {
                diag++;
            }
        }
    }
    if()

    return 0;
}
