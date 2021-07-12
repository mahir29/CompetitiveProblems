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

void bfs(int num, int A, int B, vector<int> &ans)
{
    queue<int> q;
    q.push(num);

    while (!q.empty())
    {
        int n = q.front();
        q.pop();

        if (n >= A && n <= B)
        {
            ans.push_back(n);
        }

        if (n == 0 || n > B)
        {
            continue;
        }

        int lastDigit = n % 10;

        int n1 = n * 10 + (lastDigit + 1);
        int n2 = n * 10 + (lastDigit - 1);

        if (lastDigit == 0)
        {
            q.push(n1);
        }
        else if (lastDigit == 9)
        {
            q.push(n2);
        }
        else
        {
            q.push(n1);
            q.push(n2);
        }
    }
}

vector<int> stepnum(int A, int B)
{
    vector<int> ans;

    for (int i = 0; i <= 9; i++)
    {
        bfs(i, A, B, ans);
    }

    sort(ans.begin(), ans.end());

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