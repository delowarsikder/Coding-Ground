#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("ouput.txt","w",stdout);

    int adjMat[10][10]={0};
    int node,edge,node1,node2,weight;
    cout<<"Enter number of Node :"<<endl;
    cin>>node;
    cout<<"Enter the number edge :"<<endl;
    cin>>edge;
    cout<<"Enter node :"<<endl;
    for(int i=0; i<edge; i++)
    {
        cin>>node1>>node1;//>>weight;
        adjMat[node1][node2] = 1;//weight;
    }
    cout<<"insert node is "<<endl;
    for(int i=0; i<edge; i++)
    {
        for (int j=0; j<edge; j++)
        {
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
