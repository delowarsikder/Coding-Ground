#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n;
    while(cin>>a>>b)
    {
        int _count=0,mx=0;
        if(b>a)
        {
            for(int i=a; i<=b; i++)
            {
                n=i;
                while(n!=1)
                {
                    if(n%2==0)
                    {
                        n=n/2;
                        _count++;
                    }
                    else
                    {
                        n=3*n+1;
                        _count++;
                    }
                }
                if(mx<=_count)
                {
                    mx=_count;
                }
                _count=0;
            }
        }

        else
        {
            for(int i=b; i<=a; i++)
            {
                n=i;
                while(n!=1)
                {
                    if(n%2==0)
                    {
                        n/=2;
                        _count++;
                    }
                    else
                    {
                        n=3*n+1;
                        _count++;
                    }
                }
                if(mx<=_count)
                {
                    mx=_count;
                }
                _count=0;
            }
        }

        cout<<a<<" "<<b<<" "<<mx+1<<endl;
    }

    return 0;

}
