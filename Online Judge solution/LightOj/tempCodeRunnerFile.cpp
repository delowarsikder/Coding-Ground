bool visit[nodeNumber + 1];
    // memset(visit, false, sizeof(visit));

    // int src = 0;
    // queue<int> q;
    // ll pathCost[nodeNumber];
    // memset(pathCost, 0, sizeof(pathCost));
    // visit[src] = true;
    // pathCost[src] = 0;
    // q.push(src);

    // int level[nodeNumber] = 0;

    // while (!q.empty())
    // {
    //     int u = q.front();
    //     q.pop();
    //     cout << u << ": ";
    //     for (int i = u; i < nodeNumber; i++)
    //     {
    //         if (adj[u][i] != -1)
    //         {
    //             if (!visit[i])
    //             {
    //                 cout << "->" << i << " ";
    //                 // pathCost[i] = pathCost[u] + adj[u][i];
    //                 visit[i] = true;
    //                 q.push(i);
    //             }
    //         }
    //     }
    //     cout << endl;
    // }
    // // sort(pathCost, pathCost + nodeNumber, cmp);
    // // ll maxCost = pathCost[0] + pathCost[1];
    // cout << "path cost" << endl;
    // for (int i = 0; i < nodeNumber; i++)
    // {
    //     cout << pathCost[i] << " ";
    // }
    // // cout<<"maxCost: "<<maxCost<<endl;
    // // cout << "Case " << ++_case << ": " << maxCost << endl;
    // // }
    // r