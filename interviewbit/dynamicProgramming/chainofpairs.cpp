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

int solve(vector<vector<int>> &a)
{
    int n = a.size();
    int dp[n];
    for (int i = 0; i < n; i++)
        dp[i] = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j][1] < a[i][0] && dp[i] < (dp[j] + 1))
                dp[i] = dp[j] + 1;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, dp[i]);
    }
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