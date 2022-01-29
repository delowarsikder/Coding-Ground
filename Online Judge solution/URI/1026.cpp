#include<bits/stdc++.h>
using namespace std;
#define n 32
int num1[n],num2[n],result[n];
int binary();
int decimal();
int revers();
int add();
int d1,d2,sum,dec;
int main()
{
    while(scanf("%d%d",&d1,&d2)!=EOF)
    {
        cin.clear(); // clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignores bad input
        sum=0;
        binary();
        revers();
        add();
        decimal();
        cout<<sum<<endl;
    }
}
int binary()
{
    int j=0,x=0;
    while(d1!=0)
    {
        x=d1%2;
        num1[j]=x;
        d1/=2;
        j++;

    }
    j=0,x=0;
    while(d2!=0)
    {
        x=d2%2;
        num2[j]=x;
        d2/=2;
        j++;
    }
}
int revers()
{
    int x=n-1,temp=0;
    for(int i=0; i<n/2; i++)
    {
        temp=num1[i];
        num1[i]=num1[x];
        num1[x]=temp;

        temp=num2[i];
        num2[i]=num2[x];
        num2[x]=temp;
        x--;
    }

}

int add()
{
    for(int i=0; i<n; i++)
    {
        if(num1[i]==num2[i])
        {
            result[i]=0;
        }
        else
        {
            result[i]=1;
        }
    }
}

int decimal()
{
    for(int i=n-1,j=0; i>=0; i--,j++)
    {
        sum=sum+result[i]*pow(2,j);
        cout<<"Sum -> res :"<<sum<<"->"<<result[i]<<endl;
    }
}
