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

void dfs(int node, int par, vector<int> adj[], int &ans, int dp[])
{
    int ma1 = -1, ma2 = -1;
    for (int i = 0; i < adj[node].size(); i++)
    {
        if (adj[node][i] == par)
            continue;
        dfs(adj[node][i], node, adj, ans, dp);
        if (dp[adj[node][i]] > ma1)
        {
            int t = ma1;
            ma1 = dp[adj[node][i]];
            ma2 = t;
        }
        else if (dp[adj[node][i]] > ma2)
            ma2 = dp[adj[node][i]];
    }
    dp[node] = 1 + ma1;
    ans = max(ans, ma1 + ma2 + 2);
}
int solve(vector<int> &A)
{
    int n = A.size();
    vector<int> adj[n];
    int root;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == -1)
        {
            root = i;
            continue;
        }
        adj[i].push_back(A[i]);
        adj[A[i]].push_back(i);
    }
    int ans = 0;
    int dp[n];
    dfs(root, -1, adj, ans, dp);
    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}