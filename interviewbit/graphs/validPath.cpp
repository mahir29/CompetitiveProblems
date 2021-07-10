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

bool inCircle(int x, int y, int r, vector<int> &E, vector<int> &F)
{
    int n = E.size();
    for (int i = 0; i < n; i++)
    {
        if ((x - E[i]) * (x - E[i]) + (y - F[i]) * (y - F[i]) <= r * r)
        {
            return true;
        }
    }
    return false;
}

bool inRec(int x, int y, int A, int B)
{
    if (x < 0 || y < 0 || y > B || x > A)
    {
        return false;
    }
    return true;
}

string solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F)
{
    int v[A + 1][B + 1];
    memset(v, false, sizeof(v));
    if (inCircle(0, 0, D, E, F))
    {
        return "NO";
    }
    v[0][0] = 1;
    int dirx[8] = {1, 1, 1, -1, -1, -1, 0, 0};
    int diry[8] = {-1, 1, 0, 1, -1, 0, -1, 1};

    queue<pair<int, int>> q;
    q.push({0, 0});

    while (!q.empty())
    {
        pair<int, int> t = q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int tx = t.first + dirx[i];
            int ty = t.second + diry[i];
            if (!v[tx][ty] && inRec(tx, ty, A, B) && !inCircle(tx, ty, D, E, F))
            {
                v[tx][ty] = true;
                q.push({tx, ty});
            }
        }
    }

    if (v[A][B])
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}