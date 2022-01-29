#include<bits/stdc++.h>
using namespace std;

#define N 3
 int forwardelm(double mat[N][N+1]);
void backsub(double mat[N][N+1])
void Eleminataion(double mat[N][N+1])
{
    int singular_flag=forwardelm(mat);
    if (singular_flag!=-1)
    {
        cout<<"Singular matrix "<<endl;
        if(mat[singuar_flag][N])
        {
            cout<<"inconsistent system "<<endl;
        }
        else
        {
            cout<<"many solution "<<endl;
        }
        return ;

    }
    backsub(mat);
}
void swap_row(double mat[N][N+1],int i,int j)
{
for(int k=0;k<=N;k++)
{
    double temp=mat[i][k];
    mat[i][k]=mat[j][k];
    mat[j][k]=temp;
}
}

void print(double double mat[N][N+1])
{
    for (int i=0;i<N;i++)
    {
        for (int j=0;j<=N;j++)
        {
            printf("%lf ",mat[i][j]);
        }
        cout<<endl;
    }
}

int forwardelm(double mat[N][N+1])















