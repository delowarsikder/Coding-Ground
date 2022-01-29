#include<bits/stdc++.h>

#define INF 1000000
using namespace std;

vector<vector<pair<int,int>>>adj(1000);
vector<int>dist;
vector<int>pare;
int source;

int pathfind(int src)
{
    if (src!=source && pare[src]==-1 )
    {
        cout<<"path not found !"<<endl;
        return 0;
    }
    else if(src==source)
    {
        cout<<source;
        return 0;
    }
    pathfind(pare[src]);
    cout<<" "<<src;

}

int main()
{
    freopen("input.txt","r",stdin);
    int node,edge;
    //cout<<"Enter number of node :"<<endl;
    cin>>node;
    //cout<<"Enter the number of edge :"<<endl;
    cin>>edge;

    int node1,node2,weight;
    for (int i=0; i<edge; i++)
    {
        cin>>node1>>node2>>weight;
        adj[node1].push_back(make_pair(node2,weight));
    }

    /*
        for(int i=0; i<node; i++)
        {
            cout<<i <<": ";
            for (int j=0; j<adj[i].size(); j++)
            {
                cout<<adj[i][j].first<<" ("<<adj[i][j].second<<")-> ";
            }
            cout<<endl;
        }*/

    // cout<<"Enter source :"<<endl;
    cin>>source;
    dist.assign(node,INF);
    pare.assign(node,-1);

    dist[source]=0;

    for (int i=0; i<node-1; i++)
    {
        for(int u=0; u<node; u++)
        {
            for (int j=0; j<adj[u].size(); j++)
            {
                pair<int,int>v=adj[u][j];
                if(dist[u]==INF)
                {
                    continue;
                }
                if(dist[u]+v.second<dist[v.first])
                {
                    dist[v.first]=dist[u]+v.second;
                    pare[v.first]=u;
                }
            }
        }

    }
    bool hasCycle=false;
    for(int u=0; u<node; u++)
    {
        for (int j=0; j<adj[u].size(); j++)
        {
            pair<int,int>v=adj[u][j];
            if(dist[u]==INF)
            {
                continue;
            }
            if(dist[u]+v.second<dist[v.first])
            {
                hasCycle=true;
                break;
            }
        }
        if(hasCycle)
        {
            break;
        }
    }
    if(hasCycle)
    {
        cout<<"This graph contain negative edge :"<<endl;
    }

    else
    {
        int dest;
       // cout<<"Enter destination :"<<endl;
        cin>>dest;
        cout<<"distance :"<<dist[dest]<<endl;
        pathfind(dest);

    }
    return 0;
}
