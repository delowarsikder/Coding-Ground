#include<iostream>
using namespace std;

int main()
{
    int tc;
    static int a,b,c,d;
    freopen("input.txt","r",stdin);
    int x,y;
    cin>>tc;
    for (int i=0; i<tc; i++)
    {
        cin>>x>>y;
        if(x>0 && y>0)
        {
            a++;
        }
        else if(x<0 && y>0)
        {
            b++;
        }
        else if(x<0 && y<0)
        {
            c++;
        }
        else if(x>0 && y<0)
        {
            d++;
        }
    }

    if(a!=0 && d!=0 && c>1)
    {
        cout<<"No"<<endl;
    }

    else if(a!=0 && d!=0 && b>1)
    {
        cout<<"No"<<endl;
    }

    else if(c!=0 && b!=0 && d>1)
    {
        cout<<"No"<<endl;
    }

    else if(c!=0 && b!=0 && a>1)
    {
        cout<<"No"<<endl;
    }

    else if(a>1 && b>1)
    {
        cout<<"No"<<endl;
    }
    else if(a>1 && d>1)
    {
        cout<<"No"<<endl;
    }
    else if(b>1 && d>1)
    {
        cout<<"No"<<endl;
    }
    else if(d>1 && c>1)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
    cout<<"c :"<<c<<endl;
    cout<<"d :"<<d<<endl;
    return 0;
}
