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

//find sum of all path nodes from root to leaf

int treeSum(TreeNode *A, int val)
{
    if (A == NULL)
    {
        return 0;
    }

    val = val * 10 + A->val;

    if (A->right == NULL && A->left == NULL)
    {
        return val;
    }

    return treeSum(A->left, val) + treeSum(A->right, val);
}

int sumNumbers(TreeNode *A)
{
    return treeSum(A, 0) % 1003;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}