/*
input:
5 5000000
3 123456
9 23454324543423
9 99999999991999999
7 777
0 0
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    string s;
    while(cin>>d>>s)
    {
        cout<<"input d:"<<d<<"\n"<<"input s:"<<s<<endl;
        if(d==0 && s=="0")
        {
            break;
        }
        else
        {
            cout<<"else:"<<endl;
            char temp[101];
            memset(temp,'\0',sizeof(temp));
            int len=s.size();
            for(int i=0; i<len; i++)
            {
                if( (int(s[i])-48)==d)
                {
                    s[i]='0';
                }
            }
            int tempLen,k;
            for(int i=0; i<len; i++)
            {
                if(s[i]!='0')
                {
                    for(tempLen=0,k=i; k<len; k++,tempLen++)
                    {
                        temp[tempLen]=s[k];
                    }
                    break;
                }

            }
            if(tempLen!=0)
            {
                for(int j=0; j<tempLen; j++)
                {
                    cout<<temp[j];
                }
                cout<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
    }

    return 0;
}
