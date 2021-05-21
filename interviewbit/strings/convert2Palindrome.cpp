#include<bits/stdc++.h>
using namespace std;
int solve(string A) {
    string B=A;
    reverse(B.begin(),B.end());
    bool f=0;
    int n=A.size(); 
    
    if(n%2!=0 && A==B)
    return 1;
    
    int start=0,end=n-1;
    while(start<=end){
        if(A[start]!=A[end] && f==0){
            f=1;
            if(A[start]==A[end-1])
            end--;
            else if(A[start+1]==A[end])
            start++;
            else
            return 0;
        }
        else if(f==1 && A[start]!=A[end]){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    
    return 1;
}
