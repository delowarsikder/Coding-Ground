#include<bits/stdc++.h>
using namespace std;

bool checkPalinDrom(string str,int init,int en)
{
    if(init>=en)
    {
        return true;
    }
    if(str[init]!=str[en])
    {
        return false;
    }
    return checkPalinDrom(str,++init,--en);
}


int main()
{
    string s;
    cin>>s;
    bool f=checkPalinDrom(s,0,s.length()-1);
    if(f)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
