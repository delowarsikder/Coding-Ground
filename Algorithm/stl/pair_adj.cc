#include<iostream>
#include<vector>
#include<utility>
#define M 100
using namespace std;

int main()
{
    freopen("input.txt","r+",stdin);
    typedef pair<int,int>Edge;
    vector<Edge>G[100];
    int node,edge,n1,n2,w;
    cin>>node>>edge;
    for(int i=0; i<node; i++)
    {
        G[i].clear();
    }
    for(int i=0; i<edge; i++)
    {
        cin>>n1>>n2>>w;
        G[n1].push_back(Edge(n2,w));
    }

    //show the graph
    for(int i=0; i<=node; i++)
    {
        cout<<"Degree of "<<i <<" "<<G[i].size()<<endl;
        //adjacent
        for (int j=0; j<(int)G[i].size(); j++)
        {
            cout<<" "<<G[i][j].first<< " ("<<G[i][j].second<<")"<<endl;
        }
        cout<<endl;
    }
    return 0;
}
