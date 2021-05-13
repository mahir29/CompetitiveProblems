#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool cycleDetect(int v, vector<int> adj[])
    {
        
        vector<int> vis(v + 1, 0);

        for (int i = 1; i <= v; i++)
        {
            if (!vis[i])
            {
                queue<pair<int,int>> q;
                q.push({i,-1});
                vis[i] = 1;

                while (!q.empty())
                {
                    pair<int,int> node = q.front();
                    q.pop();
                    

                    for (auto it : adj[node.first])
                    {
                        if(vis[it]&& it!=node.second)
                        return 1;
                        else if (!vis[it])
                        {
                            q.push({it,node.first});
                            vis[it] = 1;
                        }
                    }
                }
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
        adj[u].push_back(v);
    }
    Solution S;
    bool B = S.cycleDetect(n, adj);
    return 0;
}