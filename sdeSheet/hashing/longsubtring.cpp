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

int solve(string s){
    int len=0;
    int n=s.size();
    unordered_map<char,int> mp;

    int left=0;
    int right=0;

    while(right<n){
        if(mp[s[right]]!=-1) left=max(left,mp[s[right]]+1);

        mp[s[right]]=right;

        len=max(len,right-left+1);
        right++;
    }

    return len;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}