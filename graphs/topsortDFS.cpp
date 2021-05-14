#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void dfss(int node, vector<int> &vis, stack<int> &dfs, vector<int> adj[])
    {
        vis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                dfss(it, vis, dfs, adj);
            }
        }

        dfs.push(node);
    }

    stack<int> dfsearch(int v, vector<int> adj[])
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
    stack<int> B = S.dfsearch(n, adj);
    return 0;
}