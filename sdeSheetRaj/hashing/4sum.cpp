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

vector<vi> solve(vi &a,int sum){
    int n=a.size();
    vector<vi> ans;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int l=j+1;
            int r=n-1;
            while(l<r){
                if(a[i]+a[j]+a[l]+a[r]<sum){
                    l++;
                }
                else if(a[i]+a[j]+a[l]+a[r]>sum){
                    r--;
                }
                else{
                    vi quad;
                    quad.push_back(a[i]);
                    quad.push_back(a[j]);
                    quad.push_back(a[l]);
                    quad.push_back(a[r]);
                    ans.push_back(quad);
                }
            }
        }
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