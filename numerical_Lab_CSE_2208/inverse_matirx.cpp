#include<iostream>
#define N 100
using namespace std;

int main()
{
    int n;

    float a[N][N]= {0},d;
    cout<<"Enter dimension of matrix :"<<endl;
    cin>>n;
    cout<<"Enter Element of matrix :\n"<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("Enter a[%d][%d] :",i,j);
            cin>>a[i][j];
        }
    }
    cout<<"\nInsert matrix :"<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=2*n; j++)
        {
            if(j==(i+n))
            {
                a[i][j]=1;
            }
        }
    }


    for(int i=n; i>1; i--)
    {
        if(a[i-1][1]<a[i][1])
        {
            for(int j=1; j<=n*2; j++)
            {
                d=a[i][j];
                a[i][j]=a[i-1][j];
                a[i-1][j]=d;
            }
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n*2; j++)
        {
            if(j!=i)
            {
                d=a[j][i]/a[i][i];
                for(int k=1; k<=n*2; k++)
                {
                    a[j][k]-=a[i][k]*d;
                }
            }
        }
    }


    for(int i=1; i<=n; i++)
    {
        d=a[i][i];
        for(int j=1; j<=n*2; j++)
        {
            a[i][j]=a[i][j]/d;
        }
    }


    cout<<"\n\nInverse Matrix : "<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=n+1; j<=n*2; j++)
        {
            cout<<a[i][j]<<"\t";

        }
        cout<<endl;
    }
    return 0;
}

