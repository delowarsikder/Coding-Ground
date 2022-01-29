#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a,ll b )
{
    while(b)
    {
        a=a%b;
        swap(b,a);
    }
    return a;
}
ll g=0, arr[10000];
ll a,inc=0,flag=0;
int main()
{
    freopen("input_10407.txt","r",stdin);
    freopen("output_10407.txt","w",stdout);
   while(!EOF)
   {
        while(cin>>a)
    {
        flag++;
        if(a==0)
        {
            break;
        }
        else
        {
            arr[inc++]=a;
        }
    }
    for(int i=1; i<inc; i++)
    {
        ll d=arr[i]-arr[i-1];
        g=gcd(g,d);
    }
    if(flag==1)
    {
        return 0;
    }
    if(g<0)
    {
        g*=-1;
    }
    cout<<g<<endl;
   }
    return 0;
}
