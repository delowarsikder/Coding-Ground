#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);

int main()
{
    freopen("1020.txt","r",stdin);
    FastIO;
    int tc,Case=0;
    cin>>tc;
    while(tc--)
    {
        printf("Case %d: ",++Case);
        int t;
        string n;
        cin>>t>>n;
        int a=0,b=0;

        if(n=="Alice")
        {
            a=(t/2)%2;
            if(t%2==0 && a==0)
            {
                cout<<"Alice"<<endl;
            }
            else
            {
                cout<<"Bob"<<endl;
            }

        }
        else
        {
//                cout<<"Bob"<<endl;
        }

        else
        {
            if(n=="Bob")
            {
                a=t%2;
                b=t/2;
                if(b%2==0)
                {

                }
            }
            else
            {
                cout<<"Bob"<<endl;
            }
        }
    }
    return 0;
}
