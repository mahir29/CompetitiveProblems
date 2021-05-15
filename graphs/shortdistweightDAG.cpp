#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void dfss(int node, vector<int> &vis, stack<int> &dfs, vector<pair<int, int>> adj[])
    {
        vis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it.first])
            {
                dfss(it.first, vis, dfs, adj);
            }
        }

        dfs.push(node);
    }

    stack<int> topsort(int v, vector<pair<int, int>> adj[])
    {
        stack<int> dfs;
        vector<int> vis(v + 1, 0);

        for (int i = 1; i <= v; i++)
        {
            if (!vis[i])
            {
                dfss(i, vis, dfs, adj);
            }
        }

        return dfs;
    }

    vector<int> shortestDist(int src, int v, vector<pair<int, int>> adj[])
    {
        vector<int> dist(v + 1, 1e18);
    
        dist[src] = 0;

        stack<int> q = topsort(v, adj);

        while (!q.empty())
        {
            int node = q.top();
            q.pop();
            int a = dist[node];

            if (dist[node] != 1e18)
            {
                for (auto it : adj[node])
                {
                    if (a + it.second < dist[it.first])
                    {
                        dist[it.first] = min(dist[it.first], a + it.second);
                    }
                }
            }
        }

        return dist;
    }
};

int main()
{
    int u, v, w;
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj[n + 1];
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }
    Solution S;
    vector<int> B = S.shortestDist(0, n, adj);
    return 0;
}