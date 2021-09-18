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

struct node
{
    node *left;
    node *right;
    int val;
};

int solve(node* a,int B){
    queue<node*> q;
    q.push(a);

    unordered_map<int,int> mp;

    while(!q.empty()){
        node* current=q.front();
        q.pop();
        int x=B-current->val;
        if(x>=0){
            if(mp.find(x)!=mp.end()){
                return 1;
            }
        }
        mp[current->val]++;
        if(current->left) q.push(current->left);
        if(current->right) q.push(current->right);
    }

    return 0;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}