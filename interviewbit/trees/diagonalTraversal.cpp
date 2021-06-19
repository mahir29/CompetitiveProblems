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
    vi ans;
    deque<TreeNode *> dq;

    if (!A)
        return ans;

    dq.push_front(A);

    while (!dq.empty())
    {
        TreeNode *cur = dq.front();
        dq.pop_front();

        ans.push_back(cur->val);

        if (cur->left)
            dq.push_back(cur->left);

        if (cur->right)
            dq.push_front(cur->right);
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}