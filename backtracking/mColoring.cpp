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
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)

//To check if it is possible to colour the nodes of graph with m diff colours
//such that no two adjacent nodes have same colour

bool coloring(vi adj[], int m, int n)
{
    vi color(n, 0);
    if (solve(0, adj, m, n, color))
        return true;
    else
        return false;
}

bool solve(int node, vi adj[], int m, int n, vi &color)
{
    if (node == n)
        return true;

    for (int i = 0; i < m; i++)
    {
        color[node] = i;
        if (isSafe(node, adj, color, i))
        {
            return true;
        }
        else
        {
            color[node] = 0;
        }
    }

    return false;
}

bool isSafe(int node, vi adj[], vi &color, int c)
{
    for (auto it : adj[node])
    {
        if (color[it] == c && it != node)
        {
            return false;
        }
    }

    return true;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
    int n, m;
    cin >> n >> m;

    int u, v;

    vi adj[n];

    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
    }

    int M;
    cin >> M;

    cout << coloring(adj, M, n) << endl;

    return 0;
}