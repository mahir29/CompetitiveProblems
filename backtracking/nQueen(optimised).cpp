//Time complexity : T(n)

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

void solve(int col, vs &board, vector<vs> &ans, int n, vi &low, vi &lower, vi &upper)
{

    if (col == n)
    {
        ans.push_back(board);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (low[i] == 0 && lower[i + col] == 0 && upper[n - 1 + col - i] == 0)
        {
            board[i][col] = 'Q';
            low[i] = 1;
            lower[i + col] = 1;
            upper[n - 1 + col - i] == 1;
            solve(col + 1, board, ans, n, low, lower, upper);
            board[i][col] = '.';
            low[i] = 0;
            lower[i + col] = 0;
            upper[n - 1 + col - i] = 0;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
    int n;
    cin >> n;

    vs board(n);
    string s(n, '.');

    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }

    vector<vs> ans;

    vi low(n, 0), lower(2 * n - 1, 0), upper(2 * n - 1, 0);

    solve(0, board, ans, n, low, lower, upper);

    return 0;
}