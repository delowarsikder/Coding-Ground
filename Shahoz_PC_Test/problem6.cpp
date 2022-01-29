//done
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    getline(cin,line);
    stringstream ss(line);
    int val;
    string s;
    ss>>s>>val;
    int len_s=s.length();
    int space =val-len_s;
//    cout<<"space: "<<space<<endl;

    if(space<=0)
    {
        cout<<s<<endl;
        return 0;
    }
    if(space&1)
    {
        for(int i=0; i<=space/2; i++)
        {
            cout<<"_";
        }
        cout<<s;
        for(int i=0; i<space/2; i++)
        {
            cout<<"_";
        }
        cout<<endl;
    }
    else
    {
        for(int i=0; i<space/2; i++)
        {
            cout<<"_";
        }
        cout<<s;
        for(int i=0; i<space/2; i++)
        {
            cout<<"_";
        }
        cout<<endl;
    }


    return 0;
}
