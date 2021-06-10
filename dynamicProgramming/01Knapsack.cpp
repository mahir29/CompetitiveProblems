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

//top down method to solve dp problem



int knapsack(int w[],int v[],int n,int wt){

    int t[n+1][wt+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<wt+1;j++){
            if(i==0||j==0)
            t[i][j]=0;
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<wt+1;j++){

            if(w[i-1]<=wt){
                t[i][j]=max(v[i-1]+t[i-1][j-w[i-1]],t[i-1][j]);
            }
            else{
                t[i][j]=t[i-1][j];
            }
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