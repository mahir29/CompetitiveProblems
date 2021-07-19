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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<char> ans;

    int open,close;
    int topen=0;
    int tclose=0;

    for(int i=0;i<n;i++){
        if(s[i]=='(') open++;
        else close++;

        if(open>=close){
            if(topen<k/2 && s[i]=='('){
                ans.push_back(s[i]);
                topen++;
            }
            else if(tclose<k/2 && s[i]==')'){
                ans.push_back(s[i]);
                tclose++;
            }
        } 
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }

    return 0;
}