#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int m,n,s=0;
    int arr[10][10];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                m=i;
                n=j;
            }
        }
    }
    if(m==2 &&n==2)
    {
        cout<<0<<endl;
    }
    else
    {
        s=abs(2-m)+abs(2-n);
        cout<<s<<endl;
    }

    return 0;
}
