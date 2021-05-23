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

void insertionSort(vi &v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int temp=v[i];
        int j=i-1;
        while(j>=0 && v[j]>temp){
            v[j+1]=v[j];
            j--;
        }

        v[j+1]=temp;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vi v={3,2,4,8,5,9,1};

    insertionSort(v);

    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    //Write your code here

    return 0;
}