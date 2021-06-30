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

int solve(vector<vi> v,int m,int n){
    bool flag=false;
    int t[m][n];

    for(int i=0;i<m;i++){
        if(v[i][0]==1){
            flag=true;
        }
        if(flag){
            t[i][0]=0;
        }
        else{
            t[i][0]=1;
        }
    }

    for(int i=0;i<n;i++){
        if(v[i][0]==1){
            flag=true;
        }
        if(flag){
            t[0][i]=0;
        }
        else{
            t[0][i]=1;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]==1) t[i][j]=0;
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