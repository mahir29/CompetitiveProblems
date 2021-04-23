#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* right;
    node* left;
};

int countNodes(node* root){
    if(!root)
            return 0;
        
        int left_levels = 1;
        node *l=root->left;
        while(l)
        {
            l=l->left;
            left_levels+=1;
        }
        int right_levels = 1;
        node *r = root->right;
        while(r)
        {
            r=r->right;
            right_levels+=1;
        }
        if(left_levels==right_levels)
            return pow(2,left_levels)-1;
        
        return 1+countNodes(root->left)+countNodes(root->right);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        node* root;
        
        cout<<"Number of modes"<<countNodes(root);
    }
    return 0;
}
 