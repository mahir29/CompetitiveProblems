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

vector<vector<vector<bool>>> dp;
vector<int> original;
vector<int> res;
int n;

bool possible(int index, int reqSum, int size)
{
    if (size == 0)
    {
        return (reqSum == 0);
    }

    if (index >= n)
    {
        return false;
    }

    if (dp[index][reqSum][size] == false)
    {
        return false;
    }

    if (reqSum >= original[index])
    {
        res.push_back(original[index]);

        if (possible(index + 1, reqSum - original[index], size - 1))
        {
            return true;
        }

        res.pop_back();
    }

    if (possible(index + 1, reqSum, size))
    {
        return true;
    }

    return dp[index][reqSum][size] = false;
}

vector<vector<int>> avgset(vector<int> &A)
{
    sort(A.begin(), A.end());
    original.clear();
    dp.clear();
    res.clear();
    original = A;
    n = A.size();
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }

    dp.resize(n, vector<vector<bool>>(sum + 1, vector<bool>(n, true)));

    for (int i = 1; i < n; i++)
    {
        if ((sum * i) % n != 0)
            continue;

        int s = (sum * i) / n;

        if (possible(0, s, i))
        {
            int ptr1 = 0, ptr2 = 0;
            vector<int> res1 = res;
            vector<int> res2;

            while (ptr1 < n || ptr2 < res.size())
            {
                if (ptr2 < res.size() && res[ptr2] == A[ptr1])
                {
                    ptr1++;
                    ptr2++;
                    continue;
                }
                res2.push_back(A[ptr1]);
                ptr1++;
            }
            vector<vector<int>> ans;
            ans.push_back(res1);
            ans.push_back(res2);
            return ans;
        }
    }

    vector<vector<int>> ans;
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