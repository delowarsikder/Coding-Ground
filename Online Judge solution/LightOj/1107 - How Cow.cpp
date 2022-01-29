#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2,x,y;
    int tc,m;
    cin>>tc;
    for (int i=1;i<=tc;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        cin>>m;
        printf("Case %d:\n",i);
        for(int j=1;j<=m;j++)
        {
            cin>>x>>y;
            if((x>=x1 && x<=x2) &&(y>=y1 && y<=y2))
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
