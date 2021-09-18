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

class node
{
public:
    int data;
    node *left, *right;
};

int solve(node *root)
{
    if (root == NULL)
        return 0;

    int excl = solve(root->left) + solve(root->right); //when root node is not included

    int incl = 1; //when root node is included so check its grandchildren

    if (root->left)
    {
        incl += solve(root->left->left) + solve(root->left->right);
    }

    if (root->right)
    {
        incl += solve(root->right->left) + solve(root->right->right);
    }

    return max(incl, excl);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}