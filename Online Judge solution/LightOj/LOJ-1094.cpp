#include <bits/stdc++.h>
using namespace std;
#define MX 100000
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);

typedef long long ll;

// 4
// 0 1 20
// 1 2 30
// 2 3 50

bool cmp(ll a, ll b)
{
    return a > b;
}

int main()
{
    FastIO;
    freopen("1094.txt", "r", stdin);
    ll tc, _case = 0;
    // cin >> tc;
    // while (tc--)
    // {
    ll nodeNumber, edgeNumber;
    cin >> nodeNumber;
    int adj[nodeNumber + 1][nodeNumber + 1];
    memset(adj, -1, sizeof(adj));
    edgeNumber = nodeNumber - 1;

    for (int i = 0; i < edgeNumber; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u][v] = w;
        adj[v][u] = w;
    }
    cout << "adjacent matrix" << endl;
    for (int i = 0; i < edgeNumber; i++)
    {
        for (int j = 0; j < edgeNumber; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    // apply the bfs
    bool visit[nodeNumber + 1];
    memset(visit, false, sizeof(visit));

    int src = 0;
    queue<int> q;
    ll pathCost[nodeNumber];
    memset(pathCost, 0, sizeof(pathCost));
    visit[src] = true;
    pathCost[src] = 0;

    q.push(src);
    
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < nodeNumber; i++)
        {
            if (adj[u][i] != -1)
            {
                if (!visit[i])
                {
                    pathCost[i] = pathCost[u] + adj[u][i];
                    visit[i] = true;
                    q.push(i);
                }
            }
        }
    }
    // sort(pathCost, pathCost + nodeNumber, cmp);
    // ll maxCost = pathCost[0] + pathCost[1];
    cout << "path cost" << endl;
    for (int i = 0; i < nodeNumber; i++)
    {
        cout << pathCost[i] << " ";
    }
    // cout<<"maxCost: "<<maxCost<<endl;
    // cout << "Case " << ++_case << ": " << maxCost << endl;
    // }
    return 0;
}