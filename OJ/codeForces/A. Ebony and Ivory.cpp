#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool flag=false;
    int a,b,c,m,n;
    cin>>a>>b>>c;
    for(int x=0; x*a<=c; x++)
    {
        if((c-a*x)%b==0)
        {
//            cout<<"Yes"<<endl;
            flag=true;
            break;
        }
    }
    if(flag)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}
