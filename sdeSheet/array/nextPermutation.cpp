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

vi solve(vi &a){
    int ind1,ind2=0;
    int n=a.size();

    for(int i=n-2;i>=0;i--){
        if(a[i]>a[i+1]){
            ind1=i;
            break;
        }
    }

    for(int i=ind1+1;i<n;i++){
        if(a[ind1]<a[ind2]){
            ind2=i;
        }
    }

    swap(a[ind1],a[ind2]);


}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}