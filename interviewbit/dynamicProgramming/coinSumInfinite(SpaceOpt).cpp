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

int coinchange2(vector<int> &A, int B)
{
    int n = A.size();

    int dp[2][B + 1];

    bool bi;

    for (int i = 0; i < n + 1; i++)
    {
        bi = i & 1;
        for (int j = 0; j < B + 1; j++)
        {
            if (j == 0)
                dp[bi][j] = 1;
            else if (i == 0)
                dp[bi][j] = 0;

            else if (A[i - 1] <= j)
            {
                dp[bi][j] = dp[bi][j - A[i - 1]] % 1000007 + dp[1 - bi][j] % 1000007;
            }
            else
            {
                dp[bi][j] = dp[1 - bi][j] % 1000007;
            }
        }
    }

    return dp[bi][B] % 1000007;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}