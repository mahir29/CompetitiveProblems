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

vector<TreeNode *> solve(int start, int end)
{
    vector<TreeNode *> ans;

    if (start > end)
    {
        ans.push_back(NULL);
        return ans;
    }

    for (int i = start; i <= end; i++)
    {
        vector<TreeNode *> leftNodes = solve(start, i - 1); //find all possible arrangement of left subtree
        vector<TreeNode *> rightNodes = solve(i + 1, end); //find all possible arrangement of right subtree

        for (int k = 0; k < leftNodes.size(); k++) //form all possible pairs of left and right subtree
        {
            TreeNode *l = leftNodes[k];
            for (int j = 0; j < rightNodes.size(); j++)
            {
                TreeNode *r = rightNodes[j];
                TreeNode *root = new TreeNode(i);
                root->left = l;
                root->right = r;
                ans.push_back(root);
            }
        }
    }

    return ans;
}

vector<TreeNode *> generateTrees(int A)
{

    vector<TreeNode *> res = solve(1, A);
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