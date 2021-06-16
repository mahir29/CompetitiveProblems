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

int t[1001][1001];

int solve(int a[],int i,int j){

    if(i>=j)
        return 0;

    if(t[i][j]!=-1){
        return t[i][j];
    }

    int mn=INT_MIN;

    for(int k=1;k<=j-1;j++){
        int temp=solve(a,i,k)+solve(a,k+1,j)+a[i-1]*a[k]*a[j];
        if(temp<mn){
            mn=temp;
        }
    }

    return t[i][j]=mn;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
    memset(t,-1,sizeof(t));
    int a[5];
    int n;
    cout<<solve(a,1,n-1);

    return 0;
}