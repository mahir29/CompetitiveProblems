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

int removeDuplicates(vi &v){
    int count=0;

    for(int i=0;i<v.size();i++){
        if(i<v.size()-1 && v[i]==v[i+1]) continue;
        else{
            v[count]=v[i];
            count++;
        }
    }

    return count;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}


