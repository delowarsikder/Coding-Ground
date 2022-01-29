#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int mnn(int x,int y)
{
    if(x<y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int a,b,c;
    int mx=0,mn=0;
    cin>>a>>b>>c;
    if(a>=b && a>=c)
    {
        mx=a;
        mn=mnn(b,c);

    }
    else if(b>=a && b>=c)
    {
        mx=b;
        mn=mnn(a,c);
    }
    else {
        mx=c;
        mn=mnn(a,b);
    }
    cout<<mn<<" "<<mx<<endl;
    return 0;
}
