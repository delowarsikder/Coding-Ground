#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double R,r;
    int tc,n;
    cin>>tc;
    double pi=acos(-1);
    for(int i=1;i<=tc;i++)
    {
        cin>>R>>n;
        r=R*(sin(pi/n)/(1+sin(pi/n)));
        printf("Case %d: %.7f\n",i,r);
    }
return 0;
}
