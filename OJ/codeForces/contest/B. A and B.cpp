#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int a,b,tc;
    cin>>tc;
    while(tc--)
    {

        bool flag = true;
        int step=0;
        int inc=1;
        cin>>a>>b;
        cout<<" a:"<<a<<endl<<"b :"<<b<<endl;

        if(a==b)
        {
            cout<<step<<endl;
        }
        else
        {
            while(a!=b)
            {
                if(a<b)
                {
                    if(flag)
                    {
                        a=a+inc;
                        flag=false;
                    }
                    else
                    {
                        b=b+inc;
                        flag = true;
                    }

                    cout<<"a :"<<a<<endl;
                }
                else
                {
                    if(flag == false)
                    {
                        b=b+inc;
                        flag=true;
                    }
                    else
                    {
                        a=a+inc;
                        flag = false;
                    }
                    cout<<"b :"<<b<<endl;
                }
                inc++;
                step++;
            }
        }

        cout<<step<<endl;

    }

    return 0;
}
