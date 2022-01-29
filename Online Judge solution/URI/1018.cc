#include<iostream>
using namespace std;

int main()
{
    int s,m;
    cin>>m;
    cout<<m<<endl;
    s=m/100;
    m=m%100;

    cout<<s<<" nota(s) de R$ 100,00"<<endl;
    s=m/50;
    m=m%50;
    cout<<s<<" nota(s) de R$ 50,00"<<endl;

    s=m/20;
    m=m%20;

    cout<<s<<" nota(s) de R$ 20,00"<<endl;
    s=m/10;
    m=m%10;
    cout<<s<<" nota(s) de R$ 10,00"<<endl;

    s=m/5;
    m=m%5;

    cout<<s<<" nota(s) de R$ 5,00"<<endl;
    s=m/2;
    m=m%2;

    cout<<s<<" nota(s) de R$ 2,00"<<endl;
    s=m/1;
    cout<<s<<" nota(s) de R$ 1,00"<<endl;

}
