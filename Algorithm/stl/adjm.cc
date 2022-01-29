#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

int main()
{
    freopen("input.txt","r+",stdin);
   //vector<int>v(100);
    int v[100][100];
    int node,edge,n1,n2,w;
    cin>>node>>edge;
    for(int i=0; i<edge; i++)
    {
        cin>>n1>>n2>>w;
        v[n1][n2]=w;
    }
    for(int i=1; i<=node; i++)
    {
        for(int j=1; j<=node; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
