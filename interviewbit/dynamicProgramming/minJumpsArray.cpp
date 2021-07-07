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

int solve(vi &A, int n)
{

    if (n <= 1)
        return 0;

    int steps = A[0];
    int jump = 1;
    int maxReach = A[0];

    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
            return jump;

        maxReach = max(maxReach, i + A[i]);

        steps--;

        if (steps == 0)
        {
            jump++;

            if (i >= maxReach)
                return -1;

            steps = maxReach - i;
        }
    }

    return -1;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}