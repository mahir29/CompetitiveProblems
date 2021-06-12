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

int coinChange(int a[],int n,int sum){
    int t[n+1][sum+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(j%sum==0){
                t[i][j]=j/sum;
            }
            else if(i==0 && j==0){
                t[i][j]=INT_MAX-1;
            }
            else if(i==0){
                t[i][j]=INT_MAX-1;
            }
            else if(j==0){
                t[i][j]=0;
            }
        }
    }

    for(int i=2;i<n+1;i++){
        for(int j=2;j<sum+1;j++){
            if(a[i-1]<=sum){
                t[i][j]=min(1+t[i][j-a[i-1]],t[i-1][j]);
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }

    return t[n][sum];
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}