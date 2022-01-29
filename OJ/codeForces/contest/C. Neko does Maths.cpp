#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,k=0;
    cin>>a>>b;
    if(a%b==0)
    {
        cout<<0<<endl;
        return 0;
    }
    else if(b%a==0)
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {
        while(b!=0 && a!=0)
        {
            b=b%a;
            if(b==0 || a==0)
            {
                break;
            }
            a=a%b;
            k=b;
        }
        k=abs(a-k);
    }
    cout<<k<<endl;
    return 0;
}
