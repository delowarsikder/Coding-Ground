#include<bits/stdc++.h>
using namespace std;

int f(int x,int *py,int **ppz)
{
    int y,z;
    **ppz+=1;
    z=**ppz;
    cout<<"z: "<<z<<endl;
    *py+=2;
    y=*py;
    cout<<"y: "<<y<<endl;
    x+=3;
    cout<<"x:"<<x<<endl;
    return x+y+z;

}

int main()
{
    int c,*b,**a;
    c=5;
    b=&c;
    a=&b;
    cout<<f(c,b,a)<<endl;
    return 0;
}
