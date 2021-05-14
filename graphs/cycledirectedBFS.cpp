#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool bfs(int v, vector<int> adj[], vector<int> indegree)
    {
        vector<int> topsort;
        vector<int> vis(v + 1, 0);
        int count = 0;

        for (int i = 1; i <= v; i++)
        {
            if (!vis[i])
            {
                queue<int> q;
                vis[i] = 1;
                for (int i = 1; i <= v; i++)
                {
                    if (indegree[i] == 0)
                        q.push(i);
                }

                while (!q.empty())
                {
                    int node = q.front();
                    q.pop();
                    count++;

                    for (auto it : adj[node])
                    {

                        indegree[it]--;
                        vis[it] = 1;
                        if (indegree[i] == 0)
                            q.push(i);
                    }
                }
            }
        }

        if (count == v)
            return 0;
        else
            return 1;
    }
};

int main()
{
    int u, v;
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    vector<int> indegree(n + 1, 0);
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        indegree[u]++;
    }
    Solution S;
    bool B = S.bfs(n, adj, indegree);
    return 0;
}