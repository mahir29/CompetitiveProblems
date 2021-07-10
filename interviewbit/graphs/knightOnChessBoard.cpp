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

bool inRec(int x, int y, int A, int B)
{
    if (x <= 0 || y <= 0 || x > A || y > B)
        return false;
    return true;
}

struct cell
{
    int x, y;
    int dis;
    cell() {}
    cell(int x, int y, int dis)
        : x(x), y(y), dis(dis)
    {
    }
};

int knight(int A, int B, int C, int D, int E, int F)
{
    int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
    queue<cell> q;
    q.push(cell(C, D, 0));
    bool v[A + 1][B + 1];
    memset(v, false, sizeof(v));
    v[C][D] = true;

    while (!q.empty())
    {
        cell t = q.front();
        q.pop();

        if (t.x == E && t.y == F)
        {
            return t.dis;
        }

        for (int i = 0; i < 8; i++)
        {
            int a = t.x + dx[i];
            int b = t.y + dy[i];

            if (!v[a][b] && inRec(a, b, A, B))
            {
                v[a][b] = true;
                q.push(cell(a, b, t.dis + 1));
            }
        }
    }

    return -1;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}