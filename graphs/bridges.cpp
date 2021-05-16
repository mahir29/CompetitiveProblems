#include <bits/stdc++.h>
using namespace std;

void bridge(int node, int parent, vector<int> &low, vector<int> &tin, vector<int> &vis, int timer, vector<int> adj[])
{
    tin[node] = low[node] = timer++;
    vis[node] = 1;

    for (auto it : adj[node])
    {
        if (it == parent)
            continue;

        if (!vis[it])
        {
            bridge(it, node, low, tin, vis, timer, adj);
            low[node] = min(low[node], low[it]);
            if (low[node] > tin[it])
                cout << node << " " << it << endl;
        }
        else
        {
            low[node] = min(low[node], tin[it]);
        }
    }
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

    for (int i = 0; i < n; i++)
    {
        if (!vis[0])
        {
            bridge(i, -1, low, tin, vis, timer, adj);
        }
    }
    return 0;
}