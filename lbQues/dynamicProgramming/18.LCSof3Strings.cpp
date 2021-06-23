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

int LCSof3(string X, string Y, string Z, int m, int n, int o)
{
    // your code here
    int L[m + 1][n + 1][o + 1];

    /* Following steps build L[m+1][n+1][o+1] in
       bottom up fashion. Note that L[i][j][k]
       contains length of LCS of X[0..i-1] and
       Y[0..j-1]  and Z[0.....k-1]*/
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            for (int k = 0; k <= o; k++)
            {
                if (i == 0 || j == 0 || k == 0)
                    L[i][j][k] = 0;

                else if (X[i - 1] == Y[j - 1] && X[i - 1] == Z[k - 1])
                    L[i][j][k] = L[i - 1][j - 1][k - 1] + 1;

                else
                    L[i][j][k] = max(max(L[i - 1][j][k],
                                         L[i][j - 1][k]),
                                     L[i][j][k - 1]);
            }
        }
    }

    /* L[m][n][o] contains length of LCS for
      X[0..n-1] and Y[0..m-1] and Z[0..o-1]*/
    return L[m][n][o];
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}