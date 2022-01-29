#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    string stor="asdf";
    int len;
    if(s1.size()>s2.size())
    {
        cout<<"string 2"<<endl;
        for(int i=0; i<s2.size(); i++)
        {
            stor[s2[i]-'a']=s2[i];
            cout<<s2[i]-'a'<<"->"<<s2[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"string 1"<<endl;
        for(int i=0; i<s1.size(); i++)
        {
            stor[s1[i]-'a']=s1[i];
            cout<<s1[i]-'a'<<"->"<<s1[i]<<" ";
        }
        cout<<endl;
    }
    //cout<<"stor "<<stor<<endl;
    cout<<"loop end"<<endl;
        for(int i=0; i<26; i++)
        {
            if(stor[i]>='a' && stor[i]<='z')
            {
                cout<<stor[i]<<endl;
            }
        }

    return 0;
}
