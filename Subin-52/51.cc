#include<iostream>
#include<string>
using namespace std;

int main()
{
    string line1,line2;

    int tc;
    cin>>tc;
    while(tc--)
    {
        int m=0,s=0,flag;
        cin>>line1;
        cin>>line2;
        int k=0;
        for(int i=0; i<line1.size(); i++)
        {
            int j=0;
        flag=0;
            k=i;
            m=i;
            while(j<line2.size())
            {
                if(line1[k]!=line2[j])
                {
                    flag=0;
                    break;
                }
                else
                {
                    flag=1;
                }
                j++;
                k++;
            }
            if(flag==1)
            {
                s++;
                break;
            }
        }
        if(flag==1){
        cout<<m<<endl;}
    }
    return 0;
}

