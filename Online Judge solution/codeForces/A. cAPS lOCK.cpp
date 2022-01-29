#include<bits/stdc++.h>
using namespace std;
int main()
{
    string l;
    cin>>l;
    bool flag=false;
    int len=l.length();
    int u=0,s=0,f=0;
    if(l[0]>='a' && l[0]<='z')
    {
        flag=true;
        f=1;
    }
    for(int i=0; i<l.size(); i++)
    {
        if(l[i]>='a' && l[i]<='z')
        {
            flag=true;
            s++;
        }
        else
        {
            flag=false;
            u++;
        }
    }
    if(f==s && u!=len)
    {
//        cout<<"if section :"<<endl;
        cout<<char(l[0]-32);
        for(int i=1; i<l.size(); i++)
        {
            if(l[i]>='A' && l[i]<='Z')
            {
                l[i]=l[i]+32;
            }
            cout<<char(l[i]);
        }
        cout<<endl;
    }
    else if(u==len)
    {
//        cout<<"Else if"<<endl;
        for(int i=0; i<l.size(); i++)
        {
            cout<<char(l[i]+32);
        }
        cout<<endl;
    }
    else
    {
//        cout<<"No change: "<<l<<endl;
        cout<<l<<endl;
    }

    return 0;
}
