#include<bits/stdc++.h>
using namespace std;

vector<int>v(100);
int main()
{
    v[0]=0;
    v[1]=1;
    for(int i=2; i<=45; i++)
    {
        v[i]=v[i-1]+v[i-2];
    }
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

