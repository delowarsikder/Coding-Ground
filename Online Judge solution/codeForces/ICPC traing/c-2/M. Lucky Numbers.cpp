#include<bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
vector<int> v;
int main()
{
    int m,n;
    cin>>m>>n;
    int cnt=0;
    for(int i=m; i<=n; i++)
    {
        int x=i;
        bool flag=false;
        while(x!=0)
        {
            int t=x%10;
            if(t==4 || t==7)
            {
                flag=true;
            }
            else
            {
                flag=false;
                break;
            }
            x=x/10;
        }
        if(flag)
        {
            v.pb(i);
            cnt++;
        }
    }

    if(!cnt)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int i=0; i<v.size()-1; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<v[v.size()-1]<<endl;
    }
    return 0;
}

