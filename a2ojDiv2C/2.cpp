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

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
    int n;
    cin>>n;
    string s;
    cin>>s;
    int open=0,close=0;
    bool flag=0;

    for(int i=0;i<n;i++){
        if(s[i]=='('){
            open++;
        }
        else{
            close++;
        }

        if(close>open && flag!=1){
            flag=1;
        }
        else if(close>open){
            flag=0;
            break;
        }
    }

    if(flag) cout<<"Yes";
    else cout<<"No";

    return 0;
}