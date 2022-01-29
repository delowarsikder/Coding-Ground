#include<bits/stdc++.h>
using namespace std;
#define INF 10000

class nodeproperty
{
public:
    int nodeid;
    char color;
    int distance;
    int parent;
    nodeproperty(int nid,char c,int d,int p)
    {
        nodeid=nid;
        color=c;
        distance=d;
        parent=p;
    }
};

vector<nodeproperty>node;

BFS(vector<list<int>>adjlist,int source)
{

    return 0;
}

int main()
{
    freopen("test.txt","r",stdin);
    int totalNode,edge,node1,node2;
    cin>>totalNode>>edge;
    vector<list<int>>adjlist(totalNode);

    for(int i=0; i<edge; i++)
    {
        cin>>node1>>node2;
        adjlist[node1].push_back(node2);
    }
    cout<<"Adj list :"<<endl;
    for(int m=0; m<totalNode; m++)
    {
        node.push_back(nodeproperty(m,'w',INF,-1));
    }
    /*vector<nodeproperty>::iterator it;
    for(it=node.begin(); it<node.end(); it++)
    {
        cout<<(*it).nodeid<<": "<<(*it).color<<" "<<(*it).distance<<" "<<(*it).parent<<endl;
    }*/
    int source;
    cout<<"Enter  source :"<<endl;
    cin>>source;
    BFS(adjlist,source);
    return 0;
}
