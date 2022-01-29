#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
//    string s="BAXBABAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXBAXB";
    string s="BACFAB";
    cin>>s;
    ll ab_first=-1;
    bool ab_exist=false;
    ll ba_second=-1;
    bool ba_exist=false;

//step -1; AB->BA
    for(int i=0; i<s.length(); i++)
    {
        if(!ab_exist)
        {
            if(s[i]=='A' && s[i+1]=='B')
            {
                ab_exist=true;
                i++;
            }
        }
        else
        {
            if(s[i]=='B' && s[i+1]=='A')
            {
                ba_exist=true;
                break;
            }
        }
    }

//step -2 BA->AB
    if(ab_exist && ba_exist)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        ab_exist=false;
        ba_exist=false;

        for(int i=0; i<s.length(); i++)
        {
            if(!ba_exist)
            {
                if(s[i]=='B' && s[i+1]=='A')
                {
                    ba_exist=true;
                    i++;
                }
            }
            else
            {
                if(s[i]=='A' && s[i+1]=='B')
                {
                    ab_exist=true;
                    break;
                }
            }
        }

        if(ab_exist && ba_exist)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }




    return 0;
}
