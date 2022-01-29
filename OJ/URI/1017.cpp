#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float s,t,d=0;
    cin>>t>>s;
    d=(s*t)/12;
    cout<<setw(3)<<setprecision(3)<<setiosflags(ios::fixed) << d<<endl;
    return 0;
}
