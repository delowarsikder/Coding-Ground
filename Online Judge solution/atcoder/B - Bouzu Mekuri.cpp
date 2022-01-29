#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag=false;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            if(1&i)
            {
               cout<<"Aoki"<<endl;
            }
            else
            {
                 cout<<"Takahashi"<<endl;
            }
            break;
        }
    }
    return 0;
}
