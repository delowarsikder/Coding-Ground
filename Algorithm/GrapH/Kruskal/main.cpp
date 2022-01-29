#include <iostream>
#include<vector>
#include<utility>
#include<fstream>
#include<stdlib.h>
#include<algorithm>
#include<list>

using namespace std;

vector<pair<int,pair<int,int>>>edge;
vector<int>dist;
int parent[100];
int find_set(int x)
{
    if (parent[x]==x)
    {
        return x;
    }
    else
    {
        return find_set(parent[x]);
    }
}

int unite(int x,int y)
{
    int fx=find_set(x);
    int fy=find_set(y);
    parent[fy]=fx;
    return 0;
}

int main()
{
    freopen("input.txt","r",stdin);

    int totalNode,totalEdge,node1,node2,weight;
    cin>>totalNode>>totalEdge;

    for(int i=1; i<=totalNode; i++)
    {
        parent[i]=i;
    }
    for (int i=0; i<totalEdge; i++)
    {
        cin>>node1>>node2>>weight;
        edge.push_back(make_pair(weight,make_pair(node1,node2)));
    }
    sort(edge.begin(),edge.end());

    int mst_edge=0,edge_count=0,mst_weight=0;

    while(mst_edge<totalNode-1 || edge_count<totalEdge)
    {
        node1=edge[edge_count].second.first;
        node2=edge[edge_count].second.second;
        weight=edge[edge_count].first;

        if(find_set(node1)!=find_set(node2))
        {
            mst_weight+=weight;
            cout<<node1<<" "<<node2<<" "<<weight<<endl;
            unite(node1,node2);
            mst_edge++;
        }
        edge_count++;
    }
    cout<<"minimum_cost :"<<mst_weight<<endl;
    return 0;
}
