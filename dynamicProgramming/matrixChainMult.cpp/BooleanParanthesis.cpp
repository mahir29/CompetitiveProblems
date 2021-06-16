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

unordered_map<string, int> m;

int solve(string s, int i, int j, bool isTrue)
{
    if (i > j)
    {
        return 0;
    }

    if (i == j)
    {
        if (isTrue == true)
        {
            return s[i] == true;
        }
        else
        {
            return s[i] == false;
        }
    }

    string temp = to_string(i);
    temp.append(" ");
    temp.append(to_string(j));
    temp.append(" ");
    temp.append(to_string(isTrue));

    if (m.find(temp) != m.end())
    {
        return m[temp];
    }

    int ans = 0;

    for (int k = i + 1; k <= j - 1; k += 2)
    {
        int lt = solve(s, i, k - 1, true);
        int lf = solve(s, i, k - 1, false);
        int rt = solve(s, k + 1, j, true);
        int rf = solve(s, k + 1, j, false);

        if (s[k] == '&')
        {
            if (isTrue)
            {
                ans += lt * rt;
            }
            else
            {
                ans += lt * rf + lf * rf + lf * rt;
            }
        }
        else if (s[k] == '|')
        {
            if (isTrue)
            {
                ans += lt * rt + rt * lf + lt * rf;
            }
            else
            {
                ans += lf * rf;
            }
        }
        else if (s[k] == '^')
        {
            if (isTrue)
            {
                ans += lf * rf + lt * rt;
            }
            else
            {
                ans += lf * rt + lt * rf;
            }
        }
    }

    return m[temp] = ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
    string s;
    int n;
    m.clear();
    cout << solve(s, 0, n - 1, true);

    return 0;
}