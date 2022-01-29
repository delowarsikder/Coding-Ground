#include<bits/stdc++.h>
using namespace std;
int flag=0;
int main()
{
    int tc,n,crime=-1,police=1,untreat=0,officer=0,result;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        if(crime==n)
        {
            untreat++;
        }
        else
        {
            officer+=n;
            flag=1;
        }
        if(flag==1 && n==crime)
        {
            untreat--;
            officer--;
            if(officer==0)
            {
                flag=0;
            }
        }
    }
    cout<<untreat<<endl;
    return 0;
}
