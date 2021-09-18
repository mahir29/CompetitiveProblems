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

//Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> v;
            int i=0,j=0,k=0;
            
            while(i<n1 && j<n2 && k<n3){
                if(A[i]==B[j] && B[j]==C[k]){
                    v.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                }
                
                else if(A[i]<B[j]){
                    i++;
                }
                
                else if(B[j]<C[k]){
                    j++;
                }
                
                else{
                    k++;
                }
            }
            
            vector<int>::iterator ip;
            
            ip=unique(v.begin(),v.end());
            
            v.resize(distance(v.begin(),ip));
            
            return v;
        }

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}