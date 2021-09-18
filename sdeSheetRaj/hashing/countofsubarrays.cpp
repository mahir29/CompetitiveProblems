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

int solve(vi &a,int n,int b){
    unordered_map<int,int> mp;
    int x=0;
    int count=0;

    for(int i=0;i<n;i++){
        x=x^a[i];

        if(x==b) count++;

        if(mp.find(x^b)!=mp.end()){
            count+=mp[x^b];
        }

        mp[x]+=1;
    }

    return count;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}