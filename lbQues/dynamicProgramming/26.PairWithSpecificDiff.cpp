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

int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
{
    // Your code goes here
    sort(arr, arr + N);
    int dp[N];
    dp[0] = 0;

    for (int i = 1; i < N; i++)
    {
        dp[i] = dp[i - 1]; //not possible with previous

        if (arr[i] - arr[i - 1] < K)
        {
            if (i >= 2)
            {
                dp[i] = max(dp[i - 1], arr[i] + arr[i - 1] + dp[i - 2]);
            }
            else
            {
                dp[i] = max(dp[i - 1], arr[i] + arr[i - 1]);
            }
        }
    }

    return dp[N - 1];
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}