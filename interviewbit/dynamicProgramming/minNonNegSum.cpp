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

//Min non-neg sum req after flipping the sign will be equal to total_sum/2
//indirectly we will calc min elements to get sum total_sum/2

int solve(const vector<int> &A)
{
    int sum = 0;
    for (int i = 0; i < A.size(); i++)
        sum += A[i];
    sum /= 2;
    vector<int> dp(sum + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = sum; j >= A[i]; j--)
        {
            if (dp[j - A[i]] != INT_MAX)
                dp[j] = min(dp[j], dp[j - A[i]] + 1);
        }
    }
    for (int i = sum; i >= 0; i--)
    {
        if (dp[i] != INT_MAX)
            return dp[i];
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