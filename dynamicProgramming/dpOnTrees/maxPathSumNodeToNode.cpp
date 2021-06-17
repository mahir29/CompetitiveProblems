#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ull unsigned long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define vp vector<pii>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define mii map<int,int>
#define w(x) int x; cin>>x; while(x--)

struct node
{
    node *left;
    node *right;
    int val;
};

int solve(node *root, int &res)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = solve(root->left, res);
    int r = solve(root->right, res);

    int temp = max(max(l, r) + root->val,root->val);
    int ans = max(temp, root->val + l + r);
    res = max(res, ans);

    return temp;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
    node *root;
    int res;

    cout << solve(root, res) << endl;

    return 0;
}