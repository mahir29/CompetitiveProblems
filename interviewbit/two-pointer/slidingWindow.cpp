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

int co(vi &v,int n,int l){
    int start=0,end=0;

    int count=0;

    int sum=0;

    while(end<n){
         sum+=v[end];

         while(start<=end && sum>l){
             sum-=v[start];
             start++;
         }

         
         count+=end-start+1;
         end++;

    }

    return count;
}

int count(vi &v,int n,int b,int c){
    int c1=co(v,n,c);
    int c2=co(v,n,b-1);
    return c1-c2;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}