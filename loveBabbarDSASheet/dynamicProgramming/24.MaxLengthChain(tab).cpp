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

struct val
{
    int first;
    int second;
};

int maxChainLen(struct val p[], int n)
{
    //Your code here
    int dp[n];

    for (int i = 0; i < n; i++)
    {
        int mx = 0;
        for (int j = 0; j < i; j++)
        {
            if (p[i].first > p[j].second)
            {
                mx = max(mx, dp[j]);
            }
        }
        dp[i] = mx + 1;
    }

    int ans = INT_MIN;

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