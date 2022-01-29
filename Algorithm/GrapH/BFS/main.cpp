#include<iostream>
#include<vector>
#include<queue>
#include<fstream>

using namespace std;

int main(int argc,char **argv)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,m; //n _vertext... m_edge
    int a,b; //node to node
    cin>>n>>m;
    vector<int>samp;
    vector<vector<int>>conn(n+1,samp);
    //load adjacent matrix
    for (int i=0; i<m; i++)
    {
        cin>>a>>b;
        conn[a].push_back(b);
        conn[b].push_back(a);

    }
    bool visited[n+1];
    for (int i=0; i<n+1; i++)
    {
        visited[i]=false;

    }
    queue<int>level;
    level.push(1);
    visited[1]=true;
    int si=0;
    int le=0;
    while(!level.empty())
    {
        cout<<"Level ! "<<le<<endl;
        si=level.size();
        while(si--)
        {
            int x=level.front();
            level.pop();
            cout<<x<<endl;
            for(int j=0; j<conn[x].size(); j++)
            {
                if(!visited[conn[x][j]])
                {
                    visited[conn[x][j]]=true;
                    level.push(conn[x][j]);
                }
            }
        }
        le++;
    }

    return 0;
}

