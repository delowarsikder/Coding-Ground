#include <bits/stdc++.h>
using namespace std;

#define EMPTY_VAL -1
#define MAX_SIZE 100
#define INF 99999999
#define FOR(i, n) for (int i = 0; i < n; i++)

int adjMat[MAX_SIZE][MAX_SIZE];
int nodeNumber, edgeNumber;
int memo[MAX_SIZE];

void init()
{
    FOR(i, MAX_SIZE)
    {
        FOR(j, MAX_SIZE)
        {
            adjMat[i][j] = EMPTY_VAL;
        }
    }

    FOR(i, MAX_SIZE)
    {
        memo[i] = EMPTY_VAL;
    }
}

void print()
{
    FOR(i, nodeNumber)
    {
        FOR(j, nodeNumber)
        {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
}

int shortestPath(int u, int n)
{
    cout<<"u: "<<u<<" -> "<<"n :"<<n<<endl;
    if (u == n - 1)
    {
        return 0;
    }
    if (memo[u] != EMPTY_VAL)
    {
        return memo[u];
    }
    int result = INF;
    FOR(v, n)
    {
        if (adjMat[u][v] != EMPTY_VAL)
        {
            result = min(result, shortestPath(v, n) + adjMat[u][v]);
        }
    }
    memo[u] = result;
    return memo[u];
}

int main()
{
    init();
    freopen("sp_dac.txt", "r", stdin);
    cin >> nodeNumber >> edgeNumber;
    for (int i = 0; i < edgeNumber; i++)
    {
        int n1, n2, w;
        cin >> n1 >> n2 >> w;
        adjMat[n1][n2] = w;
    }
    // print();
    int src;
    cin >> src;
    // source 0 & destiantion nodeNumber-1

    int pathCost = shortestPath(src, nodeNumber);
    cout << "pathCost: " << pathCost << endl;

    return 0;
}