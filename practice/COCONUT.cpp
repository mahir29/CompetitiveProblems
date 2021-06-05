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

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
    w(x){
        int D,d,p,q;
        cin>>D>>d>>p>>q;
        int sum=0;
        sum+=D*p;
        int i=D/d;
        int n=pow(q,i);
        sum+=n*q;
        cout<<sum<<endl;
    }

    return 0;
}