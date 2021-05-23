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

void selectionSort(vi &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        int minelement=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[minelement])
            minelement=j;
        }

        swap(v[i],v[minelement]);
    }

    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here
    vi v={3,2,4,8,5,9,1};

    selectionSort(v);

    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    return 0;
}