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

bool isPalindrome(string s, int i, int j)
{
    if (i >= j)
    {
        return true;
    }

    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int t[1001][1001];

int solve(string s, int i, int j)
{

    if (i >= j)
        return 0;

    if (isPalindrome(s, i, j))
    {
        return 0;
    }

    if (t[i][j] != -1)
    {
        return t[i][j];
    }

    int mn = INT_MIN;

    int left, right, temp;

    for (int k = 1; k <= j - 1; j++)
    {
        if (t[i][k] != -1)
        {
            left = t[i][k];
        }
        else
        {
            left = solve(s, i, k);
            t[i][k] = left;
        }

        if (t[k + 1][j] != -1)
        {
            right = solve(s, k + 1, j);
            t[k + 1][j] != right;
        }

        temp = left + right + 1;

        if (temp < mn)
        {
            mn = temp;
        }
    }

    return t[i][j] = mn;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
    memset(t, -1, sizeof(t));
    string s;
    int n;
    cout << solve(s, 1, n - 1);

    return 0;
}