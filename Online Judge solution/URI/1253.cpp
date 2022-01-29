#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        int n,temp;
        cin>>s>>n;
        int len=s.size();
        for(int i=0; i<len; i++)
        {
            s[i]=s[i]-'A';
            temp=int(s[i])-n+26;
            temp=temp%26;
            s[i]=temp+'A';
        }
        cout<<s<<endl;
    }

    return 0;
}
