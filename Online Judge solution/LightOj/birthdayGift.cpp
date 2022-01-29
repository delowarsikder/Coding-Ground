#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int x1=sqrt(x);
    if(x1*x1==x && x%2==0)
    {
        cout<<"row : "<<1<<" col : "<<x1<<endl;
    }
    else if(x1*x1==x && x%2!=0)
    {
        cout<<"row : "<<x1<<" col : "<<1<<endl;
    }
    else
    {
        int x2=x-x1*x1;
        if(x1%2!=0)
        {
            if(x2<=x1)
            {
                cout<<"row:"<<x1+1<<" col:"<<x2<<endl;
            }
            else
            {
//                cout<<"row:"<<x1+1<<" col:"<<x1+1<<endl;
            }
        }

    }

    return 0;
}
