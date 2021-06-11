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

//return max_sum of k consecutive elements in an array

int slidingWindow(vi v, int n, int k)
{
    int current_sum = 0;

    for (int i = 0; i < k; i++)
    {
        current_sum += v[i];
    }

    int window_sum = current_sum;

    for (int i = k; i < n; i++)
    {
        window_sum = window_sum + v[i] - v[i - k];
        current_sum = max(current_sum, window_sum);
    }

    return current_sum;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}