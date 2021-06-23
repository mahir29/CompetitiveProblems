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

int solve(string x, string y)
{
    int m = x.length();
    int n = y.length();

    int t[2][n + 1];

    bool bi;

    for (int i = 0; i < m + 1; i++)
    {
        bi = i & 1;

        for (int j = 0; j < n + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                t[bi][j] = 0;
            }

            if (x[bi - 1] == y[j - 1])
            {
                t[bi][j] = 1 + t[1 - bi][j - 1];
            }
            else
            {
                t[bi][j] = max(t[bi][j - 1], t[1 - bi][j]);
            }
        }
    }

    return t[bi][n];
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}