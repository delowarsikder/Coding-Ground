#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float a,b,c,s=0;
    cin>>a>>b>>c;
    if(((a+b)>c) && ((b+c)>a) && ((c+a)>b))
    {
        s=(a+b+c);
        printf("Perimetro = %.1f\n",s);
    }
    else
    {
        s=.5*(a+b)*c;
        printf("Area = %.1f\n",s);
    }
    return 0;
}
