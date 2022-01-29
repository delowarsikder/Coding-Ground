#include<iostream>
using namespace std;

int main()
{
    int t,h,m,s;
    cin>>t;
    m=t/60;
    h=m/60;
    m=m%60;
    t=t%60;
    s=t;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
