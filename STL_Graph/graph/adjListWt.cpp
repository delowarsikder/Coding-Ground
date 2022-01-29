#include<bits/stdc++.h>
#define ff first
#define ss second

using namespace std;

int main()
{
    freopen("inputGraphWt.txt","r",stdin);
    int totalNode;
    int node1,node2,weight;
    cin>>totalNode;
    vector<list<pair<int,int>>>adjList(totalNode);
    while(cin>>node1>>node2>>weight)
    {
        adjList[node1-1].push_back(make_pair(node2,weight));
    }

    //print graph
    //process -1

    int c=1;
    vector<list<pair<int,int>>>:: iterator it;

    for(it=adjList.begin(); it!=adjList.end(); it++)
    {
        cout<<c<<" -> ";

        list<pair<int,int>>li = *it;
        list<pair<int,int>>::iterator itLi;
        for(itLi=li.begin(); itLi!=li.end(); itLi++)
        {
            pair<int,int>p=*itLi;
            cout<<"["<<p.ff<<","<<p.ss<<"]";

//            cout<<*itLi<<" ";
        }

        cout<<endl;
        c++;
    }

    return 0;
}
