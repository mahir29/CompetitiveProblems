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


int Solution::solve(string A) {
    map<char,int> m;
    
    for(int i=0;i<A.size();i++){
        m[A[i]]++;
    }
    
    int n=A.size();
    
    bool f=0;
    
    for(auto it:m){
        if(it.second%2!=0 && n%2!=0 && f==1){
            return 0;
        }
        else if(it.second%2!=0 && n%2!=0 && f==0){
            f=1;
        }
        else if(it.second%2!=0){
            return 0;
        }
    }
    
    return 1;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}