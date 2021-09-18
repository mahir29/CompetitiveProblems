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


struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


TreeNode* solve(TreeNode* A) {
    
    if(A==NULL)
        return NULL;
    
    A->left = solve(A->left);
    A->right = solve(A->right);
    
    if(A->left==NULL&&A->right==NULL)
        return A;
    if(!A->left){
        TreeNode* node = A->right;
        free(A);
        return node;
    }
    if(!A->right){
        TreeNode* node = A->left;
        free(A);
        return node;
    }
    return A;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}