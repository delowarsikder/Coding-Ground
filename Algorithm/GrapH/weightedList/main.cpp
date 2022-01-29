#include <iostream>
#include<vector>
#include<fstream>
#include<utility>
#include<list>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int node1,node2,weight;
    int totalNode,totalEdge;
    cout<<"Enter number of Node :"<<endl;
    cin>>totalNode;
    cout<<"Enter number of Edge :"<<endl;
    cin>>totalEdge;
    vector<list<pair<int,int>>>adj(totalNode+1);

    for(int i=0; i<totalEdge; i++)
    {
        cin>>node1>>node2>>weight;
        adj[node1].push_back(make_pair(node2,weight));
    }


    int c=0;
    for(auto it=adj.begin(); it!=adj.end(); it++)
    {
        cout<<c<<"->";
        list<pair<int,int>>li=*it;
        auto l=li.begin();
        for(l=li.begin(); l!=li.end(); l++)
        {
            cout<<"["<<l->first<<","<<l->second<<"],";
        }
        cout<<endl;
        c++;
    }

    return 0;
}
