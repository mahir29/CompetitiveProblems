#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(int node,int parent,vector<vector<int>> &arr,int &ans){
    int cnt = 1;

    for(auto it: arr[node]){
        if(it != parent){
           cnt += solve(it,node,arr,ans);
        }
    }

    if( node != 0){
        ans += (cnt+4)/5;
    }

    return cnt;
}

int main() {
	// your code goes here
	vector<int> A = {1,1,1,9,9,9,9,7,8};
	vector<int> B = {2,0,3,1,6,5,4,0,0};
	int n = A.size();
	vector<vector<int>> arr(n+1);
	for(int i = 0;i<n;i++){
	    int x = A[i];
	    int y = B[i];
	    arr[x].push_back(y);
	    arr[y].push_back(x);
	    
	}
	int ans = 0;
	solve(0,-1,arr,ans);
	cout << ans;
  	
	return 0;
}