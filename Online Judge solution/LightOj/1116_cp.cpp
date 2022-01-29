///ac cp
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    cin>>tc;
    for (int i=1; i<=tc; i++)
    {
        long long w,temp,n,m=1;
        n=0;
        cin>>w;
        int x=log2(w);
        x=pow(2,x);
        printf("Case %d: ",i);
        if(w%2!=0 || x==w)
        {
            cout<<"Impossible"<<endl;
        }
        else
        {
//            temp=w/2;
//            if(temp%2!=0)
//            {
//                cout<<temp<<" "<<2<<endl;
//            }
//            else
//            {

                while(w%2==0)
                {
                    m*=2;
                    w/=2;
                }
                cout<<w<<" "<<m<<endl;
//            }
        }

    }
    return 0;
}

