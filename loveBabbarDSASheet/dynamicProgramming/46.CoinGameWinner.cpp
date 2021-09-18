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

//dp[i] represent the chances of winning the game with i number of coins left in front of them

bool solve(int x, int y, int n)
{
    int dp[n + 1];

    dp[0] = false;
    dp[1] = true;

    for (int i = 2; i < n + 1; i++)
    {

        if (i - 1 >= 0 && !dp[i - 1])
        {
            dp[i] = true;
        }
        else if (i - x >= 0 && !dp[i - x])
        {
            dp[i] = true;
        }
        else if (i - y >= 0 && !dp[i - y])
        {
            dp[i] = true;
        }
        else
        {
            dp[i] = false;
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