#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for (int i=1; i<=tc; i++)
    {
        int m,n,temp;
        cin>>m>>n;
        if(n>=m)
        {
            printf("Case %d: %d\n",i,19+n*4);
        }
        else
        {
            temp=m-n;
            temp*=4;
            printf("Case %d: %d\n",i,temp+19+m*4);
        }
    }
    return 0;
}
