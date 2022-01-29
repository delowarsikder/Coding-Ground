#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n,s=0,temp=0,sum=0,_count=0;
    while(cin>>n)
    {
        _count++;
        if(_count==1)
        {
            temp=n*2;
        }
        else if(_count==2)
        {
            temp=n*3;
        }
        else if(_count==3)
        {
            temp=n*4;
        }
        else if(_count==4)
        {
            temp=n*1;
        }
        else if(_count==5)
        {
            break;
        }
        sum=sum+temp;
    }
    temp=sum/(2+4+3+1);
    printf("Media: %.1f\n",temp);
    if(temp>=7)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    else if(temp<5)
    {
        cout<<"Aluno reprovado."<<endl;
    }
    else if(temp>=5 && temp<=6.9)
    {
        cout<<"Aluno em exame."<<endl;
    }

    if(_count==5)
    {
        printf("Nota do exame: %.1f\n",n);
        temp=(temp+n)/2;
        if(temp>=5)
        {
            cout<<"Aluno aprovado."<<endl;
        }
        else if(temp<=4.9)
        {
            cout<<"Aluno reprovado."<<endl;
        }
        printf("Media final: %.1f\n",temp);
    }


    return 0;
}
