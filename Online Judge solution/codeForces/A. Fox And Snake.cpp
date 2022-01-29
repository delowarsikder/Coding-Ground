#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,m;
    cin>>n>>m;
    bool flag=true;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            for(int j=1; j<=m; j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else
        {
            if(flag)
            {
                for(int k=0; k<m-1; k++)
                {
                    cout<<".";
                }
                cout<<"#"<<endl;
            }
            else
            {
                cout<<"#";
                for(int k=0; k<m-1; k++)
                {
                    cout<<".";
                }
                cout<<endl;
            }
            flag=!flag;

        }
    }

    return 0;
}
