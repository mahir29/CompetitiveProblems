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

//merge two sorted arrays in O(1) space

void merge(int arr1[], int arr2[], int n, int m) {
	    
	    int j=0,i=0,k=n-1;
	    // code here
	    while(i<=k && j<m){
	        if(arr1[i]<arr2[j]){
	            i++;
	        }
	        else {
	            swap(arr2[j++],arr1[k--]);
	        }
	    }
	    
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	    
	}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}