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

int maxSubstring(string S)
{
    // Your code goes here
    int curr = 0;
    int omax = 0;

    for (int i = 0; i < S.size(); i++)
    {

        curr += (S[i] == '0') ? 1 : -1;

        omax = max(omax, curr);

        if (curr < 0)
        {
            curr = 0;
        }
    }

    return omax == 0 ? -1 : omax;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}