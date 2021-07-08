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

bool check(string &A, int i, int n, vector<int> &dp, unordered_set<string> &B)
{
    if (i == n)
        return 1;
    if (dp[i] != -1)
        return dp[i];
    for (int ptr = i; ptr < n; ptr++)
    {
        if (B.find(A.substr(i, ptr - i + 1)) != B.end() && check(A, ptr + 1, n, dp, B))
        {
            dp[i] = 1;
            return 1;
        }
    }
    dp[i] = 0;
    return 0;
}

int wordBreak(string A, vector<string> &B)
{
    int n = A.size();
    vector<int> dp(n, -1);

    unordered_set<string> hash;

    for (auto itr = B.begin(); itr != B.end(); itr++)
        hash.insert(*itr);

    return check(A, 0, n, dp, hash);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}
