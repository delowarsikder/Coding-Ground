#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float m,n,temp;
    int s,sample;
    cin>>m;
    //m=n;
//    temp=100*n-m*100;
//    cout<<"float n:"<<n<<endl;
//    cout<<"int m:"<<m<<endl;
//    cout<<"temp upper :"<<temp/100<<endl;
    s=m/100;
    m=m-s*100;
    cout<<"NOTAS:"<<endl;
    cout<<s<<" nota(s) de R$ 100,00"<<endl;
    s=m/50;
    m=m-s*50;
    cout<<s<<" nota(s) de R$ 50,00"<<endl;

    s=m/20;
    m=m-s*20;

    cout<<s<<" nota(s) de R$ 20,00"<<endl;

    s=m/10;
    m=m-s*10;
    cout<<s<<" nota(s) de R$ 10,00"<<endl;

    s=m/5;
    m=m-s*5;

    cout<<s<<" nota(s) de R$ 5,00"<<endl;
    s=m/2;
    m=m-s*2;
    cout<<s<<" nota(s) de R$ 2,00"<<endl;

    cout<<"MOEDAS:"<<endl;
    s=m/1;
    m=m-s*1;
    cout<<s<<" moeda(s) de R$ 1.00"<<endl;

    sample=temp/.5;
    temp=temp-sample*.5;
    cout<<sample<<" moeda(s) de R$ 0.50"<<endl;


    sample=temp/.25;
    temp=temp-sample*.25;
    cout<<sample<<" moeda(s) de R$ 0.25"<<endl;


    sample=temp/.10;
    temp=temp-sample*.10;
    cout<<sample<<" moeda(s) de R$ 0.10"<<endl;


    sample=temp/.05;
    temp=temp-sample*.05;
    cout<<sample<<" moeda(s) de R$ 0.05"<<endl;

    sample=temp/.01;
    temp=temp-sample*.01;
    cout<<"temp :"<<temp<<endl;
    cout<<sample<<" moeda(s) de R$ 0.01"<<endl;

    return 0;

}

