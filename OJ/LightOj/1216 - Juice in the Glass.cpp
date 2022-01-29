#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    double r1,r2,h,p;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        double v=0;
        cin>>r1>>r2>>h>>p;
        r1=r2+(r1-r2)*p/h;
        v=acos(-1)*p*(r1*r1+r2*r2+r1*r2)/3;
        printf("Case %d: %.10f\n",i,v);
    }
    return 0;
}
