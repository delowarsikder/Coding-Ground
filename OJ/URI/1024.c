#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
//    freopen("input1024.txt","r",stdin);
//    freopen("output1024.txt","w",stdout);
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        char s[1001];
        // pay attention to the space in front of the %
        scanf(" %[^\n]s",s);
        int i,k;
        int len=strlen(s);
        int l=len/2;
        //first shift 3 position
        for(i=0; i<len; i++)
        {
            if((s[i]>='A' || s[i]>='a') && (s[i]<='Z' || s[i]<='z'))
            {
                s[i]=s[i]+3;
            }
        }
        //second revers string
        for (i=0,k=len-1; i<l; i++,k--)
        {
            int temp=s[i];
            s[i]=s[k];
            s[k]=temp;
        }

        //left shift one position
        for (i=l; i<len; i++)
        {
            s[i]=s[i]-1;
        }
        printf("%s\n",s);

    }
    return 0;
}

