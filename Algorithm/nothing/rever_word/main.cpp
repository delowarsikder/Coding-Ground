#include<iostream>
#include<string>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        char l[1001];
        scanf(" %[^\n]",l);
        char c;
        int p,m=0,n=0;
        for (int i=0; l[i]!='\0'; i++)
        {
            if (l[i]==' ' || l[i+1]=='\0')
            {
                if(l[i+1]=='\0')
                {
                    p=i;
                }
                else
                {
                    p=i-1;
                }

                m=i+1;
                while(p>=n)
                {
                    c=l[p];
                    l[p]=l[n];
                    l[n]=c;
                    p--;
                    n++;
                }
                n=m;
            }

        }
        cout<<l<<endl;
    }
}
