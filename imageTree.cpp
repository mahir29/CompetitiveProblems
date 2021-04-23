#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* right;
    node* left;
};

void image(node* root){
    if(!root)
    return;
    
    node* temp;
    temp=root->left;
    root->left=root->right;
    root->right=temp;
    if(root->left)
    image(root->left);
    if(root->right)
    image(root->right);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        node* root;
        image(root);
    }
    return 0;
}
 