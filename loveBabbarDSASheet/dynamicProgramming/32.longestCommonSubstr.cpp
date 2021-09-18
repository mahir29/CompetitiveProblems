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

int longestCommonSubstr(string S1, string S2, int n, int m)
{
    // your code here
    int t[n + 1][m + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (j == 0 || i == 0)
                t[i][j] = 0;
        }
    }

    int result = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (S1[i - 1] == S2[j - 1])
            {
                t[i][j] = 1 + t[i - 1][j - 1];
                result = max(result, t[i][j]);
            }
            else
            {
                t[i][j] = 0;
            }
        }
    }

    return result;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}