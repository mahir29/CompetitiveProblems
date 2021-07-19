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

void setZeroes(vector<vector<int>> &A)
{

    bool col = true, row = true;
    int r = A.size();
    int c = A[0].size();

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == 0 && A[i][j] == 0)
                row = false;

            if (j == 0 && A[i][j] == 0)
                col = false;

            if (A[i][j] == 0)
            {
                A[i][0] = 0;
                A[0][j] = 0;
            }
        }
    }

    for (int i = 1; i < r; i++)
    {
        for (int j = 1; j < c; j++)
        {
            if (A[i][0] == 0 || A[0][j] == 0)
            {
                A[i][j] = 0;
            }
        }
    }

    if (row == false)
    {
        for (int i = 0; i < c; i++)
        {
            A[0][i] = 0;
        }
    }

    if (col == false)
    {
        for (int i = 0; i < r; i++)
        {
            A[i][0] = 0;
        }
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