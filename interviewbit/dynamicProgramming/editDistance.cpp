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

int lcs(string A,string B){
    int n=A.size();
    int m=B.size();

    int t[n+1][m+1];

    for(int i=0;i<n+1;i++){
        t[i][0]=i;
    }

    for(int j=0;j<m+1;j++){
        t[0][j]=j;   
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(A[i-1]==B[j-1]){
                t[i][j]=t[i-1][j-1];
            }
            else{
                t[i][j]=1+min(t[i-1][j-1],min(t[i-1][j],t[i][j-1]));
            }
        }
    }

    return t[n][m];
}


int minDistance(string A, string B) {
    int x=lcs(A,B);
    return x;
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}