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

int canJump(vector<int> &A) {
    int n=A.size();
    vector<bool> dp(n,false); //dp[i] tells if it is possible to reach ith index anyhow 

    dp[0]=true;

    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(dp[j] && j+A[j]>=i){
                dp[i]=true;
                break;
            }
        }
    }

    return dp[n-1];
}

//-------------------------------------OR----------------------------------------------

int solve(vector<int> A){
    int n=A.size();
    vector<int> dp(n); //dp[i] tells the maximum index we can reach from i

    dp[n-1]=n-1;

    for(int i=n-2;i>=0;i--){
        if(i+A[i]>=n-1){
            dp[i]=n-1;
            continue;
        }
        dp[i]=i+A[i];
        for(int j=i+1;j<=i+A[i];j++){
            dp[i]=max(dp[i],dp[j]);
        }
    }

    if(dp[0]==n-1) return 1;
    else return 0;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}