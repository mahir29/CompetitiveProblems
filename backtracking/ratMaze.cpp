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

void solve(int row, int col, vector<vi> &board, vector<vi> &vis, string move, vector<string> &ans)
{
    if (row == board.size() && col == board[0].size())
    {
        ans.push_back(move);
        return;
    }

    vi rowOff = {1, 0, -1, 0};
    vi colOff = {0, 1, 0, -1};

    string dir = "DRUL";

    for (int d = 0; d < 4; d++)
    {
        if (row >= 0 || row != board.size() || col >= 0 || col != board[0].size() || board[row][col] == 1)
        {
            vis[row][col] = 1;
            solve(row + rowOff[d], col + colOff[d], board, vis, move + dir[d], ans);
            vis[row][col] = 0;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
    vector<vector<int>> board = {{1, 0, 0, 0}, {1, 1, 1, 0}, {0, 1, 1, 1}};
    vector<vi> vis;
    vs ans;

    if (board[0][0] == 0)

        solve(0, 0, board, vis, "", ans);

    return 0;
}