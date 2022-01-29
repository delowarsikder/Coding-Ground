#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r+",stdin);
    freopen("output.txt","w",stdout);

    int adjMat[100][100]= {0};
    int node,edge,node1,node2,weight;
    cout<<"Enter number of node :"<<endl;
    cin>>node;
    cout<<"Enter number of edge :"<<endl;
    cin>>edge;
    cout<<"Enter node :"<<endl;
    for (int i=0; i<edge; i++)
    {
        cin>>node1>>node2>>weight;
        adjMat[node1][node2]=weight;
    }
    cout<<"Adjacent matrix :"<<endl;
    for(int i=0; i<=node; i++)
    {
        for(int j=0; j<=node; j++)
        {
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
