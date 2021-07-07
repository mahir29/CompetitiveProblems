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

int dp[1001][1001];

int rec(int i, int j, vector<vector<int>> &A)
{
    if (i == A.size() || j == A.size())
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];

    return dp[i][j] = A[i][j] + max(rec(i + 1, j, A), rec(i + 1, j + 1, A));
}

int solve(vector<vector<int>> &A)
{
    memset(dp, -1, sizeof(dp));

    return rec(0, 0, A);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}