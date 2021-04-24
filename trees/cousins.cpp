#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* right;
    node* left;
};

int find_height(node*root, int& parent,int a,int h){
    if(root==NULL)
    return 0;
    else if(root->data==a){
        return h;
    }
    else{
        parent=root->data;
        h++;
        int left=find_height(root->left,parent,a,h);
        int right= find_height(root->right,parent,a,h);
        if(left)
        return left;
        else
        return right;
    }
}

bool isCousins(node* root,int x,int y){
    if(root==NULL)
    return false;
    else if(root->data==x || root->data==y)
    return false;
    
    int xparent=-1;
    int yparent=-1;
    int height=0;
    int xheight=find_height(root,xparent,x,height);
    int yheight=find_height(root,yparent,y,height);

    if(xheight==yheight && xparent!=yparent)
    return true;
    else 
    return false;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        node* root;
        bool x=isCousins(root,x,y);
        cout<<x<<endl;
    }
    return 0;
}
 