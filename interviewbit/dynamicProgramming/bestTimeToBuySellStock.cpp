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
    int sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (A[i + 1] > A[i])
        {
            sum += (A[i + 1] - A[i]);
        }
    }

    return sum;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}