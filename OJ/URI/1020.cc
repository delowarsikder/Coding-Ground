#include<iostream>
using namespace std;

int main()
{
    int t,d,m,y;
    cin>>t;
    y=t/365;
    m=(t-y*365)/30;
    d=t-(y*365+m*30);
    cout<<y<<" ano(s)"<<endl;
    cout<<m<<" mes(es)"<<endl;
    cout<<d<<" dia(s)"<<endl;
    return 0;
}
