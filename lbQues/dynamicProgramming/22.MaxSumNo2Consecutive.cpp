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

int sum[101];

int solve(int a[], int n)
{

    if (n == 0)
        sum[n] = 0;

    if (n == 1)
        sum[n] = a[0];

    if (n == 2)
        sum[n] = a[0] + a[1];

    if (sum[n] != -1)
    {
        return sum[n];
    }

    sum[n] = max(solve(a, n - 1), max(a[n - 1] + solve(a, n - 2), a[n - 1] + a[n - 2] + solve(a, n - 3)));

    return sum[n];
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
    memset(sum, -1, sizeof(sum));

    return 0;
}