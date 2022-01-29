#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    for(int i=0;i<n/2+1;i++)
    {
        for(int j=i;j<n/2;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i+1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1;i<=n/2;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=n/2+1;k>=2*i+1;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }


}
