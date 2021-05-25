#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ull unsigned long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define vp vector<pii>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mii map<int, int>

void dfs(vi adj[], vi &level,vi &sub, int curr = 1, int parent = 0)
{
    cout << curr << endl;
    level[curr] = level[parent] + 1;
    for (auto it : adj[curr])
    {
        sub[curr]+=sub[it];
        if (it == parent)
            continue; //we should not loop back to parent
        dfs(adj, level,sub, it, curr);
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
    int u, v;
    int n;
    cin >> n;
    vi adj[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    vi level(n + 1);
    vi subtree_size(n + 1,1);

    level[0] = -1;

    dfs(adj, level,subtree_size);

    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << level[i] << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << subtree_size[i] << endl;
    }

    return 0;
}