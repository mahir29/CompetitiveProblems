#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool cycle(int node, int parent,vector<int> &vis, vector<int> adj[])
    {
        
        vis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                return cycle(it,node, vis,adj);
            }
            else if(parent!=it){
                return 1;
            }
        }

        return 0;
    }

    bool cycleDetect(int v, vector<int> adj[])
    {
        
        vector<int> vis(v + 1, 0);

        for (int i = 1; i <= v; i++)
        {
            if (!vis[i])
            {
                return cycle(i,-1, vis,adj);
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