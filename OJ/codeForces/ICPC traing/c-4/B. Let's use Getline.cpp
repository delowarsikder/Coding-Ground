#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
int main()
{
    FastIO;
    string s;
    getline(cin,s);
    char ch='\\';
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]== ch )
        {
            return 0;
        }
        cout<<s[i];
    }
    return 0;
}
