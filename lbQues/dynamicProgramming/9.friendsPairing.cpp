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

int solve(int a[],int n){
    int t[n+1];

    t[0]=0;
    t[1]=1;
    t[2]=2;

    for(int i=3;i<n+1;i++){
        t[i]=t[i-1]+(i-1)*t[i-2];
    }

    return t[n];
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}