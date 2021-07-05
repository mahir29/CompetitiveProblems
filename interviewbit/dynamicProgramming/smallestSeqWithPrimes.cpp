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

vi solve(int a, int b, int c, int d)
{
    vi ans;
    int na = a, nb = b, nc = c;
    int ia = 0, ib = 0, ic = 0;

    for (int i = 0; i < d; i++)
    {
        ans.push_back(min(na, min(nb, nc)));

        if (ans[i] == na)
        {
            na = ans[ia++] * a;
        }
        if (ans[i] == nb)
        {
            na = ans[ib++] * b;
        }
        if (ans[i] == nc)
        {
            na = ans[ic++] * c;
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