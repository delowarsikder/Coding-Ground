#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int tc;
    cin>>tc;
    while(tc--)
    {
        char s[101];
        scanf("%s",s);
        int len=strlen(s);
        if(len>3)
        {
            cout<<3<<endl;
        }
        ///bwo
        else
        {
            if((s[0]=='o' && s[1]=='n') ||(s[1]=='n' && s[2]=='e') || (s[0]=='o' && s[2]=='e'))
            {
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }

        }
    }

    return 0;
}
