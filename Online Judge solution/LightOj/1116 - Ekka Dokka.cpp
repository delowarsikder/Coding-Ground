///time limit exit
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long w,temp,n,m;
    int tc;
    cin>>tc;
    for (int i=1; i<=tc; i++)
    {
        n=0;
        m=2;
        cin>>w;
        int x=log2(w);
        x=pow(2,x);
        printf("Case %d: ",i);
        if(w%2!=0 || x==w)
        {
            cout<<"Impossible"<<endl;
            continue;
        }
        else
        {
            temp=w/m;
            if(temp%2!=0)
            {
                cout<<temp<<" "<<m<<endl;
                continue;
            }
            else
            {
                while(m*temp>w || (temp%2==0 && m%2==0))
                {
                    temp--;
                    if(m*temp<w)
                    {
                        m++;
                    }
                    if((m*temp==w) &&(temp%2!=0 || m%2!=0))
                    {
                        break;
                    }
                }
            }
        }
        if(temp%2!=0)
        {
            cout<<temp<<" "<<m<<endl;
        }
        else
        {
            cout<<m<<" "<<temp<<endl;
        }
    }
    return 0;
}
