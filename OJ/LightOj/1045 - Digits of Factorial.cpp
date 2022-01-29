
//
//int digitCount(int n,int b)
//{
//    double x=0;
//    double lbase=1/log10(b);
//    for(int j=1; j<=n; j++)
//    {
//        //x+=log10(j)/log0(b);
//        x+=log10(j);
//    }
//    x*=lbase;
//    int res=x+1+esp;
//    return res;
//}

#include<bits/stdc++.h>
using namespace std;

double eps=pow(10,-9);
double a[1000005]= {0};
int main()
{
    for(int i=1; i<=1000000; i++)
    {
        a[i]=a[i-1]+log10(i);
    }
    int b,n,tc;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        long long _total=0;
        cin>>n>>b;
        double x=1/log10(b);
        _total=x*a[n]+1+eps;
        printf("Case %d: %lld\n",i,_total);
    }
    return 0;
}
