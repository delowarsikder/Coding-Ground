#include<bits/stdc++.h>
using namespace std;
#define min(a,b) (a<b?a:b)
int main()
{
    string s;
//    s="abracadabra";
    cin>>s;
    int _size=s.length();

    //left shift
    string l=s;
    for(int i=0; i<_size; i++)
    {
        char temp[_size];
        for(int j=0; j<_size; j++)
        {
            temp[(j+i)%_size]=s[j];
        }
        string str="";
        for(int k=0; k<_size; k++)
        {
            str+=temp[k];
        }
        l=min(l,str);
    }

    //right shift
    string r="";
    for(int i=0; i<_size; i++)
    {
        char temp[_size];
        for(int j=0; j<_size; j++)
        {
            temp[(j+_size-i)%_size]=s[j];
        }
        string str="";
        for(int k=0; k<_size; k++)
        {
            str+=temp[k];
        }
        r=max(str,r);
    }
//    cout<<"l :"<<l<<endl;
//    cout<<"r :"<<r<<endl;
    cout<<l<<endl<<r<<endl;
    return 0;
}

