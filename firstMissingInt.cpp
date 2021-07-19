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


int firstMissingPositive(vector<int> &A) {
    int n=A.size();

    for(int i=0;i<A.size();i++){
        if(A[i]>0 && A[i]<n){
            int pos=A[i]-1;
            if(A[i]!=A[pos]){
                swap(A[i],A[pos]);
                i--;
            }
        }

    }

    for(int i=0;i<n;i++){
        if(A[i]!=i+1) return (i+1);
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}