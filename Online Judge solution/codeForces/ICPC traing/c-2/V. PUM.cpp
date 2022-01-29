#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s=1,j;
    for(int i=1; i<=n; i++)
    {
        for(j=s; j<s+3; j++)
        {
            cout<<j<<" ";
        }
        cout<<"PUM"<<endl;
        s=j+1;
    }
    return 0;
}

