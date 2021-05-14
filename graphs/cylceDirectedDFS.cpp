#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool cycle(int node, vector<int> &dfsvis, vector<int> &vis, vector<int> adj[])
    {

        for (auto it : adj[node])
        {
            vis[node] = 1;
            dfsvis[node] = 1;
            if (!vis[it])
            {
                if (cycle(it, dfsvis, vis, adj))
                    return 1;
            }
            else if (vis[it] && dfsvis[it])
            {
                return 1;
            }
        }

        dfsvis[node] = 0;

        return 0;
    }

    bool cycleDetect(int v, vector<int> adj[])
    {

        vector<int> vis(v + 1, 0);
        vector<int> dfsvis(v + 1, 0);

        for (int i = 1; i <= v; i++)
        {
            if (!vis[i])
            {
                if (cycle(i, dfsvis, vis, adj))
                    return 1;
            }
        }

        return 0;
    }
};

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
    }
    Solution S;
    bool B = S.cycleDetect(n, adj);
    return 0;
}