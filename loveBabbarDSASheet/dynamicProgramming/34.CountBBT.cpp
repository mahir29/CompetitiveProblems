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

long long int countBT(int h)
{
    // code here
    long long int dp[h + 1];

    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= h; i++)
    {
        dp[i] = (dp[i - 1] * dp[i - 1] + 2 * dp[i - 2] * dp[i - 1]) % 1000000007;
    }

    return dp[h] % 1000000007;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}