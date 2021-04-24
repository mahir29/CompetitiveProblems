#include<bits/stdc++.h>
using namespace std;

struct bstnode{
    int data;
    bstnode* right;
    bstnode* left;
};

bstnode* getnewnode(int data){
    bstnode* root=new bstnode();
    root->left=root->right=NULL;
    root->data=data;
    return root;
}

bstnode* insert(bstnode* root,int data){
    if(root==NULL){
        root=getnewnode(data);
    }
    else if(root->data<data){
        root->right=insert(root->right,data);
    }
    else{
        root->left=insert(root->left,data);
    }
    return root;
}

bool search(bstnode* root,int n){
    if(root==NULL)return false;
    else if(root->data==n)return true;
    else if(root->data<=n){
        return search(root->right,n);
    }
    else
    return search(root->left,n);
}

int main(){
    bstnode* root=NULL;
    root=insert(root,20);
    root=insert(root,22);
    root=insert(root,18);
    root=insert(root,17);
    root=insert(root,13);
    int n;
    cout<<"Enter the number";
    cin>>n;
    if(search(root,n))cout<<"Number found";
    else
    cout<<"Number not found";
    return 0;
}