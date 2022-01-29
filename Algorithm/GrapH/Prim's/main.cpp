//#include<iostream>
//#include<vector>
//#include<queue>
//#include<list>
//#include<utility>

#include<bits/stdc++.h>
using namespace std;

vector<vector<pair<int,int>>>adjlist(1000);
vector<int>visited;
priority_queue<pair<int,pair<int,int>>>pq;

int totalNode,totalEdge,node1,node2,weight;

int process(int vtx)
{
    visited[vtx]=1;
    for (int j=0; j<adjlist[vtx].size(); j++)
    {
        pair<int,int> v =adjlist[vtx][j];
        if (!visited[v.first])
        {
            pq.push(make_pair(-v.second,make_pair(-v.first,-vtx)));
        }
    }
}

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>totalNode>>totalEdge;
    for(int i=0; i<totalEdge; i++)
    {
        cin>>node1>>node2>>weight;
        adjlist[node1].push_back(make_pair(node2,weight));
        adjlist[node2].push_back(make_pair(node1,weight));
    }

    /*    cout<<"Adjacent list :"<<endl;
        for (int i=0;i<totalNode;i++)
        {
            cout<<i<<" :";
            for (int j=0;j<adjlist[i].size();j++)
            {
                pair<int,int>v=adjlist[i][j];
                cout<<v.first<<"("<<v.second<<")->";
            }
            cout<<endl;
        }
    */
    visited.assign(totalNode,0);
    int source;
    cin>>source;
    process(source);
    int mst_cost=0;
    while(!pq.empty())
    {
        pair<int,pair<int,int> > frt=pq.top();
        pq.pop();
        int w=-frt.first;
        int v=-frt.second.first;
        int u=-frt.second.second;
        if(!visited[v])
        {
            mst_cost+=w;
            cout<<u<<"->"<<v<<"("<<w<<")->"<<endl;;
            process(v);
        }
    }

    cout<<"minimum - cost :"<<mst_cost<<endl;
}
