#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three number :"<<endl;
    cin>>a>>b>>c;
    if (a>b)///l-1
    {
        if(a>c)///l-2
        {
            cout<<"max-1:"<<a<<endl;
            if (b>c)///l-3
            {
                cout<<"max-2:"<<b<<endl;
            }
            else
            {
                cout<<"max-2:"<<c<<endl;
            }
        }
        else
        {
            cout<<"max-1 :"<<c<<endl;
            cout<<"max-2:"<<a<<endl;
        }
    }
    else
    {
        if(b>c)///l-4
        {
            cout<<"max-1:"<<b<<endl;
            if (a>c)///l-5
            {
                cout<<"max-2:"<<a<<endl;
            }
            else
            {
                cout<<"max-2:"<<c<<endl;
            }
        }
        else
        {
            cout<<"max-1:"<<c<<endl;
            cout<<"max-2:"<<b<<endl;
        }
    }

    return 0;
}
