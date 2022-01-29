#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //upper
    for(int i=1; i<=n; i++)
    {
        for(int k=n-1; k>=i; k--)
        {
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //lower
    for(int i=n; i>=1; i--)
    {
        for(int k=i; k<n; k++)
        {
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

