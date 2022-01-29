#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float a,sum=0,_count=0;
    while(cin>>a)
    {
        if(a>0)
        {
            _count++;
            sum+=a;
        }
    }
    sum/=_count;
    cout<<_count<<" valores positivos"<<endl;
    cout<<setw(1)<<setprecision(1)<<setiosflags(ios::fixed)<<sum<<endl;

    return 0;

}
