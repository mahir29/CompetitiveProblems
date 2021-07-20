#include<bits/stdc++.h>
using namespace std;

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

int solve(vi &a,int n){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }

    int ans=0;
    for(int i=0;i<n;i++){
        if(!s.count(a[i]-1)){
            int cnum=a[i];
            int curr=1;
            while(s.count(cnum+1)){
                curr++;
                cnum++;
            }
            ans=max(ans,curr);
        }
    }

    return ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}