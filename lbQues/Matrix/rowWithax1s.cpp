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

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int mx=INT_MIN;
	    int count;
	    int ans=-1;
	    for(int i=0;i<n;i++){
	        count=0;
	        for(int j=0;j<m;j++){
	            if(arr[i][j]){
	                count++;
	            }
	        }
	        if(count>mx && count>0){
    	        mx=max(mx,count);
    	        if(mx==count){
    	            ans=i;
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