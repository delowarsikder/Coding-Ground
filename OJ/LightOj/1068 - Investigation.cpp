///tle
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,a,b,k,s=0,_count=0;
    cin>>tc;
    int ncase=0;
    while(tc--)
    {
        _count=0;
        cin>>a>>b>>k;
        for(int i=a; i<=b; i++)
        {
            s=0;
            int x,n=i;
            while(n!=0)
            {
                x=n%10;
                s+=x;
                n/=10;
            }
            if(s%k==0 && i%k==0)
            {
                _count++;
            }
        }
        printf("Case %d: %d\n",++ncase,_count);
    }
    return 0;
}
