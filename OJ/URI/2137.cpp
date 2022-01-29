#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    while(cin>>tc)
    {
        string s[1001];
        //read input
        for(int i=0; i<tc; i++)
        {
            cin>>s[i];
        }
        //sort the string
        for(int i=0; i<tc; i++)
        {
            for (int j=0; j<tc-1; j++)
            {
                if(s[j]>s[j+1])
                {
                    string temp=s[j+1];
                    s[j+1]=s[j];
                    s[j]=temp;
                }
            }
        }
        //print sort input
        for(int i=0; i<tc; i++)
        {
            cout<<s[i]<<endl;
        }

    }
    return 0;
}
