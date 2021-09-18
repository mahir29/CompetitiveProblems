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

void sort012(int a[], int n)
    {
        // coode here 
        int z=0,o=0,t=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)
        z++;
        else if(a[i]==1)
        o++;
        else
        t++;
    }
    
    for(int i=0;i<n;i++){
        if(z){
            a[i]=0;
            z--;
        }
        else if(o){
            a[i]=1;
            o--;
        }
        else{
            a[i]=2;
            t--;
        }
    }
    }

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}