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

string solve(string A) {
    
    map<char,int> a;
    
    queue<char> b;
    
    for(int i=0;i<A.size();i++){
        a[A[i]]=0;
    }
    
    string z;
    
    for(int i=0;i<A.size();i++){
        b.push(A[i]);
        a[A[i]]++;
        while(!b.empty()){
            if(a[b.front()]==1){
                z.push_back(b.front());
                break;
            }
            else if(a[b.front()]>1)
            b.pop();
        }
        
        if(b.empty()) z.push_back('#');
    }
    
   return z;
    
    
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}