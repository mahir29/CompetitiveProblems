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

void backtrack(vs &ans,string curr,int open,int close,int n){
    if(curr.length()==n*2){
        ans.push_back(curr);
    }

    if(open<n){
        curr.append("(");
        backtrack(ans,curr,open+1,close,n);
        curr = curr.substr(0, curr.size()-1);
    }

    if(close<open){
        curr.append(")");
        backtrack(ans,curr,open,close+1,n);
        curr = curr.substr(0, curr.size()-1);
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
    int n;
    cin>>n;
    vs ans;
    string curr;
    backtrack(ans,curr,0,0,n);

    for(auto it:ans){
        cout<<it<<endl;
    }

    return 0;
}