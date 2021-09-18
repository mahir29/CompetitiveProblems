#include <bits/stdc++.h>
using namespace std;

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

long long countWays(int n, int k)
{
    // code here
    long long int t[n + 1];

    t[0] = 0;
    t[1] = k;

    if (n > 2)
        t[2] = k * k;

    for (int i = 3; i <= n; i++)
    {
        t[i] = ((k - 1) * (t[i - 1] + t[i - 2])) % 1000000007; //we have k-1 choices either for n-1th or n-2th element
    }

    return t[n] % 1000000007;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}