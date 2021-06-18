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

void solve(TreeNode* A,int B,int sum,vector<int> v,vector<vector<int>>&ans){
    if(A==NULL)
    return;

    sum+=A->val;
    v.push_back(A->val);

    if(A->left==NULL && A->right==NULL){
        if(sum==B){
            ans.push_back(v);
        }
    }

    solve(A->left,B,sum,v,ans);
    solve(A->right,B,sum,v,ans);
}

vector<vector<int> > pathSum(TreeNode* A, int B) {
    vector<vector<int>> ans;
    vector<int> v;
    solve(A,B,0,v,ans);
    return ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}