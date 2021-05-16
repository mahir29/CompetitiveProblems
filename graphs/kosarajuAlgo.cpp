#include <bits/stdc++.h>
using namespace std;

void revdfs(int n, vector<int> &vis, vector<int> transpose[])
{
    vis[n] = 1;
    cout<<n<<" ";

    for (auto it : transpose[n])
    {
        
        if(!vis[it]){
            revdfs(it, vis, transpose);
        }
    
    }
}

void dfs(int n, vector<int> &vis, vector<int> adj[], stack<int> &s)
{
    vis[n] = 1;

    for (auto it : adj[n])
    {
        dfs(it, vis, adj, s);
    }

    s.push(n);
}

stack<int> topsort(int n, vector<int> &vis, vector<int> adj[])
{
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, vis, adj, s);
        }
    }
}

int main()
{
    int u, v, m, n;
    cin >> n >> m;
    vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> vis(n, 0);

    stack<int> s = topsort(n, vis, adj);

    vector<int> transpose[n];

    for (int i = 0; i < m; i++)
    {
        vis[i] = 0;
        for (auto it : adj[i])
        {
            transpose[it].push_back(i);
        }
    }

    while (!s.empty())
    {
        int node = s.top();
        s.pop();

        if (!vis[node])
        {
            cout << "SCC :";
        revdfs(node, vis, transpose);
        cout <<endl;
        }
    }

    return 0;
}