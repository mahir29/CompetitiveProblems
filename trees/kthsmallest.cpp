#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* right;
    node* left;
};

int small(node* root,int x){
    if(root==NULL)
    return 0;
    
    int left=small(root->left,x);
    if(left)
    return left;

    x-=1;
    if(x==0)
    return root->data;
    int right=small(root->right,x);
    return right;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        node* root;
        int x;
        cin>>x;
        int y=small(root,x);
        cout<<y<<endl;
    }
    return 0;
}
 