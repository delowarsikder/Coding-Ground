#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("input_1311.txt","r",stdin);
//    freopen("output_1311.txt","w",stdout);
    int tc;
    double v1,v2,v3,a1,a2,t1,t2,s1,s2,d,s;
    cin>>tc;
    for (int i=1; i<=tc; i++)
    {
        cin>>v1>>v2>>v3>>a1>>a2;
        s1=(v1*v1)/(2.0*a1);
        s2=(v2*v2)/(2.0*a2);
        d=s1+s2;
        t1=v1/a1;
        t2=v2/a2;
        if(t1>t2)
        {
            s=v3*t1;
        }
        else
        {
            s=v3*t2;
        }

        printf("Case %d: %.10f %.10f\n",i,d,s);
    }
    return 0;
}
