#include<bits/stdc++.h>
using namespace std;


int dp[105][105][2];

int f(int n,int k,int first){

    if(n==0) return 0;
    if(n==1){
        if(k==0) return 1;
        else return 0;
    }

    int result;

    if(dp[n][k][first]!=-1)
    return dp[n][k][first];

    if(first==1){
        result=f(n-1,k-1,1)+f(n-1,k,0);
    }else{
        result=f(n-1,k,1)+f(n-1,k,0);
    }

    return dp[n][k][first]=result;
}

int main(){
    int t;
    cin>>t;
    memset(dp,-1,sizeof(dp));
    while(t--){
        int num,n,k;
        cin>>num>>n>>k;
        int ans=f(n,k,0)+f(n,k,1);
        cout<<num<<" "<<ans<<endl;
    }
    return 0;
}