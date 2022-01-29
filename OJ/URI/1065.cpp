#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,sum=0,_count=0;
    while(cin>>a)
    {
        if(a%2==0)
        {
            _count++;
        }
    }
    cout<<setw(1)<<setprecision(1)<<setiosflags(ios::fixed)<<_count<<" valores pares"<<endl;

    return 0;

}

