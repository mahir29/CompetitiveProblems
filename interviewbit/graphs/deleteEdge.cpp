#include <bits/stdc++.h>
using namespace std;

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

const long long int mod = 1e9 + 7;

long long int dfs(int node, int parent, vector<int> adj[], vector<int> &A, long long int &totalSum, long long int &res)
{
    long long int sum = 0;

    for (auto it : adj[node])
    {
        if (it != parent)
        {
            long long int x = dfs(it, node, adj, A, totalSum, res);
            res = max(res % mod, (long long int)(x % mod) * ((totalSum - x) % mod));
            sum = (sum % mod + x % mod) % mod;
        }
    }

    return (sum % mod + A[node] % mod) % mod;
}

int deleteEdge(vector<int> &A, vector<vector<int>> &B)
{
    int n = A.size();
    vector<int> adj[n];
    long long int totalSum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        adj[B[i][0] - 1].push_back(B[i][1] - 1);
        adj[B[i][1] - 1].push_back(B[i][0] - 1);
    }

    for (int i = 0; i < n; i++)
    {
        totalSum = (totalSum % mod + A[i] % mod) % mod;
    }

    long long int res = INT_MIN;
    long long int x = dfs(0, -1, adj, A, totalSum, res);
    return res % mod;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}