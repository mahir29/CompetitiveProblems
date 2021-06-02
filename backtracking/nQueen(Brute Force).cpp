//Time complexity : T(n^2)

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

bool isSafe(int row, int col, vs &board, int n)
{
    int dumrow = row;
    int dumcol = col;

    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        row--;
        col--;
    }

    row = dumrow;
    col = dumcol;

    while (row < n && col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        row++;
        col--;
    }

    row = dumrow;
    col = dumcol;

    while (col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        col--;
    }

    return true;
}

void solve(int col, vs &board, vector<vs> &ans, int n)
{

    if (col == n)
    {
        ans.push_back(board);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (isSafe(i, col, board, n))
        {
            board[i][col] = 'Q';
            solve(col + 1, board, ans, n);
            board[i][col] = '.';
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

    solve(0, board, ans, n);

    return 0;
}