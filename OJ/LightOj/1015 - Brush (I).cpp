#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int t,a,sum=0;
        cin>>t;
        for(int j=1;j<=t;j++)
        {
            cin>>a;
            if(a>=0)
            {
                sum+=a;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
