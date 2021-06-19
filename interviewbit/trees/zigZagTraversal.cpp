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

vector<vector<int>> zigzagLevelOrder(TreeNode *A)
{
    vector<vector<int>> ans;
    vector<int> v;

    queue<TreeNode *> q;
    q.push(A);
    int i = 0;

    while (!q.empty())
    {
        int n = q.size();
        while (n--)
        {
            TreeNode *node = q.front();
            q.pop();
            v.push_back(node->val);

            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }

        if (i)
        {
            reverse(v.begin(), v.end());
            i = 0;
        }
        else
        {
            i = 1;
        }
        ans.push_back(v);
        v.clear();
    }

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