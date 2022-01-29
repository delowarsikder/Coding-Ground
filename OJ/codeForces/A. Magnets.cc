#include<bits/stdc++.h>
using namespace std;
#define inf 99
int group=0;
int flag=inf;
int x=0,temp;
char c;
int main()
{
    int tc;
    string ch;
    cin>>tc;
    cin>>ch;
    c=ch[0];
    group++;
    while(--tc)
    {
        cin>>ch;
        if(ch[0]==c)
        {
            continue;
        }
        else
        {
            c=ch[0];
            group++;
        }
    }
    cout<<group<<endl;
    return 0;
}

