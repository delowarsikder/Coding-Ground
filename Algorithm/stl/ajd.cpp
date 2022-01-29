#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main()
{
    freopen("input.txt","r+",stdin);
    typedef pair<int,int>Edge;
    vector<Edge>G[100];
    int node,edge,n1,n2,w;
    cin>>node>>edge;
    for (int i=0; i<node; i++)
    {
        G[i].clear();
    }
    for (int i=0; i<edge; i++)
    {
        cin>>n1>>n2>>w;
        G[n1].push_back(Edge(n2,w));
    }
    cout<<"Adjacent list with weight "<<endl;
    for (int i=0; i<=node; i++)
    {
        cout<<"Degree :"<<i<<" "<<G[i].size()<<endl;
        for (int j=0; j<G[i].size(); j++)
        {
            cout<<G[i][j].first<<" weight :"<<G[i][j].second<<endl;
        }
    }
}
