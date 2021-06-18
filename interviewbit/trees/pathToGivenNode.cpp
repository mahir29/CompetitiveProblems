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

bool sol(TreeNode *root, int B, vector<int> &v)
{

    if (root == NULL)
    {
        return false;
    }

    if (root->val == B)
    {
        v.push_back(root->val);
        return true;
    }

    bool l = sol(root->left, B, v);
    bool r = sol(root->right, B, v);

    if (l || r)
    {
        v.push_back(root->val);
        return true;
    }

    return false;
}

vector<int> Solution::solve(TreeNode *A, int B)
{
    vector<int> v;
    bool f = sol(A, B, v);
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