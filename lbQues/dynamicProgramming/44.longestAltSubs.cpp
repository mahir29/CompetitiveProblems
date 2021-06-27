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

int AlternatingaMaxLength(vector<int> &nums)
{
    // Code here
    int inc = 1;
    int dec = 1;

    for (int i = 1; i < nums.size(); i++)
    {

        if (nums[i] > nums[i - 1])
        {
            inc = dec + 1;
        }

        if (nums[i] < nums[i - 1])
        {
            dec = inc + 1;
        }
    }

    return max(inc, dec);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}