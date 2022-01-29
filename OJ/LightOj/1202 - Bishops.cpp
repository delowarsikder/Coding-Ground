#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,x1,y1,x2,y2;
//    cin>>tc;
tc=GetInt();
    for(int i=1; i<=tc; i++)
    {
        int d1,d2;
        cin>>x1>>y1>>x2>>y2;
        d1=abs(x1-x2);
        d2=abs(y1-y2);
        if(d1==d2)
        {
            printf("Case %d: %d\n",i,1);
        }
        else
        {
            if((d1+d2)%2==0)
            {
                printf("Case %d: %d\n",i,2);
            }
            else
            {
                printf("Case %d: impossible\n",i);
            }

        }
    }
    return 0;
}
