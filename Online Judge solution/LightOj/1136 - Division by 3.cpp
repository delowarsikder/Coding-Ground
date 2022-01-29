#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("input_1136.txt","r",stdin);
//    freopen("output_1136.txt","w",stdout);

    int tc;
    int _count=0,a,b,s;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        cin>>a>>b;
        printf("Case %d: ",i);
        if(a==b)
        {
            if(a%3==0 || a%3==2)
            {
                cout<<1<<endl;
                continue;
            }
            else
            {
                cout<<0<<endl;
                continue;
            }
        }

        else if(a%3==0 && b%3==0)
        {
            s=b-a;
            _count=1+(s/3)*2;
        }
        else if (a%3==0 && b%3!=0)
        {
            s=b-a;
            if(s%3==2)
            {
                _count=2+(s/3)*2;
            }
            else
            {
                _count=1+(s/3)*2;
            }
        }
        else if(a%3!=0 && b%3==0)
        {
            s=(b-a)+2;
            _count=(s/3)*2;
        }
        else
        {
            s=(b-a)+1;
            if(b%3==2)
            {
                _count=1+(s/3)*2;
            }
            else
            {
                _count=(s/3)*2;
            }

        }

        cout<<_count<<endl;
    }
    return 0;
}
