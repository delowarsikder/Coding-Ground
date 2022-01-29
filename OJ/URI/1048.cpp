#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    float s,t,r;
    cin>>s;
    if((s>=0)&&(s<=400))
    {
        r=(s*.15);
        t=s+r;
        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",r);
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if((s>400)&&(s<=800))
    {
        r=(s*.12);
        t=s+r;
        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",r);
        cout<<"Em percentual: 12 %"<<endl;
    }
    else if((s>800)&&(s<=1200))
    {
        r=(s*.1);
        t=s+r;
        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",r);
        cout<<"Em percentual: 10 %"<<endl;
    }
    else if((s>1200)&&(s<=2000))
    {
        r=(s*.07);
        t=s+r;
        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",r);
        cout<<"Em percentual: 7 %"<<endl;
    }
    else if(s>2000)
    {
        r=(s*.04);
        t=s+r;
        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",r);
        cout<<"Em percentual: 4 %"<<endl;
    }

    return 0;
}
