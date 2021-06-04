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

//to check if one array is subset of another


string isSubset(int a1[], int a2[], int n, int m) {
    
    set<int> s;
    
    for(int i=0;i<n;i++)
    s.insert(a1[i]);
    
    for(int i=0;i<m;i++){
        if(s.find(a2[i])==s.end())
        return "No";
    }
    
    return "Yes";
    
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}