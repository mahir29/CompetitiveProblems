#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> bfs(int src, int v, vector<int> adj[])
    {
        vector<int> dist(v + 1, 1e18);
        vector<int> vis(v + 1, 0);
        dist[src] = 0;

        queue<int> q;
        q.push(src);
        vis[src] = 1;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            int a = dist[node];

            for (auto it : adj[node])
            {
                dist[it] = min(dist[it], a + 1);
                if (!vis[it])
                {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }

        return dist;
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
        adj[v].push_back(u);
    }
    Solution S;
    vector<int> B = S.bfs(1, n, adj);
    return 0;
}