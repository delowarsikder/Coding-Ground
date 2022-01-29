#include<iostream>
#include<map>
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

int main()
{
    freopen("mapin.txt","r",stdin);
    int n,r;
    string name;
    map<string,int>mp;
    // cout<<"Enter Name and marks:"<<endl;
    for (int i=0; i<5; i++)
    {
        cin>>name>>n;
        //mp.insert(pair<string,int>(name,n));
        mp[name]=n;
    }

    //mp.erase(mp.find("nice"),mp.end());
    map<string,int>::iterator it;
    map<string,int>mp2(mp.begin(),mp.end());
    cout<<"Name\t\t"<<"Mark"<<endl;
    for(int i=0;i<20;i++)
    {
        cout<<"_";
        Sleep(100);
    }
   // mp2.clear();
    cout<<endl;
    for (it=mp2.begin(); it!=mp2.end(); it++)
    {
        cout<<it->first<<"\t\t"<<it->second<<endl;
        Sleep(300);
    }

    return 0;
}
