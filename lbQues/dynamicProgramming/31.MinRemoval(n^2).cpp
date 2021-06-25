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

int dp[101][101];

int countRemovals(int a[], int i, int j, int k)
{
    if (i >= j) //no removal req with single or no element
        return 0;

    else if ((a[j] - a[i]) <= k) //no removal req
        return 0;

    else if (dp[i][j] != -1)
        return dp[i][j];

    else if ((a[j] - a[i]) > k)
    {
        dp[i][j] = 1 + min(countRemovals(a, i + 1, j, k),countRemovals(a, i, j - 1, k));//either keep first element or last element
    }
    return dp[i][j];
}

int removals(int a[], int n, int k)
{
    sort(a, a + n);
    memset(dp, -1, sizeof(dp));
    if (n == 1)
        return 0;
    else
        return countRemovals(a, 0, n - 1, k);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
    int a[5];
    sort(a, a + 5);

    return 0;
}