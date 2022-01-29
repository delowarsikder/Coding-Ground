///** After  7 hour journey 3.30 pm && 10.32 pm

#include<iostream>
using namespace std;

int main()
{
//    freopen("input_1010.txt","r",stdin);
//    freopen("output_1010.txt","w",stdout);
    int tc;
    cin>>tc;
    for (int i=1; i<=tc; i++)
    {
        int mul=0,m,n,x,y;
        float temp;
        int count_=0;
        cin>>m>>n;
        if(m==1 || n==1)
        {
            printf("Case %d: %d\n",i,m*n);
        }
        else if(m==2 && n==2)
        {
            printf("Case %d: %d\n",i,m*n);
        }
        else if(m==2)
        {
            x=n/2;
            if(x%2==0)
            {
                if(n%2==0)
                {
                    printf("Case %d: %d\n",i,x*2);
                }
                else
                {
                    printf("Case %d: %d\n",i,(x+1)*2);
                }
            }
            else
            {
                printf("Case %d: %d\n",i,(x/2+1)*4);
            }
        }
        else if(n==2)
        {
            x=m/2;
            if(x%2==0)
            {
                if(m%2==0)
                {
                    printf("Case %d: %d\n",i,x*2);
                }
                else
                {
                    printf("Case %d: %d\n",i,(x+1)*2);
                }
            }
            else
            {
                printf("Case %d: %d\n",i,(x/2+1)*4);
            }
        }
        else
        {
            mul=m*n;
            if(mul%2==0)
            {
                printf("Case %d: %d\n",i,(m*n)/2);
            }
            else
            {
                printf("Case %d: %d\n",i,(m*n)/2+1);
            }
        }
    }

    return 0;
}
