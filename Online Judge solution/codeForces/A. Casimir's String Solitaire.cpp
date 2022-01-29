#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    int tc;
    cin>>tc;
    while(tc--)
    {
        int cntA=0,cntB=0,cntC=0;
        cin>>s;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='A')
            {
                cntA++;
            }
            else if(s[i]=='B')
            {
                cntB++;
            }
            else if(s[i]=='C')
            {
                cntC++;
            }
    }

        if(cntA+cntC==cntB)
        {
            cout<<"YES"<<endl;
        }
        else if(cntC==0 &&(cntA==cntB))
        {
            cout<<"YES"<<endl;
        }
        else if(cntA==0 &&(cntC==cntB))
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
