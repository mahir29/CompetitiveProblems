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

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int isBST(node* node)
{
    return(isBSTUtil(node, INT_MIN, INT_MAX));
}
 

int isBSTUtil(node* node, int min, int max)
{
 
    if (node==NULL)
        return 1;
             

    if (node->data < min || node->data > max)
        return 0;

    return
        isBSTUtil(node->left, min, node->data-1) && 
        isBSTUtil(node->right, node->data+1, max); 
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}