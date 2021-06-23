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

int solve(int a[], int n, int k)
{
    int dp[k + 1][n + 1];

    memset(dp, 0, sizeof(dp));

    for (int i = 1; i < k + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            dp[i][j] = dp[i][j - 1];

            if (a[j - 1] < i && a[j - 1] > 0)
            {
                dp[i][j] += dp[i / a[j - 1]][j - 1];
            }
        }
    }

    return dp[k][n];
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}