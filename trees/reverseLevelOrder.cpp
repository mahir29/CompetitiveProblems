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
    vector<int> v;

    if (A == NULL)
        return v;

    q.push(A);

    while (!q.empty())
    {
        TreeNode *curr = q.front();
        q.pop();

        v.push_back(curr->val);

        if (curr->right)
            q.push(curr->right);
        if (curr->left)
            q.push(curr->left);
    }

    reverse(v.begin(), v.end());

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