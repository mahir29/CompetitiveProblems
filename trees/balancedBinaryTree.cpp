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

int height(TreeNode* A){
    if(A==NULL){
        return 0;
    }

    int l=height(A->left);
    int r=height(A->right);

    return 1+max(l,r);
}

int isBalanced(TreeNode* A) {
    if(A==NULL){
        return 1;
    }

    int l=height(A->left);
    int r=height(A->right);

    if(abs(l-r)<=1 && isBalanced(A->left) && isBalanced(A->right)){
        return 1;
    }

    return 0;
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}