#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,tc,a[101],i=0;
    cin>>tc;
    int m=tc;
    while(m--)
    {
        cin>>n;
        a[i]=n;
        i++;
    }

    for(int j=0; j<tc; j++)
    {
        for(int k=0; k<tc-1; k++)
        {
            if(a[k]>a[k+1])
            {
                int temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
    for(int i=0; i<tc; i++)
    {
        cout<<a[i]<<endl;
    }


    return 0;
}
