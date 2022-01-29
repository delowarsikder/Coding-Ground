#include<bits/stdc++.h>
using namespace std ;
#define n 32
int main()
{
    int h[n],a[n];
    int i=0,tc,p,q,ans=0;
    cin>>tc;
    while(tc--)
    {
        cin>>p>>q;
        h[i]=p;
        a[i]=q;
        i++;
    }
    for(int j=0;j<i;j++)
    {
        for(int k=0;k<i;k++)
        {
            if(i!=j && a[j]==h[k])
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
