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

//Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int i,k=0,l=0;
        vector<int> v;
        
        while(k<r && l<c){
            
            for(i=l;i<c;i++){
                v.push_back(matrix[k][i]);
            }
            k++;
            
            for(i=k;i<r;i++){
                v.push_back(matrix[i][c-1]);
            }
            c--;
            
            
            if(k<r){
                for(i=c-1;i>=l;i--){
                    v.push_back(matrix[r-1][i]);
                }
                r--;
            }
            
            
            if(l<c){
                for(i=r-1;i>=k;i--){
                    v.push_back(matrix[i][l]);
                }
                l++;
            }
            
        }
        
        return v;
    }

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}