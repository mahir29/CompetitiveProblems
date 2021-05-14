#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool cycle(int node, int parent, vector<int> &vis, vector<int> adj[])
    {
        if (vis[parent] == 0)
            vis[node] = 1;
        else
            vis[node] = 0;

        for (auto it : adj[node])
        {
            if (vis[it] == -1)
            {
                return cycle(it, node, vis, adj);
            }
            else if (vis[it] == vis[node])
                return 0;
        }

        return 1;
    }

    bool isBipartite(int v, vector<int> adj[])
    {

        vector<int> vis(v + 1, -1);

        for (int i = 1; i <= v; i++)
        {
            if (vis[i] == -1)
            {
                return cycle(i, -1, vis, adj);
            }
        }

        return 1;
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
    bool B = S.isBipartite(n, adj);
    if (B)
        cout << "Yes!It is a Bipartite graph" << endl;
    else
        cout << "No! It is not a bipartite graph" << endl;
    return 0;
}