#include <bits/stdc++.h>
using namespace std;

struct node
{
    int u;
    int v;
    int w;
    node(int first, int second, int third)
    {
        u = first;
        v = second;
        w = third;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    int u, v, w;
    vector<node> edges;
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v >> w;
        edges.push_back(node(u, v, w));
    }

    int src;
    cin >> src;

    vector<int> dist(n, INT_MAX);

    dist[src] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (auto it : edges)
        {
            if (dist[it.u] + it.w < dist[it.v])
                dist[it.v] = it.w + dist[it.v];
        }
    }

    bool fl = false;

    for (auto it : edges)
    {
        if (dist[it.u] + it.w < dist[it.v])
        {
            cout << "Negative cycle";
            fl = 1;
            break;
        }
    }

    if (!fl)
    {
        for (int i = 0; i < n; i++)
            cout << i << " " << dist[i] << endl;
    }

    return 0;
}
