#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    while(cin>>m>>n)
    {

        if(m<=0 || n<=0)
        {
            break;
        }

        if(m>n)
        {
            swap(m,n);
        }
        int s=0;
        for(int i=m; i<=n; i++)
        {
            s+=i;
            cout<<i<<" ";

        }
        cout<<"sum ="<<s<<endl;

    }
    return 0;
}
