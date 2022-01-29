#include<bits/stdc++.h>
using namespace std;

int d1,d2;
int b1,b2,s1,s2,x;
int bin();
int dec();
int add();
int result();
int _xor();

int main()
{
    cin>>d1>>d2;
    bin();
    cout<<s1<<endl;
}
int bin()
{
    while(d1!=0)
    {
        x=d1%2;
        s1=x+s1*10;
        d1/=2;
    }
}
