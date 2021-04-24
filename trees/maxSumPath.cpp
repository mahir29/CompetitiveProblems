#include <bits/stdc++.h>
using namespace std;

struct treeNode{
    treeNode* left;
    treeNode* right;
    int val;
    treeNode():val(0),left(nullptr), right(nullptr){};
    treeNode(int x):val(x),left(nullptr),right(nullptr){};
    treeNode(int x,treeNode *left,treeNode* right):val(x),left(left),right(right){};
};

int findmaxutil(treeNode* root,int result){
    if(root==NULL)
    return;
    int left=findmaxutil(root->left,result);
    int right=findmaxutil(root->right,result);

    int ms=max(max(left,right)+root->val,root->val);
    int m21=max(ms,left+right+root->val);
    result=max(m21,result);
    return result;
}

int findmax(treeNode* root){
    int result=INT_MIN;
    findmaxutil(root,result);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
 