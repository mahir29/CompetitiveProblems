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

struct meet
{
    int start;
    int end;
    int pos;
};

bool compare(meet m1, meet m2)
{
    if (m1.end < m2.end)
        return true;
    else if (m1.end > m2.end)
        return false;
    else if (m1.pos < m2.pos)
        return true;
    return false;
}

vi solve(vi &s, vi &e, int n)
{
    meet m[n];
    vi ans;
    for (int i = 0; i < n; i++)
    {
        m[i].start = s[i];
        m[i].end = e[i];
        m[i].pos = i;
    }

    sort(m, m + n, compare);
    int limit = m[0].end;
    ans.push_back(m[0].pos);

    for (int i = 1; i < n; i++)
    {
        if (limit < m[i].start)
        {
            ans.push_back(m[i].pos);
            limit = m[i].end;
        }
    }

    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}