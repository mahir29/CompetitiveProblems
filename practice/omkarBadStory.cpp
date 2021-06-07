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
        int n;
        cin>>n;
        vector<int> a;
        int b;
        bool f=0;
        for(int i=0;i<n;i++){
            cin>>b;
            a.push_back(b);
            if(b<0)
            f=1;
        }


        if(f==1)
        cout<<"No"<<endl;
        else{
            cout<<"Yes"<<endl;
            cout<<300<<endl;
            for(int i=0;i<300;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}