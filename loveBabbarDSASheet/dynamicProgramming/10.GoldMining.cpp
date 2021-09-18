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


int solve(vector<vi> A){

    int rows=A.size();
    int cols=A[0].size();

    int ans=INT_MIN;

    int t[rows][cols];

    for(int i=cols-1;i>=0;i--){
        for(int j=0;j<rows;j++){
            int right=(i==cols-1)?0:t[i][j+1];

            int rightUp=(j==0||i==cols-1)?0:t[i-1][j+1];

            int rightDown=(j==rows-1||i==cols-1)?0:t[i+1][j+1];

            t[i][j]=A[i][j]+max(right,max(rightDown,rightUp));
        }
    }

    for(int i=0;i<rows;i++){
        ans=max(ans,t[i][0]);
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