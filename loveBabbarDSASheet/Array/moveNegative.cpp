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


//move negative elements to one side

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
std::vector<int> v;
	int n;
	std::cin >>n;
	int j;
	for (int i = 0; i <n ; i++) {
	    /* code */
	    cin>>j;
	    v.push_back(j);
	}
	int ptr=0;
	for(int i=0;i<n;i++){
	    if(v[i]<0){
	        swap(v[ptr],v[i]);
	        ptr++;
	    }
	}
	for (int i = 0; i <n ; i++) {
	    /* code */
	    cout<<v[i]<<" ";
	}
    return 0;
}