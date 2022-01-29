#include<iostream>
using namespace std;

int main()
{
    int n,s=0,x;
    cout<<"Enter number :"<<endl;
    cin>>n;
    while(n!=0)
    {
        s=s+n%10;
        n=n/10;
    }
    cout<<"Sum :"<<s<<endl;

    return 0;
}
