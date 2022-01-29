#include <iostream>
#include<vector>
#include<utility>
#include<fstream>
#include<queue>
using namespace std;

vector<pair<int,int>>adj[100];
int visited[100]= {0};
int dist[100];
int p[100];
int totalCost=0;

void bfs(int s,int t,int n)
{
    queue<int>q;
    q.push(s);
    visited[s]=1;
    dist[s]=0;
    p[s]=s;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            if(visited[adj[u][i].first]==0)
            {
                int v=adj[u][i].first;
                visited[v]=1;
                dist[v]=dist[u]+1;
                p[v]=u;
                q.push(v);
            }
        }
    }
    if(visited[t]==0)
    {
        cout<<"No path between two node !"<<endl;
        return;
    }
    vector<int>path;
    path.push_back(t);
    int now =t;
    while(now!=s)
    {
        totalCost=totalCost+adj[now][t].second;
        now=p[now];
        path.push_back(now);

    }

    cout<<"path :"<<endl;
    for(auto it=path.rbegin()+1; it!=path.rend(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\ndistance :"<<dist[t]<<endl;
    cout<<"Total cost :"<<totalCost<<endl;

}

int main()
{
    freopen("weightin.txt","r",stdin);
    int totalNode,totalEdge,weight;
    cout<<"Enter totalNumber of node :"<<endl;
    cin>>totalNode;
    cout<<"Enter Total number of Edge :"<<endl;
    cin>>totalEdge;
    int node1,node2;

    cout<<"node 1 and node 2"<<endl;
    for (int i=0; i<totalEdge; i++)
    {
        cin>>node1>>node2>>weight;
        adj[node1].push_back(make_pair(node2,weight));
        adj[node2].push_back(make_pair(node1,weight));
//        adj[node2].push_back(node1);
    }

    int sourch,destination;
    cout<<"Enter Source node :"<<endl;
    cin>>sourch;
    cout<<"Enter destination :"<<endl;
    cin>>destination;

    cout<<sourch<<" "<<destination<<endl;
    bfs(sourch,destination,totalNode);


    return 0;
}
