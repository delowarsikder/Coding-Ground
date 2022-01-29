#include<bits/stdc++.h>
#define INF 1000000

using namespace std;

vector<vector<pair<int,int>>>adjlist(100);
vector<int>pare;
vector<int>dist;
priority_queue<pair<int,int>>pq;
int source;
int totalNode,edge,node1,node2,weight;

pathFind(int dst)
{
    if (dst!=source && pare[dst]==-1) //if (dst!=source && pare[dst]!=-1 )don't work return 0; print dst last.....
    {
        cout<<"path not found !"<<endl;
        return 0;
    }
    else if(dst==source)
    {
        cout<<"source :"<<source;
        return 0;
    }
    pathFind(pare[dst]);
    cout<<" "<<dst;
}

int main()
{
    freopen("input.txt","r",stdin);

    cin>>totalNode>>edge;
    for(int i=0; i<edge; i++)
    {
        cin>>node1>>node2>>weight;
        adjlist[node1].push_back(make_pair(node2,weight));
    }

    /*for(int i=0; i<totalNode; i++)
    {
        cout<<i <<":";
        for(int j=0; j<adjlist[i].size(); j++)
        {
            cout<<adjlist[i][j].first<<"("<<adjlist[i][j].second<<")->";
        }
        cout<<endl;
    }*/

    dist.assign(totalNode,INF);
    pare.assign(totalNode,-1);
    //cout<<"Enter source :"<<endl;
    cin>>source;
    dist[source]=0;

    pq.push(make_pair(-0,-source));

    while(!pq.empty())
    {
        pair<int,int>frt;
        frt=pq.top();
        pq.pop();
        int d,u;
        d=-frt.first;
        u=-frt.second;
        if(d>dist[u])
        {
            continue;
        }
        for (int i=0; i<adjlist[u].size(); i++)
        {
            pair<int,int>v=adjlist[u][i];
            if (dist[u]+v.second<dist[v.first])
            {
                dist[v.first]=dist[u]+v.second;
                pare[v.first]=u;
                pq.push(make_pair(-dist[v.first],-v.first));
            }
        }
    }
    cout<<"Source :"<<source<<endl;
    int dest;
    //cout<<"Enter destination :"<<endl;
    cin>>dest;
    cout<<"Destination :"<<dest<<endl;
    cout<<"Cost : "<<dist[dest]<<endl;
    pathFind(dest);

    return 0;
}
