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

int solve(vi &a){
    int leftmax=0;
    int rightmax=0;
    int left=0;
    int right=a.size()-1;
    int ans=0;

    while(left<=right){
        if(a[left]>=a[right]){
            if(a[left]>=leftmax) leftmax=a[left];
            else{
                ans+=(leftmax-a[left]);
            }
            left++;
        }
        else{
            if(a[right]>=rightmax) rightmax=a[right];
            else{
                ans+=(rightmax-a[right]);
            }
            right--;
        }
    }

    return ans;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}