#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("input_1331.txt","r",stdin);
    int tc;
    double r1,r2,r3,s,area,d,A,B,C,a,b,c,A1,B1,C1;
    cin>>tc;
    for (int i=1; i<=tc; i++)
    {
        cin>>r1>>r2>>r3;
        a=r2+r3;
        b=r1+r3;
        c=r1+r2;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        A=acos((b*b+c*c-a*a)/(2*b*c));
        B=acos((a*a+c*c-b*b)/(2*a*c));
        C=acos((b*b+a*a-c*c)/(2*b*a));
        A1=.5*A*r1*r1;
        B1=.5*B*r2*r2;
        C1=.5*C*r3*r3;
        d=area-(A1+B1+C1);
        printf("Case %d: %.10f\n",i,d);
    }
    return 0;
}
