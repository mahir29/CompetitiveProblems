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

int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
        int count=0;
        
        for(int i=0;i<n;i++){
            count+=m[k-arr[i]];
            
            if(k-arr[i]==arr[i]){
                count--;
            }
        }
        
        return count/2;
    }

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}