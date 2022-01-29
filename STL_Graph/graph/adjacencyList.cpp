#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("inputGraph.txt","r",stdin);
    int totalNode;
    int node1,node2;
    cin>>totalNode;
    vector<list<int>>adjList(totalNode);
    while(cin>>node1>>node2)
    {
//        cout<<node1<<" - "<<node2<<endl;
        adjList[node1].push_back(node2);
    }
    //print graph
    //process -1

    int c=0;
    vector<list<int>>:: iterator it;
    for(it=adjList.begin(); it!=adjList.end(); it++)
    {
        cout<<c<<" -> ";
        list<int>li = *it;
        list<int>::iterator itLi;
        for(itLi=li.begin(); itLi!=li.end(); itLi++)
        {
            cout<<*itLi<<" ";
        }
        cout<<endl;
        c++;
    }

    /*
    process :2
        int c=0;
        for (int i=0; i<totalNode; i++)
        {
            cout<<c<<"->";
            list<int>li=adjList[i];
            list<int>::iterator itLi;
            for(itLi=li.begin(); itLi!=li.end(); itLi++)
            {
                cout<<*itLi<<" ";
            }
            cout<<endl;
            c++;
        }
    */

    return 0;
}
