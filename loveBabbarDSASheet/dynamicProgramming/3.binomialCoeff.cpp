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

int nCr(int n, int r)
{
    // code here
    if (r > n - r)
    {
        r = n - r;
    }

    int c[r + 1];

    memset(c, 0, sizeof(c));

    c[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = min(i, r); j > 0; j--)
        {
            c[j] = (c[j] + c[j - 1]) % 1000000007;
        }
    }

    return c[r];
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}