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

vi solve(vi &a,int n){
    vi next(n,-1);
    stack<int> s;

    for(int i=0;i<=2*n-1;i++){
        
        while(!s.empty() && s.top()<a[i%n]){
            s.pop();
        }

        if(i<n){
            if(!s.empty()){
            next[i]=s.top();
        }
        }

        s.push(a[i%n]);

        return next;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}