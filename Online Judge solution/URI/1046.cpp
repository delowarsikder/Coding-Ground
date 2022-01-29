#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int h1,h2,m1,m2,t1=0,t2=0;
    cin>>h1>>m1>>h2>>m2;
    if(h2>h1)
    {
        t1=h2-h1;
        if(m1<m2)
        {
            t2=m2-m1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t1,t2);
        }
        else if(m1==m2)
        {
            t2=m2-m1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t1,t2);
        }
        else
        {
            t2=60-(m1-m2);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t1-1,t2);
        }

    }
    else if(h1==h2)
    {
        t1=h1-h2;
        t2=m2-m1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t1,t2);
    }

    else
    {
        h2=h2+24;
        t1=h2-h1;
        if(m1<=m2)
        {
            t2=m2-m1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t1,t2);
        }
        else
        {
            t2=60-(m1-m2);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t1,t2);
        }
    }
    return 0;
}
