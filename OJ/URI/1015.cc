#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int  main()
{
    double x1,y1,x2,y2,d;
    cin>>x1>>y1>>x2>>y2;
    d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    cout<<setw(4)<<setprecision(4)<<setiosflags(ios::fixed) << d<<endl;
}
