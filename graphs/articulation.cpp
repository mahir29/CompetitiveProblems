#include <bits/stdc++.h>
using namespace std;

void arti(int node, int parent, vector<int> &low, vector<int> &tin, vector<int> &vis, int timer, vector<int> adj[],
            vector<int> &isArticulation)
{
    tin[node] = low[node] = timer++;
    vis[node] = 1;

    int child = 0;

    for (auto it : adj[node])
    {
        if (it == parent)
            continue;

        if (!vis[it])
        {
            arti(it, node, low, tin, vis, timer, adj, isArticulation);
            low[node] = min(low[node], low[it]);
            if (low[node] >= tin[it] && parent != -1)
                isArticulation[node] = 1;
            child++;
        }
        else
        {
            low[node] = min(low[node], tin[it]);
        }
    }

    if (child > 1 && parent == -1)
        isArticulation[node] = 1;
}

int main()
{
    int u, v;
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int timer = 0;
    vector<int> low(n, -1), tin(n, -1);
    vector<int> vis(n, 0);
    vector<int> isArticulation(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (!vis[0])
        {
            arti(i, -1, low, tin, vis, timer, adj, isArticulation);
        }
    }
    return 0;
}