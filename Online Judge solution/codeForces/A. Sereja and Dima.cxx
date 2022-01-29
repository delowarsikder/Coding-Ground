#include<bits/stdc++.h>
using namespace std;
int flag=0;
int main()
{
    int tc,temp,_sere=0,dima=0,j=0;
    int a[1001],i=0;

    cin>>tc;
    while(tc--)
    {
        cin>>temp;
        a[i]=temp;
        i++;
    }
    temp=i-1;
    while(j<i && temp>=0)
    {
//        cout<<"j -> temp : "<<j<<" -> "<<temp<<endl;
        if(flag==0)
        {
            if(a[j]>a[temp])
            {
                _sere+=a[j];
                a[j]=0;
                flag=1;
                j++;
            }
            else
            {
                _sere+=a[temp];
                a[temp]=0;
                flag=1;
                temp--;
            }
        }
        else
        {
            if(a[j]>a[temp])
            {
                dima+=a[j];
                a[j]=0;
                flag=0;
                j++;
            }
            else
            {
                dima+=a[temp];
                a[temp]=0;
                flag=0;
                temp--;
            }
        }
    }

    cout<<_sere<<endl<<dima<<endl;
    return 0;
}
