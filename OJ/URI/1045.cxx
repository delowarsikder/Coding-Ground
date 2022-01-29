#include<iostream>
using namespace std;

int triangleType(double a,double b,double c);

int main()
{
    freopen("input.txt","r",stdin);
    double a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        triangleType(a,b,c);
    }
    else if(b>a && b>c)
    {
        triangleType(b,a,c);

    }
    else
    {
        triangleType(c,a,b);
    }

    return 0;
}

/*
if A ≥ B + C, write the message: NAO FORMA TRIANGULO
if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
if the three sides are the same size, write the message: TRIANGULO EQUILATERO
if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES*/

int triangleType(double a,double b,double c)
{
    if(a>=(b+c))
    {
        cout<<"NAO FORMA TRIANGULO"<<endl;
        return 0;
    }
    if(a*a==b*b+c*c)
    {
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    if(a*a>(b*b+c*c))
    {
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    if(a*a<b*b+c*c)
    {
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if(a==b && b==c)
    {
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    if(((a==b)&&(b!=c))|| ((b==c)&&(b!=a)) || ((c==a)&&(c!=b)))
    {
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
}
