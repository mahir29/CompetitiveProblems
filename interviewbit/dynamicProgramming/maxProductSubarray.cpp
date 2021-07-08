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

//negcuurent keep track of min neg that
// can become max pos if multiplied with another pos number

int maxProduct(const vector<int> &A)
{
    int n = A.size();
    if (n == 0)
        return 0;
    int currentmax = A[0];
    int negcurrent = A[0];
    int overallmax = A[0];

    for (int i = 1; i < n; i++)
    {
        int temp = currentmax;
        currentmax = max(max(currentmax * A[i], negcurrent * A[i]), A[i]);
        negcurrent = min(A[i], min(temp * A[i], negcurrent * A[i]));
        overallmax = max(currentmax, overallmax);
    }

    return overallmax;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}