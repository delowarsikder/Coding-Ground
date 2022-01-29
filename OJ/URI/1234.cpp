#include<bits/stdc++.h>
using namespace std;
int main()
{
//    char s[100];
    string s;
    while(getline(cin,s))
    {
        int flag=0;
//        int len=strlen(s);
        int len=s.size();
        for(int i=0; i<len; i++)
        {
            if((s[i]>='A' && s[i]<='Z'))
            {
                if(flag%2!=0)
                {
                    s[i]+=32;
                }
                flag++;
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                if(flag%2==0)
                {
                    s[i]-=32;
                }
                flag++;
            }


        }
        cout<<s<<endl;
//        printf("%s",s);
    }
    return 0;

}
