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

void solve(string &str, vs &ans, int n, int i)
{
    if (i == n)
    {
        ans.push_back(str);
    }

    for (int j = i; j < n; j++)
    {
        swap(str[j], str[i]);
        solve(str, ans, n, i + 1);
        swap(str[j], str[i]);
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
    string str;
    cin >> str;
    vs ans;
    int n = str.size();
    solve(str, ans, n, 0);

    return 0;
}