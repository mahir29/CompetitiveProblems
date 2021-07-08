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

int maxProfit(const vector<int> &A)
{
    int n = A.size();
    int minVal = A[0];
    if (n <= 1)
        return 0;
    int ans = 0;

    for (int i = 1; i < n; i++)
    {
        int diff = A[i] - minVal;
        ans = max(ans, diff);
        if (A[i] < minVal)
            minVal = A[i];
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