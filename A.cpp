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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c1=n,c2=0;
        int a1,a2;
        int ans=INT_MAX;
        while(c1>=c2){
            if((c1+2*c2)==n){
                if(abs(c1-c2)<ans){
                    ans=abs(c1-c2);
                    a1=c1;
                    a2=c2;
                }
            }
            c2++;
            c1-=2;
        }
        cout<<a1<<" "<<a2<<endl;
    }

    return 0;
}