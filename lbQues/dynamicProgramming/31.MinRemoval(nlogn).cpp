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

int solve(int a[],int key,int i,int n,int k){
    int start=i+1;
    int end=n-1;

    int j;

    while(start<end){
        int mid=start+(end-start)/2;
        if(a[mid]-key<=k){
            j=mid;
            start=mid+1;
        }
        else{
            end=mid;
        }
    }

    return j;
}

int ans(int a[],int n,int k){

    int ans=INT_MAX;
    int mx;

    sort(a,a+n);

    for(int i=0;i<n;i++){
        mx=solve(a,a[i],i,n,k);
        if(mx!=-1)
        ans=min(ans,(n-mx+i-1));
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