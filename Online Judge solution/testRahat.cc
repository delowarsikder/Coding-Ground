#include<iostream>
using namespace std;
int fact(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return a*fact(a-1);
    }
}

int main()
{/*
    int ara[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    int *ptr=&ara[0][0];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++ )
        {
            printf("%d ",ara[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++ )
        {
            printf("%d ",*(*(ara+i)+j));
        }
        printf("\n");
    }

    int x;

    for(int i=0; i<9; i++)
    {
        scanf("%d",&x);
        *(ptr+i)=x;
    }

    for(int i=0; i<9; i++)
    {
        printf("%d ",*(ptr+i));
    }

    return 0;*/

    cout<<fact(5)<<endl;
    return
}
