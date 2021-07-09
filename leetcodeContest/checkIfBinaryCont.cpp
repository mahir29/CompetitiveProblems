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

class Solution {
public:
    bool checkOnesSegment(string s) {
    bool flag=false;
    int n=s.size();
        
    for(int i=1;i<n;i++){
        if(s[i]=='0'){
            flag=true;
        }
        
        if(s[i]=='1' && flag){
            return false;
        }
    }
        
    return true;
        
    }
};

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}