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

int solve(int a[], int n)
{
    int cur = INT_MAX;
    int omin = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (cur > 0)
        {
            cur = a[i];
        }
        else
        {
            cur += a[i];
        }

        omin = min(cur, omin);
    }

    return omin;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}