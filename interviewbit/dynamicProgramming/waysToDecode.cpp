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

int numDecodings(string A)
{
    int n = A.size();
    int p = 1000000007;
    vector<int> dp(n, 0);

    if (A[0] != '0')
        dp[0] = 1;
    else
        dp[0] = 0;

    for (int i = 1; i < n; i++)
    {
        if (A[i] == '0' && A[i - 1] == '0')
            dp[i] = 0;
        else if (A[i] == '0' && A[i - 1] != '0')
        {
            string t = A.substr(i - 1, 2);
            if (stoi(t) <= 20 && i >= 2)
            {
                dp[i] += dp[i - 2] % p;
            }
            if (stoi(t) <= 26 && i < 2)
            {
                dp[i] = 1;
            }
        }
        else if (A[i] != '0' && A[i - 1] == '0')
        {
            dp[i] += dp[i - 1] % p;
        }
        else
        {
            dp[i] += dp[i - 1] % p;
            string t = A.substr(i - 1, 2);
            if (stoi(t) <= 26 && i >= 2)
            {
                dp[i] += dp[i - 2] % p;
            }
            if (stoi(t) <= 26 && i < 2)
            {
                dp[i] = 2;
            }
        }
    }

    return dp[n - 1] % p;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}