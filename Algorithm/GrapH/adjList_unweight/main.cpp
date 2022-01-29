#include <iostream>
#include<list>
#include<vector>
using namespace std;

int main()
{
    freopen("input.txt","r+",stdin);

    int node,edge,n1,n2;
    cin>>node>>edge;
    vector<list<int>>adj(node);
    for (int i=0; i<edge; i++)
    {
        cin>>n1>>n2;
        adj[n1].push_back(n2);
    }
    vector<list<int>>::iterator it;
    int c=0;
    for (it=adj.begin(); it<adj.end() ; it++)
    {
        cout<<c<<"->";
        list<int>li = *it;
        list<int>::iterator lt;
        for(lt=li.begin(); lt!=li.end(); lt++)
        {
            cout<<*lt<<"->";
        }
        cout<<endl;
        c++;
    }

    return 0;
}
