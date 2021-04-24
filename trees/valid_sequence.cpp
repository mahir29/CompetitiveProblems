#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* right;
    node* left;
};

bool search(node* root,vector<int> a,int n,int pos){
    if(root==NULL)
    return false;
    else if(pos==n)
    return false;
    else if(root->data!=a[pos])
    return false;
    else if(pos==n-1 && !root->left && !root->right)
    return true;
   
    return search(root->left,a,n,pos+1) || search(root->right,a,n,pos+1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> a(n);
    node* root;
    bool ans;
    ans=search(root,a,n,0);
    cout<<ans<<endl;
    return 0;
}