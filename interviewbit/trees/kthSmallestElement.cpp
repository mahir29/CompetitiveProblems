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

int kthsmallest(TreeNode *A, int B)
{

    priority_queue<int> pq;
    queue<TreeNode *> q;
    q.push(A);

    while (!q.empty())
    {
        TreeNode *node = q.front();
        q.pop();
        pq.push(node->val);
        if (pq.size() > B)
        {
            pq.pop();
        }
        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }

    return pq.top();
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}