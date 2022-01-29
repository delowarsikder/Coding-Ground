#include<stdio.h>

int main()
{

    int i,sum=0,n;
    printf("Enter value of n : \n");
    scanf("%d",&n);

    printf("1+2+3+...+n\n");
    for(i=1;i<=n;)
        {
            sum = sum + i;
            i=i+1;
        }

    printf("The Sum = %d",sum);


    return 0;
}
