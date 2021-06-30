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

int solve(vector<vi> v, int m, int n)
{
    int t[m][n];

    t[0][0] = v[0][0];

    for (int i = 0; i < m; i++)
    {
        t[i][0] = v[i][0] + t[i - 1][0];
    }

    for (int i = 0; i < m; i++)
    {
        t[0][i] = v[0][i] + t[0][i - 1];
    }

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            t[i][j] = v[i][j] + min(t[i - 1][j], t[i][j - 1]);
        }
    }

    return t[m - 1][n - 1];
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}