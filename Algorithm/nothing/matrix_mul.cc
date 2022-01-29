#include<iostream>
using namespace std ;

int main()
{
    int a[100][10],b[10][10],c[10][10];
    int n;
    cout<<"Enter the number of dimention "<<endl;
    cin>>n;
//    cout<<"Enter element :"<<endl;
    for (int  i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            a[i][j]=i;
        }
    }
    cout<<"a element :"<<endl;
    for (int  i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"b element :"<<endl;
    for (int  i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int  i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            b[i][j]=i;
        }
    }
    for (int  i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            c[i][j]=0;
        }
    }
    cout<<"Multiplication :"<<endl;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            for (int k=0; k<n; k++)
            {
                c[j][i]+=a[j][k]*b[k][j];
            }
        }
    }
    for (int  i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}
