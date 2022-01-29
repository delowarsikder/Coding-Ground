#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("input.txt","r",stdin);
    string s;
    while(getline(cin,s,'\n'))
    {
        int len=s.size();
        int flag=1;
        int u=0;
        int l=0;
        int n=0;
        if(len>=6 && len<=32)
        {
            for(int i=0; i<len; i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                {
                    u++;
                }
                else if(s[i]>='a' && s[i]<'z')
                {
                    l++;
                }
                else if(s[i]>='0' && s[i]<='9')
                {
                    n++;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(u>=1 && n>=1 && l>=1 && flag!=0)
            {
                cout<<"Senha valida."<<endl;
            }
            else
            {
                cout<<"Senha invalida."<<endl;
            }
        }
        else
        {
            cout<<"Senha invalida."<<endl;
        }
    }

    return 0;
}
