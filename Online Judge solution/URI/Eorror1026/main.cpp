#include<bits/stdc++.h>
using namespace std;
#define n 32
int num1[n],num2[n],result[n];
int binary();
int decimal();
int revers();
int add();
int d1,d2,sum=0,dec;
int main()
{
    cin>>d1>>d2;
    binary();
    revers();
//    add();
//    decimal();
    cout<<"\n\nNum1 : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<num1[i]<<endl;
    }

    cout<<"\n\nNum2 : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<num2[i]<<endl;
    }
    cout<<sum<<endl;
}
int binary()
{
    int j=0,x=0;
    while(d1!=0)
    {
        x=d1%2;
        num1[j]=x;
        d1/=2;
        cout<<"j num 1: "<<j<<" "<<num1[j]<<endl;
        j++;

    }
    j=0,x=0;
    while(d2!=0)
    {
        x=d2%2;
        num2[j]=x;
        cout<<"j num 2: "<<j<<" "<<num2[j]<<endl;
        d2/=2;
        j++;

    }
}
int revers()
{
    int x=n-1,temp;
    for(int i=0; i<n/2; i++)
    {
//        cout<<"x i num 1: "<<x<<" "<<i<<" "<<num1[i]<<endl;
        temp=num1[i];
        num1[i]=num1[x];
        num1[x]=temp;

        temp=num2[i];
        num2[i]=num2[x];
        num2[x]=temp;

        cout<<"x i num 1: "<<x<<" "<<i<<" "<<num1[i]<<endl;
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
    for(int i=0; i<n; i++)
    {
        sum+=result[i]*pow(2,i);
    }
}
