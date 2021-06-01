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

vector<vector<char>> words;

bool backtrack(int i, int j, string word, int index)
{
    if (index >= word.length())
    {
        return true;
    }

    if (i < 0 || i==words.size() || j < 0 || j==words[0].size() || word[0] != words[i][j])
    {
        return false;
    }

    bool res = false;

    words[i][j] = '#';

    vi rowoff = {1, 0, -1, 0};
    vi coloff = {0, 1, 0, -1};

    for (int d = 0; d < 4; d++)
    {
        res = backtrack(i + rowoff[d], j + coloff[d], word, index + 1);
        if (res)
            break;
    }

    words[i][j] = word[index];

    return res;
}

bool wordSearch(vector<vector<char>> &board, string word)
{

    words = board;
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {

            if (backtrack(i, j, word, 0))
                return true;
        }
    }

    return false;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
    vector<vector<char>> board = {{'a', 'b', 'c', 'd'}, {'s', 'f', 'c', 's'}, {'a', 'd', 'e', 'e'}};

    string word = "abcced";

    bool s = wordSearch(board, word);

    cout << s << endl;
    return 0;
}