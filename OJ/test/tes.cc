#include<iostream>
using namespace std;

int main()
{
    int tc,s=1,n,i;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        for ( i=1; i<=n; i++)
        {
            s=s+i;
            cout<<s<<endl;
            if (s==n)
            {
                cout<<1<<endl;
                break;
            }
        }
        if(s!=n)
        {
            cout<<0<<endl;
        }
    }
    }

