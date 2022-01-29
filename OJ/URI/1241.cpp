#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("input.txt","r",stdin);
    int tc;
    while(cin>>tc)
    {
        while(tc--)
        {
            char a[1001],b[1001];
            memset(a,'\0',sizeof(a));
            memset(b,'\0',sizeof(b));
            cin>>a>>b;
            int flag=0;
            int la=strlen(a);
            int lb=strlen(b);

            if(lb>la)
            {
                cout<<"nao encaixa"<<endl;
            }
            else
            {
                for(int i=lb-1,j=la-1; i>=0; i--,j--)
                {
                    if(a[j]!=b[i])
                    {
                        flag=0;
                        break;
                    }
                    else
                    {
                        flag=1;
                        continue;
                    }
                }

                if(flag)
                {
                    cout<<"encaixa"<<endl;
                }
                else
                {
                    cout<<"nao encaixa"<<endl;
                }
            }

        }
    }

return 0;
}
