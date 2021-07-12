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

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

int countNodes(ListNode *root)
{
    int count = 0;
    ListNode *temp = root;
    while (temp)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

TreeNode *solve(ListNode **head, int n)
{
    if (n <= 0)
        return NULL;

    TreeNode *l = solve(head, n / 2);

    TreeNode *root = new TreeNode((*head)->val);
    root->left = l;

    (*head) = (*head)->next;

    root->right = solve(head, n - (n / 2) - 1);

    return root;
}

TreeNode *sortedListToBST(ListNode *A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = countNodes(A);
    return solve(&A, n);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}