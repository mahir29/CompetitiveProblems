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

//l->length of rod
//n->number of possible sizez of rod that we can cut

int rodCutting(int a[],int price[],int n,int l){
    int t[n+1][l+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0 && j==0)
                t[i][j]=1;
            else if(i==0)
                t[i][j]=0;
            else if(j==0)
                t[i][j]=1;
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<l+1;j++){
            if(a[i-1]<=l){
                t[i][j]=max(price[i-1]+t[i][j-a[i-1]],t[i-1][j]);
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }

    return t[n][l];
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}
