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

//convert matrix into histograms formed rowwise

int solve(vector<vi> &matrix)
{
    int mx = 0;
    int r = matrix.size();
    int c = matrix[0].size();
    vector<vi> dp(r + 1, vi(c));

    for (int i = 1; i <= r; i++)
    {
        vector<int> left(c), right(c);
        stack<int> s;
        int leftbound = -1;

        for (int j = 0; j < c; j++)
        { //find the left limit for each bar
            if (matrix[i][j] == 1)
            {
                matrix[i][j] = 1 + matrix[i - 1][j];
                while (!s.empty() && matrix[i][s.top()] >= matrix[i][j])
                {
                    s.pop();
                }
                int val = leftbound;
                if (!s.empty())
                {
                    val = max(val, s.top());
                }
                left[j] = val;
            }
            else
            {
                leftbound = j;
                left[j] = 0;
            }
            s.push(j);
        }

        while (!s.empty())
        { //empty the stack
            s.pop();
        }

        int rightbound = c;
        for (int j = c - 1; j >= 0; j--)
        { //find the right limit for each bar
            if (matrix[i][j] == 1)
            {
                matrix[i][j] = 1 + matrix[i - 1][j];
                while (!s.empty() && matrix[i][s.top()] >= matrix[i][j])
                {
                    s.pop();
                }
                int val = rightbound;
                if (!s.empty())
                {
                    val = min(val, s.top());
                }
                s.push(j);
                dp[i][j] = matrix[i][j] * ((val - 1) - (left[j] + 1) + 1);
                mx = max(mx, dp[i][j]);
            }
            else
            {
                rightbound = j;
                dp[i][j] = 0;
            }
        }
    }

    return mx;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}