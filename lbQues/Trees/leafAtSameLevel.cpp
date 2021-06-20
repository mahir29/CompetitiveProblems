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
    Node* left;
    Node* right;
};

class Solution{
  public:
    /*You are required to complete this method*/
    
    bool solve(Node* root,int level,int &leaf){
        if(root==NULL) return 1;
        if(!root->left && !root->right){
            if(leaf==0){
                leaf=level;
                return 1;
            }
            else{
                if(level==leaf){
                    return 1;
                }
                else{
                    return 0;
                }
            }
        }
        
        bool l= solve(root->left,level+1,leaf);
        bool r=solve(root->right,level+1,leaf);
        
        return l&&r;
        
    }
    
    bool check(Node *root)
    {
        //Your code here
        int leaf=0;
        return solve(root,1,leaf);
    }
};

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}