#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("input1238.txt","r",stdin);
//    freopen("output1238.txt","w",stdout);
    int tc;
    cin>>tc;
    while(tc--)
    {
        char s1[101],s2[101],res[202];
//        scanf(" %s %s",s1,s2);
        cin>>s1>>s2;
        //find the length of two string
        int len1=strlen(s1);
        int len2=strlen(s2);
        int len=len1+len2;
        memset(res,'\0',sizeof(res));
        int templen;
//concatenation of two string

        if(len1>=len2)
        {
            for (int i=0,j=0; i<len1; i++)
            {
                res[j++]=s1[i];
                if(i<len2)
                {
                    res[j++]=s2[i];
                }
            }
            printf("%s\n",res);
//            printf("result :%s\nres len:%d\nlen:%d\n",res,strlen(res),len);
        }
        //length2 is greater
        else
        {
            for (int i=0,j=0; i<len2; i++)
            {
                if(i<len1)
                {
                    res[j++]=s1[i];
                    res[j++]=s2[i];
                }
                else
                {
                    res[j++]=s2[i];
                }
            }
            printf("%s\n",res);
//            printf("result :%s\nres len:%d\nlen:%d\n",res,strlen(res),len);
        }
    }

    return 0;
}

