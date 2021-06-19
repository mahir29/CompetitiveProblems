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

bool isFind(TreeNode *A, int B)
{
    if (A == NULL)
        return 0;

    if (A->val == B)
    {
        return 1;
    }

    return isFind(A->left, B) || isFind(A->right, B);
}

TreeNode *find(TreeNode *A, int B, int C)
{
    if (A == NULL)
        return NULL;
    if (A->val == B || A->val == C)
        return A;

    TreeNode *left = find(A->left, B, C);
    TreeNode *right = find(A->right, B, C);

    if (left && right)
        return A; //check if both values are present on opposite side of root

    return left ? left : right;
}

int lca(TreeNode *A, int B, int C)
{

    if (!isFind(A, B) || !isFind(A, C))
        return -1;
    TreeNode *ans = find(A, B, C);
    if (!ans)
        return -1;
    return ans->val;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}