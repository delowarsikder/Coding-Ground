#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
    float a,b,c,r1,r2,s;
    cin>>a>>b>>c;
    s=b*b-4*a*c;
    if((s<0) || (a==0))
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else
    {
        r1=(-b+sqrt(s))/(2*a);
        r2=(-b-sqrt(s))/(2*a);
        cout<<setw(5)<<setprecision(5)<<setiosflags(ios::fixed)<<"R1 = "<<r1<<endl;
        cout<<setw(5)<<setprecision(5)<<setiosflags(ios::fixed)<<"R2 = "<<r2<<endl;
    }
    return 0;
}
