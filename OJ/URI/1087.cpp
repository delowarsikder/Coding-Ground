//accept
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int x_1,x_2,y_1,y_2;
    while(cin>>x_1>>y_1>>x_2>>y_2)
    {
        if(x_1==0&&y_1==0&&x_2==0&&y_2==0)
        {
            break;
        }
        else if((x_1==x_2) && (y_1==y_2))
        {
            cout<<0<<endl;
        }
        else if(x_1==x_2&& y_1!=y_2)
        {
            cout<<1<<endl;
        }
        else if(x_1!=x_2&& y_1==y_2)
        {
            cout<<1<<endl;
        }

        else if(abs(x_1-x_2)==abs(y_1-y_2))
        {
            cout<<1<<endl;
        }

//        else if(abs(x_1-y_1)==abs(x_2-y_2))
//        {
//            cout<<1<<endl;
//        }

        else if(x_1==x_2 || y_1==y_2)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }

    }
}
