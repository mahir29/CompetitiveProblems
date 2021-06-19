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

vector<vector<int>> verticalOrderTraversal(TreeNode *A)
{
    vector<vector<int>> ans;
    if (!A)
        return ans;

    map<int, vector<int>> m;
    queue<pair<TreeNode *, int>> q;
    q.push({A, 0});
    while (q.size())
    {
        TreeNode* node=q.front().first;
        int pos=q.front().second;
        q.pop();

        m[pos].push_back(node->val);
        if (node->left)
            q.push({node->left, pos - 1});
        if (node->right)
            q.push({node->right, pos + 1});
    }

    for (auto it : m)
        ans.push_back(it.second);
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