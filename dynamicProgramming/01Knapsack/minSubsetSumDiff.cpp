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

//find the min diff of sum of two subsets that can be obtained from the array

vi subset(int a[],int n,int s){
    bool t[n+1][s+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<s+1;j++){
            if(i==0 && j==0)
                t[i][j]=1;
            else if(i==0)
                t[i][j]=0;
            else if(j==0)
                t[i][j]=1;
        }
    }

    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<s+1;j++){
            if(a[i-1]<=s){
                t[i][j]=t[i-1][j-a[i-1]] || t[i-1][j];
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }

    vi v;

    for(int i=0;i<(s+1)/2;i++){
        if(t[n][i]){
            v.push_back(i);
        }
    }

    return v;
}

int minSubset(int a[],int n){
     int sum=0;
     for(int i=0;i<n;i++){
         sum+=a[i];
     }

     vi v;
     v=subset(a,n,sum);

     int mn=INT_MAX;

     for(int i=0;v.size();i++){
         int diff=sum-(2*v[i]);
         mn=min(mn,diff);
     }

     return mn;
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}