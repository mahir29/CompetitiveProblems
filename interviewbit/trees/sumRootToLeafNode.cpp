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

void util(TreeNode *A, int curr, int &res)

{

    if (A == NULL)
        return;

    curr = curr * 10 + A->val;
    curr %= 1003;
    if (!A->left && !A->right)
    {
        res += curr;
        res %= 1003;
        curr = 0;
        return;
    }

    util(A->left, curr, res);
    util(A->right, curr, res);
}

int sumNumbers(TreeNode *A)
{
    if (A == NULL)
    {
        return 0;
    }
    int res = 0;
    util(A, 0, res);

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