#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin>>s;
    ll len=s.length();
    if(len==3)
    {
        s="0"+s;
    }
    else if(len==2)
    {
        s="00"+s;
    }
    else if(len==1)
    {
        s="000"+s;
    }
cout<<s<<endl;
    return 0;
}
