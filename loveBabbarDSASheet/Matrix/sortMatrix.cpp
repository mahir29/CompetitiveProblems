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

  vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<int> v;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) v.push_back(Mat[i][j]);
        sort(v.begin(), v.end());
        int c = 0;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) Mat[i][j] = v[c++];
        return Mat;
    }

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}