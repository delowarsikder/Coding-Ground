#include <iostream>
#include<vector>
#include<list>
#include<utility>
#include<queue>

using namespace std;
vector<int>adj[100];
vector<int>visit;

int main()
{
    freopen("input.txt","r",stdin);
    int totalNode,totalEdge;
    cout<<"Enter totalNumber of node :"<<endl;
    cin>>totalNode;
    cout<<"Enter Total number of Edge :"<<endl;
    cin>>totalEdge;
    int node1,node2;

    cout<<"node 1 and node 2"<<endl;
    for (int i=0; i<totalEdge; i++)
    {
        cin>>node1>>node2;
        adj[node1].push_back(node2);
        adj[node2].push_back(node1);
    }

    int sourch;
    cout<<"Enter Source code :"<<endl;
    cin>>sourch;
    visit.assign(totalNode,0);

    queue<int>q;
    q.push(sourch);
    visit[sourch]=1;
    int v;
    int level=0;
    while(!q.empty())
    {
        int u=q.front();
        cout<<"level "<<level<<": "<<u<<" "<<endl;
        q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            if(visit[adj[u][i]]==0)
            {
                v=adj[u][i];
                visit[v]=1;
                q.push(v);
                cout<<v<<" ";
            }

        }
        cout<<endl;
        level++;
    }

    return 0;
}
