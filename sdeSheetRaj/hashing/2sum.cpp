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

vi solve(vi &a,int sum){
    unordered_map<int,int> mp;
    vi ans;

    for(int i=0;i<a.size();i++){
        int x=sum-a[i];
        if(mp.find(x)!=mp.end()){
            ans.push_back(mp[x]);
            ans.push_back(i);
            return ans;
        }
        mp[a[i]]=i;
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