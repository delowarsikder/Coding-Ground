#include<iostream>
#include<math.h>
using namespace std;
int main()

{
    int a,b,c,d;
    cin>>a>>b>>c;
    d=(a+b+abs(a-b))/2;
    d=(d+c+abs(c-d))/2;
    cout<<d<<"eh o maior"<<endl;
}
