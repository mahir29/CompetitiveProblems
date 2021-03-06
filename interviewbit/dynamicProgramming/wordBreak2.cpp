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

void construct(string &A, unordered_set<string> &B, vector<string> &res, vector<string> &temp, int i, int n)
{
    if (i >= n)
    {
        string s = "";
        for (int k = 0; k < temp.size() - 1; k++)
        {
            s += temp[k];
            s += ' ';
        }
        s += temp[temp.size() - 1];
        res.push_back(s);
        return;
    }

    for (int j = i; j < n; j++)
    {
        string c = A.substr(i, j - i + 1);
        if (B.find(c) != B.end())
        {
            temp.push_back(c);
            construct(A, B, res, temp, j + 1, n);
            temp.pop_back();
        }
    }
}

vector<string> wordBreak(string A, vector<string> &B)
{
    unordered_set<string> dict;

    for (int i = 0; i < B.size(); i++)
    {
        dict.insert(B[i]);
    }

    vector<string> res;
    vector<string> temp;
    int n = A.size();

    construct(A, dict, res, temp, 0, n);

    return res;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}