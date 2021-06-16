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

int t[1001][1001];

int solve(e,f){
    if(e==1 || f==1 || f==0){
        return f;
    }

    if(t[e][f]!=-1)
        return t[e][f];

    int high,low,mn=INT_MAX;

    for(int k=e;k<=f;k++){
        
        if(t[e-1][k-1]!=-1){
            low=t[e-1][k-1];
        }
        else{
            low=solve(e-1,k-1);
            t[e-1][k-1]=low;
        }

        if(t[e][f-k]!=-1){
            high=t[e][f-k];
        }
        else{
            high=solve(e,f-k);
            t[e][f-k]=high;
        }

        int temp=1+max(low,high);

        if(temp<mn){
            mn=temp;
        }
    }

    return t[e][f]=mn;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
    int e,f;
    cin>>e>>f;

    memset(t,-1,sizeof(t));

    cout<<solve(e,f)<<endl;

    return 0;
}