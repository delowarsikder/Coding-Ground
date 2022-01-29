#include<iostream>
#include<vector>
#include<queue>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

vector<int>dist;
vector<int>pare;
int source,destination;

int main()
{
    freopen("dijkstraInput.txt","r",stdin);
    int totalNode,totalEdge;
    cout<<"Enter number of Node :"<<endl;
    cin>>totalNode;
    cout<<"Enter number of Edge :"<<endl;
    cin>>totalEdge;
    int n1,n2,w;
    vector<pair<int,int>>adj[totalNode];
    for(int i=0; i<totalEdge; i++)
    {
        cin>>n1,n2,w;
        adj[n1].push_back(make_pair(w,n2));
    }

    cout<<"Enter value :"<<endl;
    vector <pair<int,int>> :: iterator j;

    for(int i=0; i<totalNode; i++)
    {
        cout<<i<<"-> ";
        for( j=adj[i].begin(); j!=adj[i].end(); j++)
        {
            cout<<*(j->first)<<" :"<<j->second<<"  ,";
        }
        cout<<endl;

        /*vector <pair<int,int>> vec[5];
        vector <pair<int,int>> :: iterator it;

        for(int i=0;i<5;i++){
        for(it=vec[i].begin(); it!=vec[i].end();it++) cout << it->first << " " << it->second << " -> ";
        cout << "\n";
        }*/
    }
    cin>>source>>destination;
    return 0;
}
