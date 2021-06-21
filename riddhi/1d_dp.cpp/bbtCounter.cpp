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

int count (int h){
    int t[h+1];

    t[0]=1;
    t[1]=1;

    for(int i=2;i<h+1;i++){
        t[i]=t[i-1]*t[i-1]+2*t[i-1]*t[i-2];
    }

    return t[h];
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}