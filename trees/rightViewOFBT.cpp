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

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> solve(TreeNode *A)
{
    queue<TreeNode *> q;
    q.push(A);

    vector<int> v;

    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            TreeNode *current = q.front();
            q.pop();

            if (i == n - 1)
                v.push_back(current->val);

            if (current->left)
                q.push(current->left);
            if (current->right)
                q.push(current->right);
        }
    }

    return v;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}