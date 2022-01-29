/*#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2 || n==3)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
//        cout<< fib(n-1)+fib(n-2)<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;
    cout<<fib(n)<<endl;
}*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;
    cout<<"Fibonacci series :"<<endl;
    int a=0,b=1,c,i=0;
    while(i<=n)
    {
        if(i==0)
        {
            cout<<a<<" ";
        }
        else if (i==1)
        {
            cout<<b<<" ";
        }
        else
        {
            c=a+b;
            a=b;
            b=c;
            cout<<c<<" ";
        }

        i++;
    }

    return 0;
}









