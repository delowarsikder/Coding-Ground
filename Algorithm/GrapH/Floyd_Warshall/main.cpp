#include<bits/stdc++.h>
#define INF 1000000

using namespace std;

int dist[100][100],pare[100][100];
int totalNode,totalEdge;

int pathFind(int src,int dst)
{
    if(src==dst)
    {
        cout<<"path :"<<pare[src][dst];
        return 0;
    }
    pathFind(src,pare[src][dst]);
    cout<<" "<<dst;
}

int main()
{
    freopen("input.txt","r",stdin);
    int node1,node2,weight;
    cin>>totalNode>>totalEdge;
    //define distance
    for(int i=1; i<=totalNode; i++)
    {
        for(int j=1; j<=totalNode; j++)
        {
            if (i==j)
            {
                dist[i][j]=0;
            }
            else
            {
                dist[i][j]=INF;
            }
            pare[i][j]=i;
        }
    }
    for (int i=1; i<=totalEdge; i++)
    {
        cin>>node1>>node2>>weight;
        dist[node1][node2]=weight;
    }
    int k=1;

    while(k<=totalNode)
    {
        for(int i=1; i<=totalNode; i++)
        {
            for(int j=1; j<=totalNode; j++)
            {
                if(dist[i][k]+dist[k][j]<dist[i][j])
                {
                    dist[i][j]=dist[i][k]+dist[k][j];
                    pare[i][j]=pare[k][j];
                }
            }
        }
        k++;
    }
    int source,dest;
    cin>>source>>dest;
    cout<<" Distance :"<<dist[source][dest]<<endl;
    pathFind(source,dest);
    return 0;
}
