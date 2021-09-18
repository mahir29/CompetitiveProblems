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

struct TreeLinkNode
{
    int val;
    TreeLinkNode *left, *right, *next;
    TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

void connect(TreeLinkNode *A)
{
    queue<TreeLinkNode *> q;
    q.push(A);

    while (!q.empty())
    {
        int n = q.size();
        while (n)
        {
            TreeLinkNode *node = q.front();
            q.pop();
            if (n == 1)
            {
                node->next = NULL;
            }
            else
            {
                node->next = q.front();
            }
            n--;
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
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