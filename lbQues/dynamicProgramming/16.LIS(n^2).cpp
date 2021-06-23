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

int longestSubsequence(int n, int a[])
{
    // your code here
    int dp[n];

    //LIS of array with 1 element ending at that element is 1
    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int mx = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
            {
                mx = max(dp[j], mx);
            }
        }

        dp[i] = mx + 1;

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