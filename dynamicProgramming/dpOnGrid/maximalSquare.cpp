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

int maximalSquare(vector<vi> matrix, int m, int n)
{
    int t[m + 1][n + 1];

    int largest = 0;

    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                t[i][j] = 0;
            }
            else if (matrix[i-1][j-1] == 1)
            {
                t[i][j] = 1 + min(t[i - 1][j], t[i][j - 1], t[i - 1][j - 1]);
                largest = max(largest, t[i][j]);
            }
            else
            {
                t[i][j] = 0;
            }
        }
    }

    return largest * largest;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}