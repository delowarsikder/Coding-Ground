#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s1,s2,s;
    cin>>s1>>s2>>s;
    s1=s1+s2;
    sort(s1.begin(),s1.end());
    sort(s.begin(),s.end());

    if(s==s1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
