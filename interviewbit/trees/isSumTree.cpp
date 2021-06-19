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

struct Node
{
    int data;
    Node* left, * right;
}; 

// Should return true if tree is Sum Tree, else false
class Solution
{
    public:
    
    int sum(Node* root){
        
        if(root==NULL) return 0;
        
        int l=sum(root->left);
        int r=sum(root->right);
        
        return l+r+root->data;
    }
    
    bool isSumTree(Node* root)
    {
         // Your code here
         if(root==NULL) return 1;
         if(!root->left && !root->right) return 1;
         int l=sum(root->left);
         int r=sum(root->right);
         
         if(root->data==l+r && isSumTree(root->left) &&isSumTree(root->right))
            return 1;
            
        return 0;
        
    }
};

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}