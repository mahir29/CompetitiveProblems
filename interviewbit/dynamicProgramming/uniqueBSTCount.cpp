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

//dp[i] represent number of unique subtree with elements 1 to i

int solve(int n)
{
    int dp[n + 1];
    fill_n(dp, n + 1, 0);

    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            dp[i] += dp[i - j] * dp[j - 1];
            //for j as root in i number of elements,i-1 will fall in left subtree and n-i in right subtree
        }
    }

    return dp[n];
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}