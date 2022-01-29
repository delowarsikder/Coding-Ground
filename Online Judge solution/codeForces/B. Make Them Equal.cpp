#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    int a[1001];
    int sum=0,avg,temp;
    int n;
    for(int i=0;i<tc;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    avg=sum/tc;
   sort(a,a+tc);
   temp=a[tc-1];
    for(int i=0;i<tc;i++)
    {
        sum=a[i]+avg;
        if(sum>temp)
        {
            sum-=avg;
        }

    }

}
