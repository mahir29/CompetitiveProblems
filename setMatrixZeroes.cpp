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

void solve(vector<vi> &mat){
    int r=mat.size();
    int c=mat[0].size();
    bool col=true;

    for(int i=0;i<r;i++){
        if(mat[i][0]==0) col=false;
        for(int j=1;j<c;j++){
            if(mat[i][j]==0){
                mat[i][0]=0;
                mat[0][j]=0;
            }
        }
    }

    for(int i=r-1;i>=0;i--){
        for(int j=c-1;j>=0;j--){
            if(mat[i][0]==0 || mat[0][j]==0) mat[i][j]=0;
        }
        if(col==false){
             mat[i][0]=0;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}