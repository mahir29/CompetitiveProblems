#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isBipartite(int v, vector<int> adj[])
    {

        vector<int> vis(v + 1, -1);

        for (int i = 1; i <= v; i++)
        {
            if (vis[i]==-1)
            {
                queue<int> q;
                q.push(i);
                vis[i] = 0;

                while (!q.empty())
                {
                    int node = q.front();
                    q.pop();
                    int color = vis[node];

                    for (auto it : adj[node])
                    {
                        if (vis[it] == -1)
                        {
                            q.push(it);
                            if (color == 0)
                                vis[it] = 1;
                            else
                                vis[it] = 0;
                        }
                        else if (vis[it] == color)
                            return 0;
                    }
                }
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
        adj[u].push_back(v);
    }
    Solution S;
    bool B = S.isBipartite(n, adj);
    if (B)
        cout << "Yes!It is a Bipartite graph" << endl;
    else
        cout << "No! It is not a bipartite graph" << endl;
    return 0;
}