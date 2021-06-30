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

int uniquePath(vector<vector<int>>&v,int m ,int n){
    int t[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0) t[i][j]=1;
            else{
                t[i][j]=t[i-1][j]+t[i][j-1];
            }
        }
    }

    return t[m-1][n-1];
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}