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

void solve(TreeNode* A,int &ans,int curr){
    if(A==NULL){
        return ;
    }

    curr++;

    if(A->left==NULL && A->right==NULL){
        ans=min(ans,curr);
    }

    solve(A->left,ans,curr);
    solve(A->right,ans,curr);
}

int minDepth(TreeNode* A) {
    int ans=INT_MAX;
    solve(A,ans,0);
    return ans;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}