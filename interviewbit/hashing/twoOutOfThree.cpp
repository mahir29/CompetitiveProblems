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

vector<int> solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    map<int,int> m1;
    map<int,int> m2;
    map<int,int> m3;
    
    
    for(int i=0;i<A.size();i++){
        m1[A[i]]++;
    }
    
    for(int i=0;i<B.size();i++){
        m2[B[i]]++;
    }
    
    for(int i=0;i<C.size();i++){
        m3[C[i]]++;
    }
    
    vector<int> z;

    
    for(int i=0;i<100003;i++){
        if(m1[i]>0 && m2[i]>0 || m1[i]>0 && m3[i]>0 || m3[i]>0 && m2[i]>0 )
        z.push_back(i);
    }
    
    sort(z.begin(),z.end());
    
    return z;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}