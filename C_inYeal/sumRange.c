#include<stdio.h>
#include<stdlib.h>

int sumRange(int start,int end)
{
	int i;
	int sum;
	sum=0;
	for(i=start;i<end;i++){
		sum+=i;
	}

	return sum;
}

int main(int argc,char **argv)
{
	int start;
	int end;
	printf("value of main argument argc : %d\n",argc);
	int j=0;
	printf("value argv 0 : %s\n",argv[0]);
	printf("value argv 1 : %s\n",argv[1]);
	printf("value argv 2 : %s\n",argv[2]);

	start =atoi(argv[1]);
	end =atoi(argv[2]);
	printf("sumRange (%d ,%d )= %d\n",start,end,sumRange(start,end));
			
	return 0;
}




