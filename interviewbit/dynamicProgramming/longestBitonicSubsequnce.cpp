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

int longestSubsequenceLength(const vector<int> &A)
{
    int n = A.size();

    if (n == 0)
        return 0;
    vector<int> lis(n, 1);
    vector<int> lds(n, 1);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (A[i] > A[j] && lis[i] <= lis[j])
            {
                lis[i] = lis[j] + 1;
            }
        }
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (A[i] > A[j] && lds[i] <= lds[j])
            {
                lds[i] = lds[j] + 1;
            }
        }
    }

    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, lis[i] + lds[i] - 1);
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