#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    transform(s.begin(),s.end(),s.begin(),::tolower);
    map<char,int>mp;
    for(int i=0; i<s.length(); i++)
    {
        mp[s[i]]++;
    }
    bool flag=false;
    for(auto ch ='a'; ch<='z'; ch++)
    {
        if(mp[ch])
        {
            flag=true;
        }
        else
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
