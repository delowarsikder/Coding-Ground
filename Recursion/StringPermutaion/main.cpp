#include<bits/stdc++.h>
using namespace std;


void permulation(string s,int l,int r)
{
    if(l==r)
    {
        cout<<s<<endl;
    }
    for(int i=l; i<=r; i++)
    {
        swap(s[i],s[l]);
        // cout<<"first swap: "<<s<<endl;
        permulation(s,l+1,r);
        swap(s[i],s[l]);
    }
}

int main()
{
    string s;
    s="abc";
    permulation(s,0,s.length()-1);
    return 0;
}
