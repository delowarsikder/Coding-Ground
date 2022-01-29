#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float a,b,s=0;
    cin>>a>>b;
    s=a/b;
    cout<<setw(3)<<setprecision(3)<<setiosflags(ios::fixed) << s<<" km/l"<<endl;
}
