#include<stdio.h>
#include<stdlib.h>

//int add(int,int);
int main()
{
    int arr[10][10];
    int *ptr;

    printf("Enter a matrix\n");

    for (int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    ptr=arr[0][0];
    *(*(arr+2)+1)=2;

    printf("Print a array \n");

    for (int i=0; i<4; i++)
    {
        printf("%d  ",*(ptr+i));
           printf("\n");
    }
}
