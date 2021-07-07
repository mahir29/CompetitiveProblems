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

bool solve(vector<int> A)
{
    int n = A.size();
    int mn = n - 1;

    for (int i = n - 2; i >= 0; i--)
    {
        bool ispos = false;
        if (i + A[i] >= mn)
        {
            mn = i;       //update the minimum index that we have to reach from a certain i
            ispos = true; //keep track if it is possible to reach mn from certain i
        }
        if (i == 0)
            return ispos; //return if it possible to reach min index from beginning
    }

    return true;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}