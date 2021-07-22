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

vs solve(string s,int n){
    vs ans;

    for(int i=0;i<=2*n-1;i++){
        string res="";

        for(int j=0;j<n;j++){
            if(i&(1<<j)!=0){
                res+=s[i];
            }
        }

        ans.push_back(res);
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