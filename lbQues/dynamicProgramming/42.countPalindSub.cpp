#include <bits/stdc++.h>
using namespace std;

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

long long int solve(string s, int i, int j, long long int t[][1000])
{
    if (i > j)
        return 0;

    if (t[i][j] != -1)
    {
        return t[i][j];
    }

    if (i == j)
        t[i][j] = 1;
    else if (s[i] == s[j])
    {
        t[i][j] = solve(s, i + 1, j, t) + solve(s, i, j - 1, t) + 1;
    }
    else
    {
        t[i][j] = solve(s, i + 1, j, t) + solve(s, i, j - 1, t) - solve(s, i + 1, j - 1, t);
    }

    return t[i][j];
}

long long int countPS(string str)
{
    //Your code here
    int n = str.length();
    long long int t[1000][1000];
    memset(t, -1, sizeof(t));
    return solve(str, 0, n - 1, t);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}