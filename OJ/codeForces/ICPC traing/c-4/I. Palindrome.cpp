#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    bool flag=false;
    for(int i=0,j=s.size()-1; i<=s.size()/2; i++,j--)
    {
        if(s[i]<'a' || s[i]>'z')
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(s[i]==s[j])
        {
            flag=true;
        }
        else
        {
            flag=false;
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
