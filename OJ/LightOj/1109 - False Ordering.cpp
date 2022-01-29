#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define n 1000
#define FastIO  ios_base::sync_with_stdio(false); cin.tie(0);
int div_count[1001];
int value[1000];
int divisor()
{

    for(int i=1; i<=n; i++)
    {
        int _count=0;
        for(int j=1; j*j<=i; j++)
        {
            if(i%j==0)
            {
                _count++;
            }
        }
        div_count[i]=_count;
        value[i]=i;
    }
    ///sort
    for(int i=2; i<=n; i++)
    {
        for(int j=2; j<n; j++)
        {
            if(div_count[j]>div_count[j+1])
            {
                int temp=value[j+1];
                value[j+1]=value[j];
                value[j]=temp;
            }
            else if(div_count[j]==div_count[j+1])
            {
                if(value[j]<value[j+1])
                {
                    int temp=value[j];
                    value[j]=value[j+1];
                    value[j+1]=temp;
                }

            }
        }
    }
}
int main()
{
    FastIO;
    memset(div_count,0,sizeof(div_count));
    divisor();
    int cases,caseno=0,x;
    cout<<"Divisor :"<<endl;
    for(int i=1;i<=1000;i++)
    {
        cout<<i<<" - "<<div_count[i]<<endl;
    }

    cin>>cases;
    while(cases--)
    {
        cin>>x;
        printf("Case %d: %d\n",++caseno,value[x]);
    }
    return 0;
}

/*
5

1

2

3

4

1000
*/
/*
Case 1: 1

Case 2: 997

Case 3: 991

Case 4: 983

Case 5: 840
*/
