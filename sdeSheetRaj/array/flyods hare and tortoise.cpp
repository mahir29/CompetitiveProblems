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

int solve(vector<int> &a){
    int slow=a[0];
    int fast=a[0];

    do{
        slow=a[slow];
        fast=a[a[fast]];
    }while(slow!=fast);

    fast=a[0];

    while(slow!=fast){
        slow=a[slow];
        fast=a[fast];
    }

    return slow;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}